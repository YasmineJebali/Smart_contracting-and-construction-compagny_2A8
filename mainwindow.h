#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "partenaires.h"
#include "historique.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include "arduino.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
void sendMail2();

private slots:
    void on_pbajouter_clicked();

    void on_sup_clicked();

    void on_pbupdate_clicked();


    //  void mailSent(QString status);

    void on_reche_clicked();




    void on_TRIID_clicked();

    void on_TRINOM_clicked();
   // void CREATE_PDF();

   // void on_mail_clicked();

    //void on_pushButton_4_clicked();

    void on_mail_clicked();

    void on_CheckArduino_clicked();
    void update_label();
private:
    Ui::MainWindow *ui;
    Partenaire P;
    class Partenaire* ptr;
    QByteArray data;
    Arduino A;



};

#endif // MAINWINDOW_H
