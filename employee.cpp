#include "employee.h"
#include "ui_employee.h"



QT_CHARTS_USE_NAMESPACE
QString days="";

employee::employee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::employee)
{
    ui->setupUi(this);

    ui->le_id->setValidator (new QIntValidator(100, 9999999, this));
    ui->le_id_4->setValidator (new QIntValidator(100, 9999999, this));
    ui->rechercheinput->setValidator (new QIntValidator(100, 9999999, this));
    ui->identifiant->setValidator (new QIntValidator(100, 9999999, this));
    ui->tab_employee->setModel(EMP->afficher());
    ui->tab_employee->show();
    ui->rated->setModel(EMP->afficherClassement());
    ui->rated->show();

}

employee::~employee()
{
    delete ui;
}







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
 QString res= QString::number(ID_EMP);
          query.prepare("INSERT INTO employes (ID_EMP,NM_EMP, PR_EMP, ADR_EMP, SAL_EMP, EMAIL, FONCT_EMP)"
                        "VALUES (:id,:forename, :surname, :adresse, :salaire, :email, :fonction)");
          query.bindValue(":id", res);
          query.bindValue(":forename",NM_EMP);
          query.bindValue(":surname",  PR_EMP);
          query.bindValue(":adresse",ADR_EMP );
          query.bindValue(":salaire",SAL_EMP );
          query.bindValue(":email",EMAIL_EMP );
          query.bindValue(":fonction",FONCT_EMP );
           //qDebug()<<&query;

          return query.exec();


}





QSqlQueryModel *  employee:: afficher()
{
    QSqlQueryModel* model = new QSqlQueryModel();

          model->setQuery("select* FROM employes order by ID_EMP desc");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("Salaire"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("Email"));
          model->setHeaderData(6, Qt::Horizontal, QObject::tr("Fonction"));
          qDebug()<<model;

          return model;

}


bool employee:: suppprimer(int id)
{
QString res= QString::number(id);
        QSqlQuery query1;
        query1.prepare("Delete from employes where ID_EMP= :id");
        query1.bindValue(":id",res);
        return query1.exec();


}


bool employee::modifier()
{ QSqlQuery query;
    QString res= QString::number(ID_EMP);
    query.prepare("UPDATE EMPLOYES set ID_EMP=:id,NM_EMP=:nom,PR_EMP=:prenom,ADR_EMP=:adresse,SAL_EMP=:salaire,EMAIL=:email,FONCT_EMP=:fonction WHERE ID_EMP=:id");
    query.bindValue(":id",res);
    query.bindValue(":nom",this->NM_EMP);
    query.bindValue(":prenom",this->PR_EMP);
    query.bindValue(":adresse",this->ADR_EMP);
    query.bindValue(":salaire",this->SAL_EMP);
    query.bindValue(":email",this->EMAIL_EMP);
     query.bindValue(":fonction",this->FONCT_EMP);
     qDebug()<<&query;
    return    query.exec();

}
QSqlQueryModel * employee::rechercher(int id)
{
    QSqlQueryModel * model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select * from employes where ID_EMP=:id ");
    query.bindValue(":id",id);
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Salaire"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Email"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Fonction"));




return model;
}

QSqlQueryModel * employee::rechercherNom(QString nom)
{
    QSqlQueryModel * model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select * from employes where NM_EMP=:nom ");
    query.bindValue(":nom",nom);
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Adresse"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Salaire"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Email"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Fonction"));

return model;
}

bool employee::rating(int id,double rate)
{
     QSqlQuery query;
     query.prepare("select ID_EMP from employes where ID_EMP=:id ");
     query.bindValue(":id",id);

     if (!query.exec())
         return false;
     else
     {
       query.prepare("insert into rating(id_rating,classement,employee_FK) values(:id,:R,:id)");
       query.bindValue(":R",rate);
       query.bindValue(":id",id);

        if(query.exec())
           return true;
           else return false;
     }


}
QSqlQueryModel * employee::afficherClassement()
{
    QSqlQueryModel* model = new QSqlQueryModel();

          model->setQuery("select ID_EMP,NM_EMP,PR_EMP,Classement from rating,employes where rating.employee_fk=employes.ID_EMP");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("Classement"));

          qDebug()<<model;

          return model;

}

QSqlQueryModel *employee::trierId()
{
              QSqlQuery * q = new  QSqlQuery ();
                     QSqlQueryModel * model = new  QSqlQueryModel ();
                     q->prepare("SELECT * FROM employes order by ID_EMP DESC");
                     q->exec();
                     model->setQuery(*q);
                     return model;

}

QSqlQueryModel *employee::trierSal()
{
              QSqlQuery * q = new  QSqlQuery ();
                     QSqlQueryModel * model = new  QSqlQueryModel ();
                     q->prepare("SELECT * FROM employes order by SAL_EMP DESC");
                     q->exec();
                     model->setQuery(*q);
                     return model;

}

bool employee::rechercher_arduino(QString data)
{

    QSqlQueryModel *model=new QSqlQueryModel();
    QSqlQuery query;

    //QString res = QString::number(data);
    query.prepare("SELECT * FROM  employes WHERE ID_EMP ="+data);
   // query.bindValue(":data",data.toStdString());
    query.exec();
    model->setQuery(query);


       return model->rowCount()>=1;

}










