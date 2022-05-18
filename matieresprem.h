#ifndef MATIERESPREM_H
#define MATIERESPREM_H

#include <QDialog>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSystemTrayIcon>
#include <QVector>
#include <qtableview.h>
#include "qrcode.h"

namespace Ui {
class matieresprem;
}

class matieresprem : public QDialog
{
    Q_OBJECT

public:

    explicit matieresprem(QWidget *parent = nullptr);
    ~matieresprem();

    matieresprem();
    matieresprem(int,QString,int,QString,QString,QString,QString);
    int get_ref(){return ref;}
    int get_Qt() {return Qt;}
    QString get_nom(){return nom;}
    QString get_Prttc(){return prttc;}
    QString get_Prht() {return prht;}
    QString get_type(){return type;}
    QString get_dispo(){return dispo;}

    bool ajouter();
    QSqlQueryModel *afficher();
    QSqlQueryModel *trierR();
    QSqlQueryModel *trierN();
    bool supprimer(int ref);
    QSqlQueryModel *rechercherR(int ref);
    QSqlQueryModel *rechercherC(QString cout);
    bool modifier(int ref);
    QSqlQueryModel*statistiques();

private slots:
    void on_pushButton_ajou_clicked();
    void on_pushButton_affi_clicked();
    void on_pushButton_aj2_clicked();
    void on_pushButton_affi2_clicked();
    void on_pushButton_suppr_clicked();
    void on_pushButton_mod_clicked();
    void on_pushButton_bkaf_clicked();
    void on_pushButton_bkaf2_clicked();

    void on_radioButton_ref_clicked();

    void on_radioButton_nom_clicked();

    void on_pushButton_reche_clicked();

    void on_pushButton_reche_2_clicked();
    void on_pushButton_statut_clicked();

    //void on_pushButton_Qrcode_clicked();

    void on_pushButton_image_clicked();



    void on_pushButton_Qrcode_clicked();

    void on_pushButton_bkaf2_2_clicked();



private:
    Ui::matieresprem *ui;
    int ref;
    QString nom;
    int Qt;
    QString prht;
    QString prttc;
    QString dispo;
    QString type;
    matieresprem *tMatieresPrem;
    class Statistic *statistic;
   // QRcode *qrcode;


};



#endif // MATIERESPREM_H
