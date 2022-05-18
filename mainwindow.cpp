#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextDocument>
#include <QtWidgets>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent):
 QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->line_id->setValidator(new  QIntValidator(100, 999, this));
    ui->tableView_chan->setModel(ch->afficher());
     ui->tableView_Qr->setModel(tch->afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pb_ajouter_clicked()
{
    int id=ui->line_id->text().toInt();
        QString emplace=ui->line_emplace->text();
        QString surface=ui->line_surface->text();
        QString plan=ui->line_plan->text();
        QString topog=ui->topog->text();
        QString cout=ui->line_cout->text();
        QString type=ui->line_type->text();
        QString autorisa=ui->line_autorisa->text();

        Chantier ch(id,emplace,surface,plan,topog,cout,type,autorisa);
        bool test=ch.ajouter();
        if (test)
         {
             ui->tableView_chan->setModel(tch->afficher());
            QMessageBox:: information(nullptr, QObject::tr("OK"),
                    QObject::tr("ajout effectué\n"
                                "click Cancel to exit."), QMessageBox::Cancel);

          }
            else
            QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                    QObject::tr("Ajout non effectuè.\n"
                                 "clicK Cancel to exit."), QMessageBox::Cancel);
}
void MainWindow::on_pb_supprimer_clicked()
{
   Chantier ch;
   int id=ui->ide->text().toInt();
   bool test=ch.supprimer(id);

   if (test)
    {

       ui->tableView_chan->setModel(tch->afficher());
       QMessageBox:: information(nullptr, QObject::tr("OK"),
               QObject::tr("Suppression effectuée\n"
                           "click Cancel to exit."), QMessageBox::Cancel);

     }
       else
       QMessageBox::critical(nullptr,QObject::tr("Not OK"),
               QObject::tr("Echec de suppression\n"
                           "click Cancel to exit."), QMessageBox::Cancel);

}



void MainWindow::on_pb_modifier_clicked()
{
    int id=ui->id_2->text().toInt();
        QString emplace=ui->emplace_2->text();
        QString surface=ui->surface_2->text();
        QString plan=ui->plan_2->text();
        QString topog=ui->topog_2->text();
        QString cout=ui->cout_2->text();
        QString type=ui->type_2->text();
        QString autorisa=ui->autorisa_2->text();

    Chantier ch(id,emplace,surface,plan,topog,cout,type,autorisa);
    Chantier ch1;
    int idd=(ui->id_2->text().toInt());
    bool test=ch.modifier(idd);
    if (test)
     {

        ui->tableView_chan->setModel(tch->afficher());
        QMessageBox:: information(nullptr, QObject::tr("OK"),
                QObject::tr("Modifier effectué\n"
                            "click Cancel to exit."), QMessageBox::Cancel);

      }
        else{
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                QObject::tr("Modifier non effectuè.\n"
                             "clicK Cancel to exit."), QMessageBox::Cancel);
    }
}


void MainWindow::on_PDF_pb_clicked()
{    Chantier ch;
     ch.CREATE_PDF();}

void MainWindow::on_triePB_clicked()
{
  ui->tab_trie->setModel(tch->trie_ChantierS());
}

void MainWindow::on_triePB_2_clicked()
{
 ui->tab_trie->setModel(tch->trie_ChantierC());
}


void MainWindow::on_pushButton_rechS_clicked()
{
    QString surface = ui->surfR->text();
            ui->tableView_chan->setModel(ch->rechercherS(surface));
}


void MainWindow::on_pushButton_rech_2_clicked()
{QString cout= ui->lineEdit_coutR->text();
     ui->tableView_chan->setModel(ch->rechercherC(cout));



}


void MainWindow::on_generateButton_clicked()
{

    int tabeq=ui->tableView_Qr->currentIndex().row();

              QVariant idd=ui->tableView_Qr->model()->data(ui->tableView_Qr->model()->index(tabeq,0));
                  QVariant emplacee=ui->tableView_Qr->model()->data(ui->tableView_Qr->model()->index(tabeq,1));



                       QString id= idd.toString();
                         QString emplace= emplacee.toString();
                         QSqlQuery qry;
                         qry.prepare("select id,cout  from GESTION_CHANTIER where (id=:id) AND (emplace=:emplace)");
                         qry.bindValue(":id",id);
                         qry.bindValue(":emplace",emplace);

                         qry.exec();

                         while(qry.next()){

                             id=qry.value(0).toString();
                             emplace=qry.value(1).toString();
                         }
                         id=QString(id);
                                id="Id_Chantier:"+id+" - Cout   _Chantier:"+emplace;
                          QrCode qr = QrCode::encodeText(id.toUtf8().constData(), QrCode::Ecc::HIGH);

                         // Read the black & white pixels
                         QImage im(qr.getSize(),qr.getSize(), QImage::Format_RGB888);
                         for (int y = 0; y < qr.getSize(); y++) {
                             for (int x = 0; x < qr.getSize(); x++) {
                                 int color = qr.getModule(x, y);  // 0 for white, 1 for black

                                 // You need to modify this part
                                 if(color==0)
                                     im.setPixel(x, y,qRgb(254, 254, 254));
                                 else
                                     im.setPixel(x, y,qRgb(0, 0, 0));
                             }
                         }
                         im=im.scaled(200,200);
                         ui->qrcode->setPixmap(QPixmap::fromImage(im));
}


