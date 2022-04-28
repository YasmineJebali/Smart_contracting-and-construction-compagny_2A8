#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>
#include <QGraphicsWidget>
#include "modules.h"
#include <QSound>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix1(":/ressources/imgs/4.jpg");
    int w1 = ui->label_back->width();
     int h1 = ui->label_back->height();
     ui->label_back->setPixmap(pix1.scaled(w1,h1,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_start_clicked()
{
    modules= new class modules(this);
    modules->setWindowTitle("Modules");
    modules->show();
this->hide();
}




void MainWindow::on_pushButton_close_clicked()
{
    close();
}



