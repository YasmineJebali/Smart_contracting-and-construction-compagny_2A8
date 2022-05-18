#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTextStream>
#include <QIntValidator>
#include "chantier.h"
#include <QSqlQueryModel>
#include <QVector>
#include <qtableview.h>
#include "qrcode.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_ajouter_clicked();
    void on_pb_supprimer_clicked();
    void on_pb_modifier_clicked();
    void on_PDF_pb_clicked();
    void on_triePB_clicked();
    void on_triePB_2_clicked();
    void on_pushButton_rechS_clicked();
    void on_pushButton_rech_2_clicked();
    void on_generateButton_clicked();

private:
    Ui::MainWindow *ui;
    Chantier *ch;
     Chantier *tch;
};
#endif // MAINWINDOW_H
