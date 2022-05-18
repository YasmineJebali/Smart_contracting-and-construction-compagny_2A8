#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>
#include <QGraphicsWidget>
#include <QSound>
#include <QDate>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QMediaPlaylist>
#include <QTimer>
#include "mailing.h"
#include "smtp.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   ui->tab_fournisseurs->setModel(Tfournisseurs->afficher());
   ui->tableView_chan->setModel(ch->afficher());
    ui->tableView_Qr->setModel(tch->afficher());
     ui->tab_employee->setModel(EMP->afficher());
     ui->tabView_Materiels->setModel(tMateriels->afficher());
      ui->tabView_Materiels->setModel(tMateriels->afficher());
        ui->tabPart->setModel(P->afficher());

   /* QPixmap pix1(":/ressources/imgs/4.jpg");
    int w1 = ui->label_back->width();
     int h1 = ui->label_back->height();
     ui->label_back->setPixmap(pix1.scaled(w1,h1,Qt::KeepAspectRatio));*/
     mSystemTrayIcon = new QSystemTrayIcon(this);
      mSystemTrayIcon->setIcon(QIcon(":/ressources/icons/1.ico"));
      mSystemTrayIcon->setVisible(true);
         ui->tabView_MatieresPrem->setModel(tMatieresPrem->afficher());
           ui->time->setText(QTime::currentTime().toString());
             ui->time_2->setText(QTime::currentTime().toString());
               ui->time_3->setText(QTime::currentTime().toString());
                 ui->time_4->setText(QTime::currentTime().toString());
                   ui->time_5->setText(QTime::currentTime().toString());
                     ui->time_6->setText(QTime::currentTime().toString());

                     int ret=A.connect_arduino(); // lancer la connexion à arduino
                     switch(ret){
                     case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
                         break;
                     case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
                        break;
                     case(-1):qDebug() << "arduino is not available";
                     }
                       QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label())); // permet de lancer
                      //le slot update_label suite à la reception du signal readyRead (reception des données).
                 }


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_start_clicked()
{
ui->stackedWidget->setCurrentIndex(1);
}




void MainWindow::on_pushButton_close_clicked()
{
    close();
}




void MainWindow::on_pbM_afF_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}



void MainWindow::on_pbMF_aj_clicked()
{
   ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pbMF_aff_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pbM_clicked()
{
     ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_affF_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pbF_Baff_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_retMF_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_backFcourr_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pbF_stat_clicked()
{
    //ui->stackedWidget->setCurrentIndex(6);
    statistic = new  statisticF;
    statistic->setWindowTitle("statistiques");
    statistic->show();


}


void MainWindow::on_backFstat_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pbF_courr_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pbM_afCh_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pbChM_aj_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_pbChM_aff_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}


void MainWindow::on_pbChM_m_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pbMCh_ret_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_pbM_afE_clicked()
{
    ui->stackedWidget->setCurrentIndex(15);
}


void MainWindow::on_pbM_afM_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}


void MainWindow::on_pbM_afMp_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);
}


void MainWindow::on_pbM_afPart_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);
}


void MainWindow::on_pushButton_bkaf_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
}


void MainWindow::on_pushButton_bkaf_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);

}


void MainWindow::on_pushButton_bkaf_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(13);
}


void MainWindow::on_pushButton_bkaf_14_clicked()
{
    ui->stackedWidget->setCurrentIndex(20);
}


void MainWindow::on_pbCh_aff_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}


void MainWindow::on_pushButton_affi2_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);
}


void MainWindow::on_pushButton_affi2_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}


void MainWindow::on_pushButton_affi2_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);
}


void MainWindow::on_pushButton_affi2_7_clicked()
{
      ui->stackedWidget->setCurrentIndex(21);
}


void MainWindow::on_pushButton_bkaf_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}


void MainWindow::on_pushButton_bkaf_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(15);
}


void MainWindow::on_pushButton_bkaf_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);
}


void MainWindow::on_pushButton_bkaf_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);
}


void MainWindow::on_pbF_rech1_clicked()
{

    int id = ui->rechFidIn->text().toInt();

            ui->tab_fournisseurs->setModel(Tfournisseurs->rechercherId(id));
}


void MainWindow::update_label()
{

    data0=A.read_from_arduino();
     data="71";
    bool test;

      test=EMP->rechercher_arduino(data);

       qDebug() <<"data"<<data;
       qDebug() <<"data0"<<data0;


       ui->label_auto->setVisible(false);
       ui->label_echec->setVisible(false);




QStringList List= data0. split("break",QString::SkipEmptyParts);
for (int i = 0; i < List. size(); i++){
 if(List[i].count(QRegExp("authorized access"))>=1) //test if the card id == employe's card
 {if (test==1)// test if the user is connected to database


    {ui->label_auto->setVisible(true);
//      ui->label_echec->setVisible(false);
        QTimer::singleShot(10000, ui->label_auto, &QLabel::hide);

        //QTimer::singleShot(1000, ui->flashing_text, &QLabel::show); //
    // alors afficher ON
    }
}
 else if((List[i].count(QRegExp("access denied"))>=1)||(test==0))//test if the card id != employe's card
       {

     //ui->label_auto->setVisible(false);
        ui->label_echec->setVisible(true);
        QTimer::singleShot(10000, ui->label_echec, &QLabel::hide);  // si les données reçues de arduino via la liaison série sont égales à 0
}
     //alors afficher ON
    }
}






