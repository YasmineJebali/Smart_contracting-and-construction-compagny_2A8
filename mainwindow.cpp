#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employer.h"
#include <QMessageBox>
#include <QIntValidator>
#include "smtp.h"
#include "calendrier.h"
#include "mailing.h"
#include <iostream>
#include <QtCharts>
#include <QPieSlice>
#include <QSqlQuery>
#include <QPieSeries>
#include <QRegExpValidator>
QT_CHARTS_USE_NAMESPACE
QString days="";


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
    {
    ui->setupUi(this);

    ui->le_id->setValidator (new QIntValidator(100, 9999999, this));
    ui->le_id_sup_2->setValidator (new QIntValidator(100, 9999999, this));
    ui->le_id_4->setValidator (new QIntValidator(100, 9999999, this));
    ui->rechercheinput->setValidator (new QIntValidator(100, 9999999, this));
    ui->identifiant->setValidator (new QIntValidator(100, 9999999, this));

    ui->tab_employee->setModel(EMP->afficher());
    ui->tab_employee->show();
    ui->rated->setModel(EMP->afficherClassement());
    ui->rated->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pb_ajouter_clicked()
{
    int id=ui->le_id->text().toInt();
    int salaire=ui->salaire->text().toInt();
    QString nom=ui->le_nom->text();
    QString prenom=ui->le_prenom->text();
    QString adresse=ui->adresse->text();
    QString email=ui->email->text();
    QString fonction=ui->fonction->text();

    employee EMP(id,salaire,nom,prenom,adresse,email,fonction);
    bool test=EMP.ajouter();
    if (test)
     {
        ui->le_id->setValidator (new QIntValidator(100, 9999999, this));
        ui->tab_employee->setModel(EMP.afficher());
        QMessageBox:: information(nullptr, QObject::tr("OK"),
                QObject::tr("ajout effectué\n"
                            "click OK to exit."), QMessageBox::Ok);

      }
        else
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                QObject::tr("Ajout non effectuè.\n"
                             "clicK OK to exit."), QMessageBox::Ok);

}


void MainWindow::on_pb_supprimer_clicked()
{
   employee EMP; EMP.setid(ui->le_id_sup_2->text().toInt());

   bool test=EMP.suppprimer(EMP.getID());

   if (test)
    {


       ui->rated->setModel(EMP.afficherClassement());
       ui->rated->show();

       QMessageBox:: information(nullptr, QObject::tr("OK"),
               QObject::tr("Suppression effectuée\n"
                           "click OK to exit."), QMessageBox::Ok);

     }
       else
       QMessageBox::critical(nullptr,QObject::tr("Not OK"),
               QObject::tr("Echec de suppression\n"
                           "click OK to exit."), QMessageBox::Ok);

   ui->tab_employee->setModel(EMP.afficher()); //refreche


}



void MainWindow::on_pb_modifier_clicked()
{
    int id=ui->le_id_4->text().toInt();
    int salaire=ui->salaire_2->text().toInt();
    QString nom=ui->le_nom_2->text();
    QString prenom=ui->le_prenom_2->text();
    QString adresse=ui->adresse_2->text();
    QString email=ui->email_2->text();
    QString fonction=ui->fonction_2->text();

    employee EMP(id,salaire,nom,prenom,adresse,email,fonction);
    bool test=EMP.modifier();
    if (test)
     {
        QMessageBox:: information(nullptr, QObject::tr("OK"),
                QObject::tr("Modifier effectué\n"
                            "click OK to exit."), QMessageBox::Ok);

      }
        else
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                QObject::tr("Modifier non effectuè.\n"
                             "clicK OK to exit."), QMessageBox::Ok);

    ui->tab_employee->setModel(EMP.afficher());

}

void MainWindow::on_pushButton_clicked()
{
    Smtp *smtp = new Smtp("yasmine.jebaliii@gmail.com","yasmine12345Y","smtp.gmail.com",465);
    connect (smtp, SIGNAL (status (QString)), this, SLOT (mailSent(QString)));
    smtp->sendMail("yasmine.jebaliii@gmail.com", ui->adresse_3->text(), ui->sujet->text(), ui->text->toPlainText());
    ui->adresse_3->setText("");
    ui->sujet->setText("");
    ui->text->setText("");

}


void MainWindow::on_recherche_clicked()
{

  int id=ui->rechercheinput->text().toInt();


 employee *EMP =new employee();
 //ui->setupUi(this);
 ui->tabrecherche->setModel(EMP->rechercher(id));
 ui->tabrecherche->show();

 }


void MainWindow::on_rechercheNom_clicked()
{
    QString nom=ui->rechercheinput2->text();

    employee *EMP =new employee();
    ui->tabrecherche->setModel(EMP->rechercherNom(nom));
    ui->tabrecherche->show();

}

void MainWindow::on_statistique_clicked()
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



void MainWindow::on_dark_clicked()
{

          QFile styleSheetFile("C:/Users/Mynet/Desktop/employer/Diffnes.qss");
            styleSheetFile.open(QFile::ReadOnly);
            QString styleSheet = QLatin1String(styleSheetFile.readAll());
            MainWindow::setStyleSheet(styleSheet);
}

void MainWindow::on_light_clicked()
{
    QFile styleSheetFile("C:/Users/Mynet/Desktop/employer/Integrid.qss");
        styleSheetFile.open(QFile::ReadOnly);
        QString styleSheet = QLatin1String(styleSheetFile.readAll());
        MainWindow::setStyleSheet(styleSheet);
}

void MainWindow::on_evaluer_clicked()
{

   int id=ui->identifiant->text().toInt();
   double range=ui->Slider->value();
   qDebug()<<id<<range;

   employee * EMP=new employee();

   bool test=EMP->rating(id,range);
   if (test)
   {
   ui->rated->setModel(EMP->afficherClassement());
   ui->rated->show();
   }
}



void MainWindow::on_pb_ajouter_2_clicked()
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
                                 notifyIcon->setIcon(QIcon("icone.png"));

                                 notifyIcon->showMessage("employer   ","calendrier Ajouté",QSystemTrayIcon::Information,15000);
                 QMessageBox::information(nullptr, QObject::tr("OK"),
                             QObject::tr("Ajout effectué.\n"
                                         "Click Cancel to exit."), QMessageBox::Cancel);


    }
    else{
        QMessageBox::critical(nullptr,QObject::tr("calendrier"),QObject::tr("Erreur!\n" "click ok to exit"),QMessageBox::Ok);
    }

}



void MainWindow::on_le_modifier_2_clicked()
{
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
                                              notifyIcon->setIcon(QIcon("icone.png"));

                                              notifyIcon->showMessage("employer  ","calendrier Modifier",QSystemTrayIcon::Information,15000);
                              QMessageBox::information(nullptr, QObject::tr("OK"),
                                          QObject::tr("Modification effectué.\n"
                                                      "Click Cancel to exit."), QMessageBox::Cancel);
                    QMessageBox::information(nullptr, QObject::tr("update "),
                                QObject::tr("Participant modifie\n"
                "Click Cancel to exit."), QMessageBox::Cancel);
                }
}
 }


void MainWindow::on_pb_supprimer_2_clicked()
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
                                     notifyIcon->setIcon(QIcon("icone.png"));

                                     notifyIcon->showMessage("employer   ","calendrier supprimer",QSystemTrayIcon::Information,15000);
                     QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("suppression effectué.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);

    }
        else
            msgBox.setText("Echec de suppression");
            msgBox.exec();
}

