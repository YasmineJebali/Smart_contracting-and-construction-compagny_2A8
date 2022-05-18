#ifndef Chantier_H
#define Chantier_H
#include <QString>
#include <QtSql>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QPainter>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include "QFileDialog"
#include "QTextStream"
#include <QTextDocument>

class Chantier
{ private:
     int id;
     QString emplace,surface,plan,topog,cout,type,autorisa;

public:
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

    QSqlQueryModel *trie_ChantierC();
    QSqlQueryModel * trie_ChantierS();
    QSqlQueryModel *rechercherS(QString surface);
    QSqlQueryModel *rechercherC(QString cot);
    void CREATE_PDF();
};

#endif // Chantier_H