void MainWindow::on_ajF_clicked()
{
    int id= ui->idF->text().toInt();
    QString nom= ui->nomF->text();
    QString adr= ui->adresseF->text();
    QString email= ui->emailF->text();
    QString livCode= ui->codeLiv->text();
   // QDate dateLiv = ui->datelivF->date();
     //QString dateString = date.toString();
    QString dateLiv =ui->dateLiv->text();
     QString tel= ui->telF->text();
   /*  QStringList tempSL = tel.split(" ");
   double value1 = QString(tempSL[0]).toDouble();*/

    fournisseur f(id,nom,adr,email,livCode,dateLiv,tel);
    bool test=f.ajouter();
   if(test)

    {

        QMessageBox::information(nullptr, QObject::tr("d'accord"),
         QObject::tr("Ajout effectué.\n""clique Ok pour quiter"),QMessageBox::Ok);
         ui->tab_fournisseurs->setModel(Tfournisseurs->afficher());
         // testInput();

     }
   else
       QMessageBox::critical(nullptr, QObject::tr("n'est pas d'accord"),
   QObject::tr("Ajout non effectué.\n""clique Ok pour quiter"),QMessageBox::Ok);
}


void MainWindow::on_pbF_modifier_clicked()
{
    int id_2= ui->idF_2->text().toInt();
    QString nom_2= ui->nomF_2->text();
    QString adr_2= ui->adresseF_2->text();
    QString email_2= ui->emailF_2->text();
    QString livCode_2= ui->codeLiv_2->text();
    QString dateLiv_2 =ui->dateLiv_2->text();
     QString tel= ui->telF_2->text();
    fournisseur f(id_2,nom_2,adr_2,email_2,livCode_2,dateLiv_2,tel);
    bool test=f.modifier(id_2);
    if(test)
  {
         ui->tab_fournisseurs->setModel(Tfournisseurs->afficher());
        QMessageBox::information(nullptr, QObject::tr("d'accord"),
         QObject::tr("Modification effectué.\n""clique Ok pour quiter"),QMessageBox::Ok);
ui->idF_2->clear();
ui->nomF_2->clear();
ui->adresseF_2->clear();
ui->emailF_2->clear();
ui->codeLiv_2->clear();
ui->dateLiv_2->clear();
ui->telF_2->clear();

}
else
        QMessageBox::critical(nullptr, QObject::tr("n'est pas d'accord"),
         QObject::tr("Mofication non effectué.\n""clique Ok pour quiter"),QMessageBox::Ok);
}


void MainWindow::on_pbF_supprimer_clicked()
{
    int id=ui->idF_2->text().toInt();
    bool test=Tfournisseurs->supprimer(id);

    if(test)
    {

        ui->tab_fournisseurs->setModel(Tfournisseurs->afficher());
        QMessageBox::information(nullptr, QObject::tr("d'accord"),
         QObject::tr("Supprression effectué.\n""clique Ok pour quiter"),QMessageBox::Ok);
        ui->idF_2->clear();
        ui->nomF_2->clear();
        ui->adresseF_2->clear();
        ui->emailF_2->clear();
        ui->codeLiv_2->clear();
        ui->dateLiv_2->clear();
        ui->telF_2->clear();
    }
    else
    {
        QMessageBox::information(nullptr, QObject::tr("n'est pas d'accord"),
         QObject::tr("Suppression non effectué.\n""clique Ok pour quiter"),QMessageBox::Ok);
}
}


void MainWindow::on_pbF_Vguide_clicked()
{


 QMediaPlaylist *playlist1 = new QMediaPlaylist;
 playlist1->addMedia(QUrl("qrc:/fournisseur/mpg/3.mpg"));
playlist1->setCurrentIndex(0);

QMediaPlayer *player1 = new QMediaPlayer;
player1->setPlaylist(playlist1);

QVideoWidget *videoWidget = new QVideoWidget;
player1->setVideoOutput(videoWidget);
videoWidget->setFullScreen(player1);
videoWidget->show();
player1->play();
QTimer::singleShot(10050,videoWidget,SLOT(close(player)));


}


void MainWindow::on_pbF_rech2_clicked()
{
    QString tel = ui->rechFtelIn->text();

            ui->tab_fournisseurs->setModel(Tfournisseurs->rechercherT(tel));
             ui->tab_fournisseurs->show();
}


void MainWindow::on_rbF_id_clicked()
{
    ui->tab_fournisseurs->setModel(Tfournisseurs->trierId());
}




