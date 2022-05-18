#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H
#include <QDialog>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSystemTrayIcon>
#include "statistic.h"
#include <QVector>
#include <qtableview.h>
#include <QDate>
#include <iostream>
#include <QtCharts>
#include <QPieSlice>
#include <QPieSeries>
#include <QRegExpValidator>
class fournisseur
{

public:

    fournisseur(int,QString,QString,QString,QString,QString,QString);
    int get_id(){return id;}
    QString get_nom() {return nom;}
    QString get_adr(){return adr;}
    QString get_email(){return email;}
    QString get_livCode() {return livCode;}
    QString get_dateLiv(){return dateLiv;}
    QString get_numTel(){return tel;}

    bool ajouter();
    QSqlQueryModel *afficher();
    QSqlQueryModel *trierId();
    QSqlQueryModel *trierN();
    bool supprimer(int Id);
    QSqlQueryModel *rechercherId(int);
    QSqlQueryModel *rechercherT(QString);
    bool modifier(int id);
   QSqlQueryModel *meilleuroffreTri();
   void createpdf();

 private :
    int id;
    QString nom;
    QString adr;
    QString email;
    QString livCode;
    QString dateLiv;
    QString tel;


};

#endif // FOURNISSEUR_H




