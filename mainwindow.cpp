#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employer.h"
#include <QMessageBox>
#include <QIntValidator>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
    {
    ui->setupUi(this);

    ui->le_id->setValidator (new QIntValidator(100, 9999999, this));
    ui->tab_employee->setModel(EMP->afficher());
    ui->tab_employee->show();

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
        ui->tab_employee->setModel(EMP.afficher());
        QMessageBox:: information(nullptr, QObject::tr("OK"),
                QObject::tr("ajout effectué\n"
                            "click OK to exit."), QMessageBox::Cancel);

      }
        else
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                QObject::tr("Ajout non effectuè.\n"
                             "clicK OK to exit."), QMessageBox::Cancel);

}


void MainWindow::on_pb_supprimer_clicked()
{
   employee EMP; EMP.setid(ui->le_id_sup_2->text().toInt());
   bool test=EMP.suppprimer(EMP.getID());

   if (test)
    {
       QMessageBox:: information(nullptr, QObject::tr("OK"),
               QObject::tr("Suppression effectuée\n"
                           "click Cancel to exit."), QMessageBox::Cancel);

     }
       else
       QMessageBox::critical(nullptr,QObject::tr("Not OK"),
               QObject::tr("Echec de suppression\n"
                           "click Cancel to exit."), QMessageBox::Cancel);
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
                            "click Cancel to exit."), QMessageBox::Cancel);

      }
        else
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                QObject::tr("Modifier non effectuè.\n"
                             "clicK Cancel to exit."), QMessageBox::Cancel);
    ui->tab_employee->setModel(EMP.afficher());

}
