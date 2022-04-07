#ifndef PARTENAIRE_H
#define PARTENAIRE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Partenaire
{
private:
int id_part,numtel_part,salaire_part;
QString pr_part,nm_part,fonct_part,email_part,adresse_part;
 class Smtp *smtp;

public:
    Partenaire();
    Partenaire(int,int,int,QString,QString,QString,QString,QString);
    int getid_part();
    int getnumtel_part();
    int getsalaire_part();
    QString getpr_part();
    QString getnm_part();
    QString getfonct_part();
    QString getemail_part();
    QString getadresse_part();


    void setid_part(int);
    void setnumtel_part(int);
    void setsalaire_part(int);
    void setpr_part(QString);
    void setnm_part(QString);
    void setfonct_part(QString);
    void setemail_part(QString);
    void setadresse_part(QString);
    void CREATE_PDF();
QSqlQueryModel* rechercher(int ref);
bool ajouter();
QSqlQueryModel* afficher();
bool supprimer(int);
bool modifier(int id_part);
bool rechercher();
QSqlQueryModel * trier();
QSqlQueryModel * trier2();

};


#endif // PARTENAIRE_H
