#ifndef CHANTIER_H
#define CHANTIER_H

#include <QDialog>
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
#include <QSqlQueryModel>
#include <QVector>
#include <qtableview.h>
#include "qrcode.h"
#include "map.h"

namespace Ui {
class Chantier;
}

class Chantier : public QDialog
{
    Q_OBJECT

public:
    explicit Chantier(QWidget *parent = nullptr);
    ~Chantier();
    Chantier();
    Chantier(int id,QString emplace,QString surface,QString plan,QString topog,QString cout,QString type,QString autorisa);
    int getId();
    QString getEmplace();
    QString getSurface();
    QString getPlan();
    QString getTopog();
    QString getCout();
    QString getType();
    QString getAutorisa();
    bool ajouter();
    QSqlQueryModel *afficher();
    bool supprimer(int  );
    bool modifier(int);//**//
  QSqlQueryModel *trie_Emp();
    QSqlQueryModel * trie_C();
    QSqlQueryModel *rechercherS(QString surface);
    QSqlQueryModel *rechercherEmp(QString emplace);
    void CREATE_PDF();

private:
    Ui::Chantier *ui;
    Chantier *ch;
     Chantier *tch;
     map *P;

    int id;
    QString emplace,surface,plan,topog,cout,type,autorisa;
};

#endif // CHANTIER_H

