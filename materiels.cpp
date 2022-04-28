#include "ui_materiels.h"
#include "materiels.h"
#include <QString>
#include <QMessageBox>
#include <QtWidgets>
#include <QPainter>
#include <QtPrintSupport/QPrinter>
#include <QFileDialog>
#include <QSqlQueryModel>
#include <QTextDocument>
#include <QSystemTrayIcon>

materiels::materiels(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::materiels)
{
    ui->setupUi(this);
   QMovie* movie_waiti = new QMovie(":/ressources/gifs/3.gif");
    ui->label_waiting->setGeometry(550,50,100,165);
    ui->label_waiting->setMovie(movie_waiti);
    movie_waiti->start();

    QMovie* movie_click = new QMovie(":/ressources/gifs/5.gif");
    ui->label_click->setGeometry(290,140,180,102);
    ui->label_click->setMovie(movie_click);
    movie_click->start();


    QMovie* movie_backr = new QMovie(":/ressources/gifs/6.gif");
   // ui->label_backr->setGeometry(290,140,180,102);
    ui->label_backr->setMovie(movie_backr);
    movie_click->start();

    QPixmap pix1(":/ressources/imgs/6.png");
    ui->label_excel->setPixmap(pix1);
    int w1 = ui->label_excel->width();
     int h1 = ui->label_excel->height();
     ui->label_excel->setPixmap(pix1.scaled(w1,h1,Qt::KeepAspectRatio));

     QPixmap pix2(":/ressources/imgs/7.png");
     ui->label_chart->setPixmap(pix2);
     int w2 = ui->label_chart->width();
      int h2 = ui->label_chart->height();
      ui->label_chart->setPixmap(pix2.scaled(w2,h2,Qt::KeepAspectRatio));


      QPixmap pix3(":/ressources/imgs/9.png");
      ui->label_notific->setPixmap(pix3);
      int w3 = ui->label_notific->width();
       int h3 = ui->label_notific->height();
       ui->label_notific->setPixmap(pix3.scaled(w3,h3,Qt::KeepAspectRatio));

    mSystemTrayIcon = new QSystemTrayIcon(this);
     mSystemTrayIcon->setIcon(QIcon(":/ressources/icons/1.ico"));
     mSystemTrayIcon->setVisible(true);

    ui->tabView_Materiels->setModel(tMateriels->afficher());
}

materiels::materiels(int ref,QString nom,int Qt,QString Prttc,QString Prht ,QString dispo)
{
    this->ref=ref;
    this->nom=nom;
    this->Qt=Qt;
    this->prttc=Prttc;
    this->prht=Prht;
    this->dispo=dispo;


}

materiels::~materiels()
{
    delete ui;

}


bool materiels::ajouter()
{
    QSqlQuery  query;
    QString res=QString::number(ref);
     query.prepare("INSERT INTO MATERIELS(REF,NOM,QT,PRTTC,PRHT,DISPO)" "VALUES(:ref,:nom,:Qt,:Prttc,:Prht,:dispo)") ;
     query.bindValue(":ref",res);
     query.bindValue(":nom",nom);
     query.bindValue(":Qt",Qt);
     query.bindValue(":Prttc",prttc);
     query.bindValue(":Prht",prht);
     query.bindValue(":dispo",dispo);

     return query.exec();

}

bool materiels::modifier(int ref)
{
    QSqlQuery  query;
     QString res= QString::number(ref);
     query.prepare("update MATERIELS set REF = :ref, NOM = :nom, QT = :Qt, PRTTC = :Prttc, PRHT = :Prht, DISPO = :dispo where REF = :ref");
     query.bindValue(":ref",res);
     query.bindValue(":nom",nom);
     query.bindValue(":Qt",Qt);
     query.bindValue(":Prttc",prttc);
     query.bindValue(":Prht",prht);
     query.bindValue(":dipso",dispo);

     return query.exec();
}



