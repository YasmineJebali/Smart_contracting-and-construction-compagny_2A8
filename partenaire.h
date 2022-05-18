#ifndef PARTENAIRE_H
#define PARTENAIRE_H

#include <QDialog>
#include "historique.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include "arduino1.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QIntValidator>
#include <QAbstractSocket>
#include <QSqlQuery>
#include <QMessageBox>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include "smtp.h"

namespace Ui {
class Partenaire;
}

class Partenaire : public QDialog
{
    Q_OBJECT

public:
    explicit Partenaire(QWidget *parent = nullptr);
    ~Partenaire();
    void sendMail2();
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
QSqlQueryModel* rechercher(int ref,int sal);
bool ajouter();
QSqlQueryModel* afficher();
bool supprimer(int);
bool modifier(int id_part);
QSqlQueryModel *rech(QString,QString);
QSqlQueryModel * trier();
QSqlQueryModel * trier2();

    private slots:



private:
    Ui::Partenaire *ui;
   Partenaire *P;
    class Partenaire* ptr;
    QByteArray data;
    Arduino A;
    int id_part,numtel_part,salaire_part;
    QString pr_part,nm_part,fonct_part,email_part,adresse_part;
     class Smtp *smtp;


};

#endif // PARTENAIRE_H
