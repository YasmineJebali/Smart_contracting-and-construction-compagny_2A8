#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>
#include <QGraphicsWidget>
#include <QTime>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_11_clicked()
{
    matieresprem = new class matieresprem(this);
    matieresprem->setWindowTitle("MatieresPrem");
    matieresprem->show();
this->hide();
}