QSqlQueryModel * materiels::afficher(){


    QSqlQueryModel * model= new QSqlQueryModel();
        model->setQuery("select * from MATERIELS");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("REF"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("QT"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRTTC"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("PRHT"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("DISPO"));
        return model;

}

bool materiels::supprimer(int ref)
{
    QSqlQuery  query;
    QString res= QString::number(ref);
     query.prepare("Delete from MATERIELS where REF = :ref");
     query.bindValue(":ref",res);
return query.exec();

}

void materiels::on_pushButton_suppr_clicked()
{
    int ref=ui->lineEdit_rf->text().toUInt();
    bool test=tMateriels->supprimer(ref);

    if(test)
    {

        ui->tabView_Materiels->setModel(tMateriels->afficher());
        QMessageBox::information(nullptr, QObject::tr("Supprimer"),
        QObject::tr("Suppression avec succée"), QMessageBox::Ok);
        notification_supprimer();
        ui->lineEdit_rf->clear();
        ui->lineEdit_nom->clear();
        ui->spinBox_Qt->clear();
        ui->DoubleS_prttc->clear();
        ui->DoubleS_prht->clear();
        ui->RoomList_dispo->clear();
       // hide();
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Supprimer"),
        QObject::tr("Suppression echoués"), QMessageBox::Ok);
    }
}


QSqlQueryModel *materiels::rechercherR(int ref)
{
    QSqlQueryModel * model1=new QSqlQueryModel();
    QString res=QString::number(ref);


    model1->setQuery("select * from MATERIELS where REF LIKE '"+res+"%'");
    model1->setHeaderData(0, Qt::Horizontal, QObject::tr("REF"));
    model1->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model1->setHeaderData(2, Qt::Horizontal, QObject::tr("QT"));
    model1->setHeaderData(3, Qt::Horizontal, QObject::tr("PRTTC"));
    model1->setHeaderData(4, Qt::Horizontal, QObject::tr("PRHT"));
    model1->setHeaderData(5, Qt::Horizontal, QObject::tr("DISPO"));


       return model1;


}

QSqlQueryModel *materiels::rechercherN(QString nom)
{
    QSqlQueryModel * model1=new QSqlQueryModel();



    model1->setQuery("select * from MATERIELS where NOM LIKE '"+nom+"%'");
    model1->setHeaderData(0, Qt::Horizontal, QObject::tr("REF"));
    model1->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model1->setHeaderData(2, Qt::Horizontal, QObject::tr("QT"));
    model1->setHeaderData(3, Qt::Horizontal, QObject::tr("PRTTC"));
    model1->setHeaderData(4, Qt::Horizontal, QObject::tr("PRHT"));
    model1->setHeaderData(5, Qt::Horizontal, QObject::tr("DISPO"));


       return model1;


}


QSqlQueryModel *materiels::trierR()
{
              QSqlQuery * q = new  QSqlQuery ();
                     QSqlQueryModel * model = new  QSqlQueryModel ();
                     q->prepare("SELECT * FROM MATERIELS order by REF DESC");
                     q->exec();
                     model->setQuery(*q);
                     return model;

}

QSqlQueryModel *materiels::trierN()
{

              QSqlQuery * q = new  QSqlQuery ();
                     QSqlQueryModel * model = new  QSqlQueryModel ();
                     q->prepare("SELECT * FROM MATERIELS order by NOM DESC");
                     q->exec();
                     model->setQuery(*q);
                     return model;

}


void materiels::Statistic(QVector<double>* ticks,QVector<QString> *labels)
{
    QSqlQuery q;
    int i=0;
    q.exec("SELECT PRHRT from MATERIELS");
    while (q.next())
    {
        QString prix = q.value(0).toString();
        i++;
        *ticks<<i;
        *labels <<prix;
    }
}



void materiels::exportTableViewToCSV() {
            QString filters("CSV files (*.csv);;All files (*.*)");
            QString defaultFilter("CSV files (*.csv)");
            QString fileName = QFileDialog::getSaveFileName(0, "Save file", QCoreApplication::applicationDirPath(),
                               filters, &defaultFilter);
            QFile file(fileName);

            QAbstractItemModel *model =  ui->tabView_Materiels->model();
            if (file.open(QFile::WriteOnly | QFile::Truncate)) {
                QTextStream data(&file);
                QStringList strList;
                for (int i = 0; i < model->columnCount(); i++) {
                    if (model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString().length() > 0)
                        strList.append("\"" + model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString() + "\"");
                    else
                        strList.append("");
                }
                data << strList.join(";") << "\n";
                for (int i = 0; i < model->rowCount(); i++) {
                    strList.clear();
                    for (int j = 0; j < model->columnCount(); j++) {

                        if (model->data(model->index(i, j)).toString().length() > 0)
                            strList.append("\"" + model->data(model->index(i, j)).toString() + "\"");
                        else
                            strList.append("");
                    }
                    data << strList.join(";") + "\n";
                }
                file.close();
            }

        }


/*int materiels::countRow()
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM MATERIELS"  ";");
    query.exec();
    query.first();

    return query.value(0).toInt();
}
*/

void materiels::on_pushButton_ajou_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}



void materiels::on_pushButton_affi_clicked() //afficher vehicule
{
     ui->stackedWidget->setCurrentIndex(2);

}


void materiels::on_pushButton_affi2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}




void materiels::on_pushButton_bk2_clicked() //back afficher
{
     ui->stackedWidget->setCurrentIndex(0);

}
void materiels::on_pushButton_bkaf_clicked() //back afficher
{
     ui->stackedWidget->setCurrentIndex(0);

}


