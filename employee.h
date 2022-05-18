#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDialog>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QMessageBox>
#include <QIntValidator>
#include "smtp.h"
#include "calendrier.h"
#include "mailing.h"
#include <iostream>
#include <QtCharts>
#include <QPieSlice>
#include <QPieSeries>
#include <QRegExpValidator>
namespace Ui {
class employee;

}


class employee : public QDialog
{
    Q_OBJECT

public:
    explicit employee(QWidget *parent = nullptr);
    ~employee();
    employee() {}
    employee(int,int,QString,QString,QString,QString,QString);
    bool ajouter();
    QSqlQueryModel * afficher();
    bool suppprimer(int);
    bool modifier();
    QSqlQueryModel * rechercher(int);
    QSqlQueryModel * rechercherNom(QString);
    QSqlQueryModel * afficherClassement();
    bool rating(int,double);
    QSqlQueryModel * trierId();
    QSqlQueryModel * trierSal();
    bool rechercher_arduino(QString data);
    QString getnom(){return NM_EMP;}
    QString getprenom(){return PR_EMP;}
    QString getadresse(){return ADR_EMP;}
    QString getfonction(){return FONCT_EMP;}
    QString getemail(){return EMAIL_EMP;}
    int getID(){return ID_EMP;}
    int getsalaire(){return SAL_EMP;}

  /*  void setnom(QString n){NM_EMP=n;}
    void setprenom(QString p){PR_EMP=p;}
    void setadresse(QString adr){ADR_EMP=adr;}
    void setfonction(QString fc){FONCT_EMP=fc;}
    void setemail(QString mail){EMAIL_EMP=mail;}
    void setid(int id){this->ID_EMP=id;}
    void setsalaire(int salaire){this->SAL_EMP=salaire;}*/



private:
    Ui::employee *ui;
    employee *EMP;
    QString NM_EMP, PR_EMP, ADR_EMP, FONCT_EMP, EMAIL_EMP;
      int ID_EMP,SAL_EMP;

};

#endif // EMPLOYEE_H