void MainWindow::on_rbF_nom_clicked()
{
     ui->tab_fournisseurs->setModel(Tfournisseurs->trierN());
}


void MainWindow::on_pushButton_clicked()
{
    Smtp* smtp = new Smtp("tundevt8m@gmail.com","A1Z2E3R4","smtp.gmail.com",465);
        connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

        smtp->sendMail("tundevt8m@gmail.com",ui->dest->text(),ui->sujet->text(),ui->corps->toPlainText());


        ui->dest->setText("");
        ui->sujet->setText("");
        ui->corps->setText("");

}





void MainWindow::on_pushButton_offre_clicked()
{
  ui->tab_fournisseurs->setModel(Tfournisseurs->meilleuroffreTri());
  f->createpdf();

}


void MainWindow::on_pushButton_aj2_7_clicked() // aj partenaire
{
    int id_part=ui->pl1->text().toInt();
    QString nm_part=ui->pl2->text();
    QString pr_part=ui->pl3->text();
    int salaire_part=ui->pl4->text().toInt();
    QString email_part=ui->pl5->text();
    QString adresse_part=ui->pl6->text();
    int numtel_part=ui->pl7->text().toInt();
    QString fonct_part=ui->pl8->text();
Partenaire P(id_part,numtel_part,salaire_part,pr_part,nm_part,fonct_part,email_part,fonct_part);
bool test=P.ajouter();
if (test)
{
   historique h;
   h.save_txt(ui->pl1->text(),ui->pl2->text(),ui->pl3->text(),ui->pl4->text(),"ajout");
   ui->historique->setText(h.imp_hist());
}
}


void MainWindow::on_pbCh_aj_clicked()
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


void MainWindow::on_pbCh_retAj_clicked()
{
  ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_pbCh_rech1_clicked()
{
    QString surface = ui->rechercheinput_3->text();
            ui->tableView_chan->setModel(ch->rechercherS(surface));
}




void MainWindow::on_pbCh_rech2_clicked()
{
    QString emplace = ui->rechercheinput2_3->text();
    ui->tableView_chan->setModel(ch->rechercherEmp(emplace));

}


void MainWindow::on_radioButton_id_3_clicked()//tri emplacement
{
     ui->tableView_chan->setModel(ch->trie_Emp());
}


void MainWindow::on_radioButton_sal_3_clicked()//tri cout
{
     ui->tableView_chan->setModel(ch->trie_C());
}


void MainWindow::on_pbCh_modifier_clicked()
{
    int id=ui->line_id_2->text().toInt();
        QString emplace=ui->line_emplace_2->text();
        QString surface=ui->line_surface_2->text();
        QString plan=ui->line_plan_2->text();
        QString topog=ui->topog_2->text();
        QString cout=ui->line_cout_2->text();
        QString type=ui->line_type_2->text();
        QString autorisa=ui->line_autorisa_2->text();

    Chantier ch(id,emplace,surface,plan,topog,cout,type,autorisa);
    int idd=(ui->line_id_2->text().toInt());
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


void MainWindow::on_pbCh_supprimer_clicked()
{
    int id=ui->line_id_2->text().toInt();
    bool test=ch->supprimer(id);

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


void MainWindow::on_pushButton_cour_6_clicked()//impression
{
    ch->CREATE_PDF();
}


void MainWindow::on_pushButton_cour_5_clicked()//QRcode
{
 ui->stackedWidget->setCurrentIndex(19);
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


void MainWindow::on_pushButton_2_clicked()//back to aff chantier
{
    ui->stackedWidget->setCurrentIndex(8);
}


void MainWindow::on_pushButton_stat_3_clicked()
{
    p = new class map(this);
      p->setWindowTitle("Map");
    p->show() ;
}


void MainWindow::on_pushButton_ajou_5_clicked() //redirect to aj Emp from menu
{
     ui->stackedWidget->setCurrentIndex(16);
}


void MainWindow::on_pushButton_affi_5_clicked() //redirect to aff Emp from menu
{
     ui->stackedWidget->setCurrentIndex(17);
}


void MainWindow::on_pushButton_menu_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_ajou_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}


void MainWindow::on_pushButton_affi_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}


void MainWindow::on_pushButton_menu_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_ajou_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(13);
}


void MainWindow::on_pushButton_affi_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);
}


void MainWindow::on_pushButton_menu_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_ajou_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(20);
}


void MainWindow::on_pushButton_affi_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(21);
}


void MainWindow::on_pushButton_menu_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_aj2_6_clicked() //aj emp
{
    int id=ui->le_id->text().toInt();
    int salaire=ui->salaire->text().toInt();
    QString nom=ui->le_nom->text();
    QString prenom=ui->le_prenom->text();
    QString adresse=ui->adresse->text();
    QString email=ui->email->text();
    QString fonction=ui->fonction->text();

    employee E(id,salaire,nom,prenom,adresse,email,fonction);

    bool test=E.ajouter();
    if (test)
     {

        ui->tab_employee->setModel(E.afficher());
        QMessageBox::information(nullptr, QObject::tr("d'accord"),
         QObject::tr("Ajout effectué.\n""clique Ok pour quiter"),QMessageBox::Ok);

      }
        else
        QMessageBox::information(nullptr, QObject::tr("nest pas d'accord"),
         QObject::tr("Ajout non effectué.\n""clique Ok pour quiter"),QMessageBox::Ok);
}


