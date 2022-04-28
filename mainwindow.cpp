#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connection.h"
#include "partenaires.h"
#include <QIntValidator>
#include <QAbstractSocket>
#include <QSqlQuery>
#include <QMessageBox>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include "smtp.h"
#include "arduino.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

 //smtp = nullptr;
    ui->setupUi(this);
  ui->le_id->setValidator(new QIntValidator(0, 999, this));
  ui->tab_part->setModel(P.afficher());
int ret=A.connect_arduino();
switch(ret){
case(0):qDebug()<<" arduino is available and connected to : " <<A.getarduino_port_name();
    break;
case(1):qDebug()<<"arduino is available but not connected to : " <<A.getarduino_port_name();
    break;
case(-1):qDebug()<< "arduino is not available";
}
QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pbajouter_clicked()
{
    int id_part=ui->le_id->text().toInt();
    QString nm_part=ui->le_nom->text();
    QString pr_part=ui->le_prenom->text();
    int salaire_part=ui->le_salaire->text().toInt();
    QString email_part=ui->le_mail->text();
    QString adresse_part=ui->le_adresse->text();
    int numtel_part=ui->le_tel->text().toInt();
    QString fonct_part=ui->le_FONCT->text();
Partenaire P(id_part,numtel_part,salaire_part,pr_part,nm_part,fonct_part,email_part,fonct_part);
bool test=P.ajouter();
if (test)
{
    historique h;
    h.save_txt(ui->le_id->text(),ui->le_nom->text(),ui->le_prenom->text(),ui->le_salaire->text(),"ajout");
    ui->historique->setText(h.imp_hist());
}
}


void MainWindow::on_sup_clicked()
{
    Partenaire P1; P1.setid_part(ui->le_id_sup->text().toInt());
    bool test=P1.supprimer(P1.getid_part());
    QMessageBox msgbox;
    if(test)
        msgbox.setText("suppression avec success.");
    else
        msgbox.setText("echec de suppression");
    msgbox.exec();

        historique h;
        h.save_txt(ui->le_id->text(),ui->le_nom->text(),ui->le_prenom->text(),ui->le_salaire->text(),"suppression");
        ui->historique->setText(h.imp_hist());

}

void MainWindow::on_pbupdate_clicked()
{
    int id_part=ui->lee_Id->text().toInt();
    QString nm_part=ui->lee_Nom->text();
    QString pr_part=ui->lee_Prenom->text();
    int salaire_part=ui->lee_Salaire->text().toInt();
    QString email_part=ui->lee_mail->text();
    QString adresse_part=ui->lee_Adresse->text();
    int numtel_part=ui->lee_Num->text().toInt();
    QString fonct_part=ui->lee_Fonction->text();
Partenaire P(id_part,numtel_part,salaire_part,pr_part,nm_part,fonct_part,email_part,fonct_part);
bool test=P.modifier(id_part);
if(test)
  {

        ui->tab_part->setModel(ptr->afficher());//refresh
  QMessageBox::information(nullptr, QObject::tr("Modifier"),
    QObject::tr("Modification avec succees.\n"
                "Click Cancel to exit."), QMessageBox::Cancel);
ui->lee_Id->clear();
ui->lee_Nom->clear();
ui->lee_Prenom->clear();
ui->lee_Salaire->clear();
ui->lee_mail->clear();
ui->lee_Adresse->clear();
ui->lee_Num->clear();
ui->lee_Fonction->clear();

}
else
QMessageBox::critical(nullptr, QObject::tr("Modifier"),
    QObject::tr("Erreur !.\n"
                "Click Cancel to exit."), QMessageBox::Cancel);


}





void MainWindow::on_reche_clicked()
{
    Partenaire p;
        QString nbr=ui->search_id->text();
            QString prenom=ui->search_prenom->text();
             ui->tabView->setModel(p.rech(prenom,nbr));

}

void MainWindow::on_TRIID_clicked()
{
        ui->tab_part_2->setModel(ptr->trier());
}

void MainWindow::on_TRINOM_clicked()
{
     ui->tab_part_2->setModel(ptr->trier2());
}





void MainWindow::on_mail_clicked()
{
    Smtp* smtp = new Smtp("tundevt8m@gmail.com","A1Z2E3R4","smtp.gmail.com",465);
        connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

        smtp->sendMail("tundevt8m@gmail.com",ui->em->text(),ui->subject->text(),ui->body->text());
}

void MainWindow::on_CheckArduino_clicked()
{
}

void MainWindow::update_label()
{
    data=A.read_from_arduino();

        if(data=="1")

  { ui->labelarduino->setText("yes"); // si les données reçues de arduino via la liaison série sont égales à 1
        // alors afficher msg
        QMessageBox::information(nullptr, QObject::tr("Entrer  d'un client"),
                                        QObject::tr("Client detecte.\n"
                                                    "Click Cancel to exit."), QMessageBox::Cancel);
QSqlQuery query;
query.exec("insert into ENREGISTREMENT (MSG) values('detected'); ");}
else if (data=="0")
 {
    ui->labelarduino->setText("no"); // si les données reçues de arduino via la liaison série sont égales à 1
    // alors afficher msg
 QSqlQuery query;
 query.exec("insert into ENREGISTREMENT (MSG) values('Pas de detection'); ");
        }
}
