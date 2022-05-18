#include "modules.h"
#include "ui_modules.h"
#include <QtWidgets>
modules::modules(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modules)
{
    ui->setupUi(this);

    QMovie* movie_pers = new QMovie(":/ressources/gifs/1.gif");
    ui->label_pers->setMovie(movie_pers);
    movie_pers->start();
    QMovie* movie_buble = new QMovie(":/ressources2/gifs/buble2.gif");
    ui->label_buble->setMovie(movie_buble);
    movie_buble->start();

    QPixmap pixM(":///ressources/imgs/4.jpg");
    ui->label_backi->setPixmap(pixM);
    int wB= ui->label_backi->width();
     int hB = ui->label_backi->height();
     ui->label_backi->setPixmap(pixM.scaled(wB,hB,Qt::KeepAspectRatio));


}

modules::~modules()
{
    delete ui;
}




void modules::on_pushButton_9_clicked()
{
    materiels = new class materiels(this);
    materiels->setWindowTitle("Materiels");
    materiels->show();
//this->hide();
}

void modules::on_pushButton_11_clicked()
{
    matieresprem = new class matieresprem(this);
    matieresprem->setWindowTitle("MatieresPremiere");
    matieresprem->show();
//this->hide();
}

void modules::on_pushButton_8_clicked()
{
    Chantier = new class Chantier(this);
    Chantier->setWindowTitle("Chantier");
    Chantier->show();
}


void modules::on_pushButton_12_clicked()
{
    Partenaire = new class Partenaire(this);
    Partenaire->setWindowTitle("Partenaire de chantier");
    Partenaire->show();
}


void modules::on_pushButton_10_clicked()
{
    employee = new class employee(this);
    employee->setWindowTitle("Employe");
    employee->show();

}