void MainWindow::on_evaluer_clicked()
{
    int id=ui->identifiant->text().toInt();
    double range=ui->Slider->value();
    qDebug()<<id<<range;

    bool test=EMP->rating(id,range);
    if (test)
    {
    ui->rated->setModel(EMP->afficherClassement());
    ui->rated->show();
    }
}


void MainWindow::on_recherche_6_clicked()//recherche id emp
{
    int id=ui->rechercheinput_6->text().toInt();

   //ui->setupUi(this);
   ui->tab_employee->setModel(EMP->rechercher(id));
   ui->tab_employee->show();
}


void MainWindow::on_rechercheNom_6_clicked()//recherche nom emp
{    QString nom=ui->rechercheinput2_6->text();
     ui->tab_employee->setModel(EMP->rechercherNom(nom));
     ui->tab_employee->show();

}


void MainWindow::on_pb_modifier_6_clicked() // modifier emp
{
    int id=ui->le_id_6->text().toInt();
    int salaire=ui->salaire_2->text().toInt();
    QString nom=ui->le_nom_2->text();
    QString prenom=ui->le_prenom_2->text();
    QString adresse=ui->adresse_2->text();
    QString email=ui->email_2->text();
    QString fonction=ui->fonction_2->text();

    employee E(id,salaire,nom,prenom,adresse,email,fonction);
    bool test=E.modifier();
    if (test)
     {
         ui->tab_employee->setModel(E.afficher());
         QMessageBox::information(nullptr, QObject::tr("d'accord"),
          QObject::tr("Modification effectué.\n""clique Ok pour quiter"),QMessageBox::Ok);
        ui->le_id_4->clear();
        ui->salaire_2->clear();
        ui->le_nom_2->clear();
        ui->le_prenom_2->clear();
        ui->adresse_2->clear();
        ui->email_2->clear();
        ui->fonction_2->clear();

      }
        else
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                QObject::tr("Modification non effectuè.\n"
                             "clicK OK to exit."), QMessageBox::Ok);

}


void MainWindow::on_radioButton_id_6_clicked() // tri id
{
    ui->tab_employee->setModel(EMP->trierId());
    ui->tab_employee->show();
}


void MainWindow::on_radioButton_sal_6_clicked()//tri salaire
{
    ui->tab_employee->setModel(EMP->trierSal());
    ui->tab_employee->show();

}


