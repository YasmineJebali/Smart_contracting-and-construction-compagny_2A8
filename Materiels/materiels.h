#ifndef MATERIELS_H
#define MATERIELS_H
#include <QDialog>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSystemTrayIcon>
#include "statistic.h"
#include <QVector>
#include <qtableview.h>
namespace Ui {
class materiels;
}

class materiels : public QDialog
{
    Q_OBJECT

public:

    explicit materiels(QWidget *parent = nullptr);
    ~materiels();
    materiels();
    materiels(int,QString,int,QString,QString,QString);
    int get_ref(){return ref;}
    int get_Qt() {return Qt;}
    QString get_nom(){return nom;}
    QString get_Prttc(){return prttc;}
    QString get_Prht() {return prht;}
    QString get_dispo(){return dispo;}

    bool ajouter();
    QSqlQueryModel *afficher();
    QSqlQueryModel *trierR();
    QSqlQueryModel *trierN();
    bool supprimer(int ref);
    QSqlQueryModel *rechercher(int ref);
    bool modifier(int ref);
    QSqlQueryModel  *countM();
    void Statistic(QVector<double>* ticks,QVector<QString> *labels);
    int countRow();
    void exportTableViewToCSV();

private slots:
    void on_pushButton_ajou_clicked();
    void on_pushButton_aj2_clicked();
    void on_pushButton_mod_clicked();
    void on_pushButton_affi_clicked();
    void on_pushButton_affi2_clicked();
     void on_pushButton_suppr_clicked();
    void on_pushButton_reche_clicked();
    void on_radioButton_ref_clicked();
    void on_radioButton_nom_clicked();
    void on_pushButton_bk2_clicked();
    void on_pushButton_bkaf_clicked();
   void on_pushButton_notification_clicked();
   void on_pushButton_chart_clicked();
   void on_pushButton_excel_clicked();

private:

    Ui::materiels *ui;
    int ref;
    QString nom;
    int Qt;
    QString prht;
    QString prttc;
    QString dispo;
    materiels *tMateriels;
    QSystemTrayIcon *mSystemTrayIcon;
    class Statistic *statistic;

};

#endif // MATERIELS_H
