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
this->hide();
}

