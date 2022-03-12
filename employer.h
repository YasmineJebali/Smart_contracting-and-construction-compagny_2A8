#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>

class employee
{ QString NM_EMP, PR_EMP, ADR_EMP, FONCT_EMP, EMAIL_EMP;
  int ID_EMP,SAL_EMP;
public:
    employee() {}
    employee(int,int,QString,QString,QString,QString,QString);

    QString getnom(){return NM_EMP;}
    QString getprenom(){return PR_EMP;}
    QString getadresse(){return ADR_EMP;}
    QString getfonction(){return FONCT_EMP;}
    QString getemail(){return EMAIL_EMP;}
    int getID(){return ID_EMP;}
    int getsalaire(){return SAL_EMP;}

    void setnom(QString n){NM_EMP=n;}
    void setprenom(QString p){PR_EMP=p;}
    void setadresse(QString adr){ADR_EMP=adr;}
    void setfonction(QString fc){FONCT_EMP=fc;}
    void setemail(QString mail){EMAIL_EMP=mail;}
    void setid(int id){this->ID_EMP=id;}
    void setsalaire(int salaire){this->SAL_EMP=salaire;}

   bool ajouter();
   QSqlQueryModel * afficher();
   bool suppprimer(int);
   bool modifier();

   };

#endif // EMPLOYEE_H