void MainWindow::on_pushButton_cal_6_clicked()//mailing emp
{
  ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_stat_6_clicked() // stat emp
{
    QSqlQueryModel * model= new QSqlQueryModel();
                              model->setQuery("select * from employes where SAL_EMP < 10 ");
                              float salaire1=model->rowCount();
                              model->setQuery("select * from employes where SAL_EMP between 10 and 20 ");
                              float salaire2=model->rowCount();
                              model->setQuery("select * from employes where SAL_EMP >20 ");
                              float salaire3=model->rowCount();
                              float total=salaire1+salaire2+salaire3;
                              QString a=QString("inferieur a 10  "+QString::number((salaire1*100)/total,'f',2)+"%" );
                              QString b=QString("entre 10 et 20  "+QString::number((salaire2*100)/total,'f',2)+"%" );
                              QString c=QString("+20  "+QString::number((salaire3*100)/total,'f',2)+"%" );
                              QPieSeries *series = new QPieSeries();
                              series->append(a,salaire1);
                              series->append(b,salaire2);
                              series->append(c,salaire3);
                      if (salaire1!=0)
                      {QPieSlice *slice = series->slices().at(0);
                       slice->setLabelVisible();
                       slice->setPen(QPen());}
                      if ( salaire2!=0)
                      {
                               // Add label, explode and define brush for 2nd slice
                               QPieSlice *slice1 = series->slices().at(1);
                               //slice1->setExploded();
                               slice1->setLabelVisible();
                      }
                      if(salaire3!=0)
                      {
                               // Add labels to rest of slices
                               QPieSlice *slice2 = series->slices().at(2);
                               //slice1->setExploded();
                               slice2->setLabelVisible();
                      }
                              // Create the chart widget
                              QChart *chart = new QChart();
                              // Add data to chart with title and hide legend
                              chart->addSeries(series);
                              chart->setTitle("Pourcentage Par salaire :Nombre des employes disponibles "+ QString::number(total));
                              chart->legend()->hide();
                              // Used to display the chart
                              QChartView *chartView = new QChartView(chart);
                              chartView->setRenderHint(QPainter::Antialiasing);
                              chartView->resize(1000,500);
                              chartView->show();

}


void MainWindow::on_pushButton_cour_11_clicked() // calendrier
{
     ui->stackedWidget->setCurrentIndex(23);

}






void MainWindow::on_backCal_clicked() // back mil cal lil aff emp
{
    ui->stackedWidget->setCurrentIndex(17);
}


void MainWindow::on_pb_ajouter_2_clicked() // reserver cal emp
{
    int id=ui->le_id_5->text().toInt();
    QDate date_deb=ui->le_date_deb->date();
   QDate date_fin=ui->le_date_fin->date();
  int periode=ui->la_periode->text().toInt();

    calendrier c(id,date_deb,date_fin,periode);

bool test=c.ajouter();
if(test){
    QMessageBox::information(nullptr,QObject::tr("calendrier"),QObject::tr("calendrier ajouté\n" "click ok to exit"),QMessageBox::Ok);
    ui->le_id_5->setText("");//bech ba3ed mankamel l ajout yarja3 a 0
    ui->tab_etudiant_2->setModel(c.afficher());//actualisation


    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
                             notifyIcon->show();
                             notifyIcon->setIcon(QIcon(":/ressources/imgs/9.png"));

                             notifyIcon->showMessage("employer   ","calendrier Ajouté",QSystemTrayIcon::Information,15000);
             QMessageBox::information(nullptr, QObject::tr("OK"),
                         QObject::tr("Ajout effectué.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);


}
else{
    QMessageBox::critical(nullptr,QObject::tr("calendrier"),QObject::tr("Erreur!\n" "click ok to exit"),QMessageBox::Ok);
}

}


void MainWindow::on_le_modifier_2_clicked() //modifier cal emp
{
    int id= ui->le_id_5->text().toInt();

            QDate date_deb=ui->le_date_deb->date();
            QDate date_fin=ui->le_date_fin->date();
            int periode= ui->la_periode->text().toInt();
                           calendrier c(id,date_deb,date_fin,periode);
                           ui->le_id_5->setText("");


                bool test = c.update(id,date_deb,date_fin,periode);


                if(test)

                {
                     ui->tab_etudiant_2->setModel(c.afficher());
                     QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
                                              notifyIcon->show();
                                              notifyIcon->setIcon(QIcon(":/ressources/imgs/9.png"));

                                              notifyIcon->showMessage("employer  ","calendrier Modifier",QSystemTrayIcon::Information,15000);
                              QMessageBox::information(nullptr, QObject::tr("OK"),
                                          QObject::tr("Modification effectué.\n"
                                                      "Click Cancel to exit."), QMessageBox::Cancel);
                    QMessageBox::information(nullptr, QObject::tr("update "),
                                QObject::tr("Participant modifie\n"
                "Click Cancel to exit."), QMessageBox::Cancel);
                }
}


void MainWindow::on_pb_supprimer_2_clicked() // supprimer cal
{

    calendrier c1;
    c1.setid(ui->le_id_sup_3->text().toInt());
  qDebug() <<ui->le_id_sup_3->text().toInt();
        bool test=c1.supprimer(c1.getid());
        QMessageBox msgBox;
        if(test)
           { msgBox.setText("Suppression avec succes.");
            ui->tab_etudiant_2->setModel(c1.afficher());
            QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
                                     notifyIcon->show();
                                     notifyIcon->setIcon(QIcon(":/ressources/imgs/9.png"));

                                     notifyIcon->showMessage("employer   ","calendrier supprimer",QSystemTrayIcon::Information,15000);
                     QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("suppression effectué.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);

    }
        else
            msgBox.setText("Echec de suppression");
            msgBox.exec();

}


void MainWindow::on_pushButton_aj2_4_clicked() // ajout materiels
{
    int ref= ui->lineEdit_ref_4->text().toInt();
    QString nom= ui->lineEdit_nom_4->text();
    int Qt= ui->SpinBox_Qt->text().toInt();
    QString prttc= ui->DoubleS_Prttc->text();
    QString prht= ui->DoubleS_Prht->text();
    QString dispo= ui->comboBox_dispo->currentText();
    materiels m(ref,nom,Qt,prttc,prht,dispo);
    bool test=m.ajouter();
   if(test)

    {
   ui->tabView_Materiels->setModel(tMateriels->afficher());
        QMessageBox::information(nullptr, QObject::tr("d'accord"),
         QObject::tr("Ajout effectué.\n""clique Ok pour quiter"),QMessageBox::Ok);
         // testInput();
          tMateriels->notification_ajout();
     }
   else
       QMessageBox::critical(nullptr, QObject::tr("n'est pas d'accord"),
   QObject::tr("Ajout non effectué.\n""clique Ok pour quiter"),QMessageBox::Ok);
}


void MainWindow::on_recherche_4_clicked() // rech ref materiels
{
    int reference = ui->rechercheinput_4->text().toUInt();

            ui->tabView_Materiels->setModel(tMateriels->rechercherR(reference));
}


void MainWindow::on_rechercheNom_4_clicked() //rech nom materiels
{
    QString nom= ui->rechercheinput2_4->text();
    ui->tabView_Materiels->setModel(tMateriels->rechercherN(nom));
}




void MainWindow::on_pb_modifier_4_clicked() //modification materiels
{
    int ref= ui->l1->text().toInt();
    QString nom= ui->l2->text();
    int Qt= ui->l3->text().toInt();
    QString prttc= ui->l4->text();
    QString prht= ui->l5->text();
    QString dispo= ui->l6->currentText();
    materiels m(ref,nom,Qt,prttc,prht,dispo);
    bool test=m.modifier(ref);
    if(test)
  {
        tMateriels->notification_modifier();

        ui->tabView_Materiels->setModel(tMateriels->afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("d'accord"),
         QObject::tr("Modification effectué.\n""clique Ok pour quiter"),QMessageBox::Ok);
ui->l1->clear();
ui->l2->clear();
ui->l3->clear();
ui->l4->clear();
ui->l5->clear();
ui->l6->clear();

}
else
        QMessageBox::critical(nullptr, QObject::tr("n'est pas d'accord"),
         QObject::tr("Mofication non effectué.\n""clique Ok pour quiter"),QMessageBox::Ok);


}


void MainWindow::on_radioButton_id_4_clicked() //tri ref mat radio
{
     ui->tabView_Materiels->setModel(tMateriels->trierR());
}


void MainWindow::on_radioButton_sal_4_clicked() // tri qt mat radio
{
    ui->tabView_Materiels->setModel(tMateriels->trierN());
}


void MainWindow::on_pb_supprimer_4_clicked() // supprimer mat
{
    int ref=ui->l1->text().toUInt();
    bool test=tMateriels->supprimer(ref);

    if(test)
    {

        ui->tabView_Materiels->setModel(tMateriels->afficher());
        QMessageBox::information(nullptr, QObject::tr("d'accord"),
         QObject::tr("Supprression effectué.\n""clique Ok pour quiter"),QMessageBox::Ok);
        tMateriels->notification_supprimer();
        ui->l1->clear();
        ui->l2->clear();
        ui->l3->clear();
        ui->l4->clear();
        ui->l5->clear();
        ui->l6->clear();
       // hide();
    }
    else
    {
        QMessageBox::information(nullptr, QObject::tr("n'est pas d'accord"),
         QObject::tr("Suppression non effectué.\n""clique Ok pour quiter"),QMessageBox::Ok);
    }
}


void MainWindow::on_pushButton_cour_7_clicked() // impression mat excel
{
    tMateriels->exportTableViewToCSV();

}




void MainWindow::on_pushButton_cour_8_clicked() //notification mat
{
    mSystemTrayIcon->showMessage(tr("Centre de notifications"),tr("il n'y a pas de notification pour le moment"));
}


void MainWindow::on_pushButton_stat_4_clicked()//stat mat
{
    statistic1 = new  Statistic;
    statistic1->setWindowTitle("statistic");
    statistic1->show();

}


void MainWindow::on_pushButton_aj2_5_clicked()
{
    int ref= ui->l11->text().toInt();
     QString nom= ui->l22->text();
     int Qt= ui->l33->text().toInt();
     QString prttc= ui->l44->text();
     QString prht= ui->l55->text();
     QString type= ui->l66->currentText();
     QString dispo= ui->l77->currentText();
     matieresprem m(ref,nom,Qt,prttc,prht,type,dispo);
     bool test=m.ajouter();
    if(test)

     {

        QMessageBox:: information(nullptr, QObject::tr("OK"),
                QObject::tr("ajout effectué\n"
                            "click Cancel to exit."), QMessageBox::Cancel);

      }
        else
       { QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                QObject::tr("Ajout non effectuè.\n"
                             "clicK Cancel to exit."), QMessageBox::Cancel);

}
}

void MainWindow::on_recherche_5_clicked() // rech mp ref
{
    int ref = ui->rechercheinput_5->text().toUInt();



            ui->tabView_MatieresPrem->setModel(tMatieresPrem->rechercherR(ref));
}


void MainWindow::on_rechercheNom_5_clicked() //rech mp nom
{
    QString cout= ui->rechercheinput2_5->text();
     ui->tabView_MatieresPrem->setModel(tMatieresPrem->rechercherC(cout));
}



void MainWindow::on_pb_modifier_5_clicked() // modification matprem
{
    int ref= ui->lineEdit_ref2->text().toInt();
    QString nom= ui->lineEdit_nom2->text();
    int Qt= ui->SpinBox_Qt_2->text().toInt();
    QString prttc= ui->DoubleS_Prht_2->text();
    QString prht= ui->DoubleS_Prttc_2->text();
    QString type= ui->comboBox_type_2->currentText();
    QString dispo= ui->comboBox_dispo_2->currentText();
    matieresprem m(ref,nom,Qt,prttc,prht,type,dispo);
    bool test=m.modifier(ref);
    if(test)
  {



        ui->tabView_MatieresPrem->setModel(tMatieresPrem->afficher());//refresh

        QMessageBox:: information(nullptr, QObject::tr("OK"),
                QObject::tr("Modification effectué\n"
                            "click Cancel to exit."), QMessageBox::Cancel);
ui->lineEdit_ref2->clear();
ui->lineEdit_nom2->clear();
ui->SpinBox_Qt_2->clear();
ui->DoubleS_Prht_2->clear();
ui->DoubleS_Prttc_2->clear();
ui->comboBox_type_2->clear();
ui->comboBox_dispo_2->clear();

}
else

       { QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                QObject::tr("Modification non effectuè.\n"
                             "clicK Cancel to exit."), QMessageBox::Cancel);
    }

}


void MainWindow::on_pb_supprimer_5_clicked() // suppr matieres premieres
{
    int ref=ui->lineEdit_ref2->text().toUInt();
    bool test=tMatieresPrem->supprimer(ref);

    if(test)
    {

        ui->tabView_MatieresPrem->setModel(tMatieresPrem->afficher());
        QMessageBox:: information(nullptr, QObject::tr("OK"),
                QObject::tr("Suppression effectué\n"
                            "click Cancel to exit."), QMessageBox::Cancel);

        ui->lineEdit_ref2->clear();
        ui->lineEdit_nom2->clear();
        ui->SpinBox_Qt_2->clear();
        ui->DoubleS_Prht_2->clear();
        ui->DoubleS_Prttc_2->clear();
        ui->comboBox_type_2->clear();
        ui->comboBox_dispo_2->clear();
       // hide();
    }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                QObject::tr("Suppression non effectuè.\n"
                             "clicK Cancel to exit."), QMessageBox::Cancel);
    }
}