void materiels::on_pushButton_aj2_clicked()
{
    int ref= ui->lineEdit_ref->text().toInt();
    QString nom= ui->lineEdit_nom->text();
    int Qt= ui->SpinBox_Qt->text().toInt();
    QString prttc= ui->DoubleS_Prttc->text();
    QString prht= ui->DoubleS_Prht->text();
    QString dispo= ui->comboBox_dispo->currentText();
    materiels m(ref,nom,Qt,prttc,prht,dispo);
    bool test=m.ajouter();
   if(test)

    {

        QMessageBox::information(nullptr, QObject::tr("ajout"),
         QObject::tr("Ajout effectué.\n""Click Cancel to exit"),QMessageBox::Cancel);
          testInput();
          notification_ajout();
     }
   else
       QMessageBox::critical(nullptr, QObject::tr("Not OK"),
   QObject::tr("Ajout non effectué.\n""Click Cancel to exit"),QMessageBox::Cancel);
}



void materiels::on_pushButton_mod_clicked()
{
    int ref= ui->lineEdit_rf->text().toInt();
    QString nom= ui->lineEdit_nm->text();
    int Qt= ui->spinBox_Qt->text().toInt();
    QString prttc= ui->DoubleS_prttc->text();
    QString prht= ui->DoubleS_prht->text();
    QString dispo= ui->RoomList_dispo->currentText();
    materiels m(ref,nom,Qt,prttc,prht,dispo);
    bool test=m.modifier(ref);
    if(test)
  {
        notification_modifier();

        ui->tabView_Materiels->setModel(tMateriels->afficher());//refresh
  QMessageBox::information(nullptr, QObject::tr("Modifier"),
    QObject::tr("Modification avec succees.\n"
                "Click Cancel to exit."), QMessageBox::Cancel);
ui->lineEdit_rf->clear();
ui->lineEdit_nom->clear();
ui->spinBox_Qt->clear();
ui->DoubleS_prttc->clear();
ui->DoubleS_prht->clear();
ui->RoomList_dispo->clear();

}
else
QMessageBox::critical(nullptr, QObject::tr("Modifier"),
    QObject::tr("Erreur !.\n"
                "Click Cancel to exit."), QMessageBox::Cancel);


}



void materiels::on_pushButton_reche_clicked()
{
    int reference = ui->lineEdit_ref_2->text().toUInt();

            ui->tabView_Materiels->setModel(tMateriels->rechercherR(reference));
}

void materiels::on_pushButton_reche_2_clicked()
{
    QString nom= ui->lineEdit_nom_2->text();
    ui->tabView_Materiels->setModel(tMateriels->rechercherN(nom));
}







void materiels::on_radioButton_ref_clicked()
{
    ui->tabView_Materiels->setModel(tMateriels->trierR());
}

void materiels::on_radioButton_nom_clicked()
{
    ui->tabView_Materiels->setModel(tMateriels->trierN());
}






void materiels::on_pushButton_notification_clicked()
{

     mSystemTrayIcon->showMessage(tr("Centre de notifications"),tr("il n'y a pas de notification pour le moment"));

}


void materiels::on_pushButton_chart_clicked()
{
    statistic = new class Statistic(this);
    statistic->setWindowTitle("statistic");
    statistic->show();
this->hide();
}


void materiels::on_pushButton_excel_clicked()
{
//QTableView *t;
exportTableViewToCSV();
}

void materiels::notification_ajout()
{

    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

    notifyIcon->show();
    notifyIcon->showMessage("Produit: ","un element ajouté ",QSystemTrayIcon::Information,15000);
}

void materiels::notification_supprimer(){
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

    notifyIcon->show();
    notifyIcon->showMessage("Produit","un element Supprimé",QSystemTrayIcon::Information,15000);
}

void materiels::notification_modifier(){
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

    notifyIcon->show();
    notifyIcon->showMessage("Produit ","Un element est modifié",QSystemTrayIcon::Information,15000);

}

void materiels::notification_noInput(){
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

    notifyIcon->show();
    notifyIcon->showMessage("Produit ","no input !",QSystemTrayIcon::Information,15000);

}

void materiels::testInput(){

   if ((ui->lineEdit_ref->text()=="")||(ui->lineEdit_nom->text()=="")||(((ui->lineEdit_nom->text()=="")&&(ui->SpinBox_Qt->text().toInt()==0))))
   {
       notification_noInput();
       QMessageBox::critical(nullptr, QObject::tr("No Input!"),
           QObject::tr("Erreur !.\n"
                       "No Input Click Cancel to exit."), QMessageBox::Cancel);

   }
   }


