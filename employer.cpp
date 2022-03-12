#include "employer.h"
#include<QSqlQuery>
#include<QDebug>
#include<QObject>
#include <QMessageBox>


employee::employee(int ID_EMP,int SAL_EMP,QString NM_EMP,QString PR_EMP,QString ADR_EMP,QString FONCT_EMP,QString EMAIL_EMP)
{
    this->ID_EMP=ID_EMP;
    this->NM_EMP=NM_EMP;
    this->PR_EMP=PR_EMP;
    this->ADR_EMP=ADR_EMP;
    this->SAL_EMP=SAL_EMP;
    this->FONCT_EMP=FONCT_EMP;
    this->EMAIL_EMP=EMAIL_EMP;
}
bool employee:: ajouter()
{
  QSqlQuery query;
  QString id_string= QString::number(ID_EMP);
          query.prepare("INSERT INTO employes (NM_EMP, PR_EMP, ADR_EMP, SAL_EMP, FONCT_EMP, EMAIL) "
                        "VALUES (:forename, :surname, :adresse, :salaire, :fonction, :email)");
          //query.bindValue(":id", id_string);
          query.bindValue(":forename",this->NM_EMP );
          query.bindValue(":surname",  this->PR_EMP);
          query.bindValue(":adresse",this->ADR_EMP );
          query.bindValue(":salaire",this->SAL_EMP );
          query.bindValue(":fonction",this->FONCT_EMP );
          query.bindValue(":email",this->EMAIL_EMP );

          return query.exec();


}
QSqlQueryModel *  employee:: afficher()
{
    QSqlQueryModel* model = new QSqlQueryModel();

          model->setQuery("select* FROM employes");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("Salaire"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("Fonction"));
          model->setHeaderData(6, Qt::Horizontal, QObject::tr("Email"));
          qDebug()<<model;

          return model;

}


bool employee:: suppprimer(int id )
{
   QSqlQuery query;
    query.prepare("Delete from employes where ID_EMP= :id");
    query.bindValue(0,id);
   return query.exec();
 }


bool employee::modifier()
{ QSqlQuery query;
    QString res= QString::number(ID_EMP);

    query.prepare("UPDATE EMPLOYES set NM_EMP=:nom,PR_EMP=:prenom,ADR_EMP=:adresse,SAL_EMP=:salaire,FONCT_EMP=:fonction,EMAIL=:email WHERE ID_EMP=:id");
    query.bindValue(":id",ID_EMP);
    query.bindValue(":nom",NM_EMP);
    query.bindValue(":prenom",PR_EMP);
    query.bindValue(":adresse",ADR_EMP);
    query.bindValue(":salaire",SAL_EMP);
    query.bindValue(":fonction",FONCT_EMP);
     query.bindValue(":email",EMAIL_EMP);


    return    query.exec();

}