void MainWindow::on_radioButton_id_5_clicked() // Tri radio mp
{
      ui->tabView_MatieresPrem->setModel(tMatieresPrem->trierR());
}


void MainWindow::on_radioButton_sal_5_clicked()
{
    ui->tabView_MatieresPrem->setModel(tMatieresPrem->trierN());
}


void MainWindow::on_pushButton_cour_9_clicked() // status
{
    ui->tabView_MatieresPrem->setModel(tMatieresPrem->statistiques());

}




void MainWindow::on_pushButton_cal_5_clicked() //charger img
{
    QFileDialog dialog(this);
    QDir dir;
        dialog.setNameFilter(tr("Images (*.png *.bmp *.jpg)"));
        dialog.setViewMode(QFileDialog::Detail);
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "C:/Users/jihed zavou/Desktop/Qt Integration/images");
        QImage *img = new QImage(dir.absoluteFilePath(fileName));
        int w1 = ui->label_img->width();
         int h1 = ui->label_img->height();
          QPixmap map = QPixmap::fromImage(img->scaled(w1,h1,Qt::KeepAspectRatio,Qt::FastTransformation));
           ui->label_img->setPixmap(map);
           ui->label_img->show();

}


void MainWindow::on_pushButton_cour_10_clicked()//qr code mp
{
     ui->stackedWidget->setCurrentIndex(23);
}


