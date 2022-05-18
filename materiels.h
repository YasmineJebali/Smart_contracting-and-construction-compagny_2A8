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
    QSqlQueryModel *rechercherR(int ref);
    QSqlQueryModel *rechercherN(QString nom);
    bool modifier(int ref);
    QSqlQueryModel  *countM();
    void Statistic(QVector<double>* ticks,QVector<QString> *labels);
    int countRow();
      void testInput();
    void notification_noInput();
    void exportTableViewToCSV();
    void notification_supprimer();
    void notification_modifier();
    void notification_ajout();
signals:
    void firstWindow();

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
    materiels *materiel;

};

#endif // MATERIELS_H