void MainWindow::on_generateButton_2_clicked()
{
    int tabeq=ui->tabView_MatieresPrem->currentIndex().row();

              QVariant idd=ui->tabView_MatieresPrem->model()->data(ui->tabView_MatieresPrem->model()->index(tabeq,0));
                 QVariant nmm=ui->tabView_MatieresPrem->model()->data(ui->tabView_MatieresPrem->model()->index(tabeq,1));
                  QVariant qtt=ui->tabView_MatieresPrem->model()->data(ui->tabView_MatieresPrem->model()->index(tabeq,2));



                       QString id= idd.toString();
                         QString n= nmm.toString();
                         QString qt= qtt.toString();
                         QSqlQuery qry;
                         qry.prepare("select REF_MP NM_MP  from MP where (REF_MP=:REF) AND (NM_MP=:NOM) AND (QT_MP=:QT");
                         qry.bindValue(":REF",idd);
                         qry.bindValue(":NOM",nmm);
                         qry.bindValue(":QT",qtt);
                         qry.exec();

                         while(qry.next()){

                             id=qry.value(0).toString();
                             n=qry.value(1).toString();
                             qt=qry.value(2).toString();


                         }
                         id=QString(id);
                                id="Reference_MP:"+id+"| NOM_MP:"+n+"| Quantité_MP:"+qt;
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
                         ui->qrcode_2->setPixmap(QPixmap::fromImage(im));

}




void MainWindow::on_pushButton_3_clicked() //ret affich mp
{
    ui->stackedWidget->setCurrentIndex(14);
}






void MainWindow::on_pushButton_cour_14_clicked()
{
    ui->stackedWidget->setCurrentIndex(24);
}


void MainWindow::on_pushButton_cour_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(25);
}


void MainWindow::on_pushButton_5_clicked() // back to aff emp
{
    ui->stackedWidget->setCurrentIndex(17);
}


void MainWindow::on_dark_6_clicked() // theme sombre
{
    QFile styleSheetFile(":/employe/Diffnes.qss");
      styleSheetFile.open(QFile::ReadOnly);
      QString styleSheet = QLatin1String(styleSheetFile.readAll());
      MainWindow::setStyleSheet(styleSheet);
}


void MainWindow::on_light_6_clicked()
{
    QFile styleSheetFile(":/employe/Integrid.qss");
      styleSheetFile.open(QFile::ReadOnly);
      QString styleSheet = QLatin1String(styleSheetFile.readAll());
      MainWindow::setStyleSheet(styleSheet);
}


void MainWindow::on_pb_supprimer_6_clicked() // supprimer employe
{
    int id=ui->le_id_6->text().toUInt();
    bool test=EMP->suppprimer(id);

    if(test)
    {

        ui->tab_employee->setModel(EMP->afficher());
        QMessageBox::information(nullptr, QObject::tr("d'accord"),
         QObject::tr("Supprression effectué.\n""clique Ok pour quiter"),QMessageBox::Ok);
        ui->le_id_6->clear();
        ui->le_nom_2->clear();
        ui->le_prenom_2->clear();
        ui->adresse_2->clear();
        ui->email_2->clear();
        ui->salaire_2->clear();
       ui->fonction_2->clear();
       // hide();
    }
    else
    {
        QMessageBox::information(nullptr, QObject::tr("n'est pas d'accord"),
         QObject::tr("Suppression non effectué.\n""clique Ok pour quiter"),QMessageBox::Ok);
    }
}


void MainWindow::on_pbF_ct1_clicked() // theme sombre
{
    QFile styleSheetFile(":/employe/Diffnes.qss");
      styleSheetFile.open(QFile::ReadOnly);
      QString styleSheet = QLatin1String(styleSheetFile.readAll());
      MainWindow::setStyleSheet(styleSheet);

}




void MainWindow::on_pbF_ct2_clicked() //theme claire
{
    QFile styleSheetFile(":/employe/Integrid.qss");
      styleSheetFile.open(QFile::ReadOnly);
      QString styleSheet = QLatin1String(styleSheetFile.readAll());
      MainWindow::setStyleSheet(styleSheet);
}


void MainWindow::on_dark_3_clicked() // theme sombre
{
    QFile styleSheetFile(":/employe/Diffnes.qss");
      styleSheetFile.open(QFile::ReadOnly);
      QString styleSheet = QLatin1String(styleSheetFile.readAll());
      MainWindow::setStyleSheet(styleSheet);
}


void MainWindow::on_light_3_clicked()
{
    QFile styleSheetFile(":/employe/Integrid.qss");
      styleSheetFile.open(QFile::ReadOnly);
      QString styleSheet = QLatin1String(styleSheetFile.readAll());
      MainWindow::setStyleSheet(styleSheet);
}


void MainWindow::on_dark_4_clicked() // theme sombre
{
    QFile styleSheetFile(":/employe/Diffnes.qss");
      styleSheetFile.open(QFile::ReadOnly);
      QString styleSheet = QLatin1String(styleSheetFile.readAll());
      MainWindow::setStyleSheet(styleSheet);
}


void MainWindow::on_light_4_clicked()
{
    QFile styleSheetFile(":/employe/Integrid.qss");
      styleSheetFile.open(QFile::ReadOnly);
      QString styleSheet = QLatin1String(styleSheetFile.readAll());
      MainWindow::setStyleSheet(styleSheet);
}


void MainWindow::on_pbPartCt1_clicked()  // theme sombre
{
    QFile styleSheetFile(":/employe/Diffnes.qss");
      styleSheetFile.open(QFile::ReadOnly);
      QString styleSheet = QLatin1String(styleSheetFile.readAll());
      MainWindow::setStyleSheet(styleSheet);

}

void MainWindow::on_pbPart_Ct2_clicked()
{
    QFile styleSheetFile(":/employe/Integrid.qss");
      styleSheetFile.open(QFile::ReadOnly);
      QString styleSheet = QLatin1String(styleSheetFile.readAll());
      MainWindow::setStyleSheet(styleSheet);
}


void MainWindow::on_dark_5_clicked()
{
    QFile styleSheetFile(":/employe/Diffnes.qss");
      styleSheetFile.open(QFile::ReadOnly);
      QString styleSheet = QLatin1String(styleSheetFile.readAll());
      MainWindow::setStyleSheet(styleSheet);
}


void MainWindow::on_light_5_clicked()
{
    QFile styleSheetFile(":/employe/Integrid.qss");
      styleSheetFile.open(QFile::ReadOnly);
      QString styleSheet = QLatin1String(styleSheetFile.readAll());
      MainWindow::setStyleSheet(styleSheet);

}


void MainWindow::on_pushButton_6_clicked()
{
     ui->stackedWidget->setCurrentIndex(21);

}


void MainWindow::on_pushButton_7_clicked()
{
    A.write_to_arduino("1");

}


void MainWindow::on_pushButton_8_clicked()
{
    A.write_to_arduino("0");
}

