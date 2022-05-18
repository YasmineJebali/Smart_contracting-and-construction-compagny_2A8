#include "partenaire.h"
#include "ui_partenaire.h"

Partenaire::Partenaire(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Partenaire)
{
    ui->setupUi(this);

  ui->le_id->setValidator(new QIntValidator(0, 999, this));
  ui->tab_part->setModel(P->afficher());
int ret=A.connect_arduino();
switch(ret){
case(0):qDebug()<<" arduino is available and connected to : " <<A.getarduino_port_name();
    break;
case(1):qDebug()<<"arduino is available but not connected to : " <<A.getarduino_port_name();
    break;
case(-1):qDebug()<< "arduino is not available";
}
QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));
}

Partenaire::~Partenaire()
{
    delete ui;
}



//functions

Partenaire::Partenaire()
{
id_part=0 ,numtel_part=0 ,salaire_part=0 ,pr_part=" ",nm_part=" ",fonct_part=" ",email_part=" ",adresse_part=" ";
}
Partenaire::Partenaire(int id_part,int numtel_part,int salaire_part,QString pr_part,QString nm_part,QString fonct_part,QString email_part,QString adresse_part)
{this->id_part=id_part; this->numtel_part=numtel_part; this->salaire_part=salaire_part; this->pr_part=pr_part; this->nm_part=nm_part; this->fonct_part=fonct_part; this->email_part=email_part; this->adresse_part=adresse_part;}
int Partenaire::getid_part(){return id_part;}
int Partenaire::getnumtel_part(){return numtel_part;}
int Partenaire::getsalaire_part(){return salaire_part;}
QString Partenaire::getpr_part(){return pr_part;}
QString Partenaire::getnm_part(){return nm_part;}
QString Partenaire::getfonct_part(){return fonct_part;}
QString Partenaire::getemail_part(){return email_part;}
QString Partenaire::getadresse_part(){return adresse_part;}


void Partenaire::setid_part(int id_part){this->id_part=id_part;}
void Partenaire::setnumtel_part(int numtel_part){this->numtel_part=numtel_part;}
void Partenaire::setsalaire_part(int salaire_part){this->salaire_part=salaire_part;}
void Partenaire::setpr_part(QString pr_part){this->pr_part=pr_part;}
void Partenaire::setnm_part(QString nm_part){this->nm_part=nm_part;}
void Partenaire::setfonct_part(QString fonct_part){this->fonct_part=fonct_part;}
void Partenaire::setemail_part(QString email_part){this->email_part=email_part;}
void Partenaire::setadresse_part(QString adresse_part){this->adresse_part=adresse_part;}
bool Partenaire::ajouter()
 {
QSqlQuery query;
QString id_string=QString::number(id_part);
QString num_string=QString::number(numtel_part);

QString salaire_string=QString::number(salaire_part);
     query.prepare("INSERT INTO GEST_PART (ID_PART, PR_PART, ADRESSE_PART, NM_PART, FONCT_PART, SALAIRE_PART, EMAIL_PART, NUMTEL_PART) "
                   "VALUES (:ID_PART, :PR_PART, :ADRESSE_PART, :NM_PART, :FONCT_PART, :SALAIRE_PART, :EMAIL_PART, :NUMTEL_PART)");
     query.bindValue(":ID_PART",id_string);
     query.bindValue(":PR_PART", pr_part);
     query.bindValue(":ADRESSE_PART",adresse_part);
     query.bindValue(":NM_PART",nm_part);
     query.bindValue(":FONCT_PART", fonct_part);
     query.bindValue(":SALAIRE_PART",salaire_string);
     query.bindValue(":EMAIL_PART", email_part);
     query.bindValue(":NUMTEL_PART",num_string);
    return query.exec();

}
bool Partenaire::supprimer(int)
{

    QSqlQuery query;

         query.prepare("DELETE FROM GEST_PART WHERE id_part=:id_part");
         query.bindValue(0,id_part);

        return query.exec();


}
QSqlQueryModel* Partenaire::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();

         model->setQuery("SELECT* FROM GEST_PART");

    return model;
}
bool Partenaire::modifier(int id_part)
 {
QSqlQuery query;
QString id_string=QString::number(id_part);
QString num_string=QString::number(numtel_part);

QString salaire_string=QString::number(salaire_part);
     query.prepare("UPDATE GEST_PART set ID_PART=:ID_PART,PR_PART=:PR_PART,ADRESSE_PART=:ADRESSE_PART,NM_PART=:NM_PART,FONCT_PART=:FONCT_PART,SALAIRE_PART=:SALAIRE_PART,EMAIL_PART=:EMAIL_PART,NUMTEL_PART=:NUMTEL_PART) "
                   "VALUES (:ID_PART, :PR_PART, :ADRESSE_PART, :NM_PART, :FONCT_PART, :SALAIRE_PART, :EMAIL_PART, :NUMTEL_PART)");
     query.bindValue(":ID_PART",id_string);
     query.bindValue(":PR_PART", pr_part);
     query.bindValue(":ADRESSE_PART",adresse_part);
     query.bindValue(":NM_PART",nm_part);
     query.bindValue(":FONCT_PART", fonct_part);
     query.bindValue(":SALAIRE_PART",salaire_string);
     query.bindValue(":EMAIL_PART", email_part);
     query.bindValue(":NUMTEL_PART",num_string);
    return query.exec();

}

/*QSqlQueryModel *Partenaire::triID()
{

    QSqlQuery *q = new QSqlQuery();
    QSqlQueryModel *model = new QSqlQueryModel();
    q->prepare("SELECT * FROM  GEST_PART ORDER BY ID_PART ");
    q->exec();
    model->setQuery(*q);
    return model;
}
*/
//rechercher
QSqlQueryModel *Partenaire::rech(QString prenom,QString nbr)
{

    QSqlQueryModel *model3= new QSqlQueryModel();
    model3->setQuery("SELECT * FROM GEST_PART WHERE ID_PART LIKE'%"+nbr+"%' and PR_PART LIKE'%"+prenom+"%'" );
    model3->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_PART"));
    model3->setHeaderData(1, Qt::Horizontal, QObject::tr("PR_PART"));
    model3->setHeaderData(2, Qt::Horizontal, QObject::tr("ADRESSE_PART"));
    model3->setHeaderData(3, Qt::Horizontal, QObject::tr("NM_PART"));
    model3->setHeaderData(4, Qt::Horizontal, QObject::tr("SALAIRE_PART"));
    return model3;

}
       QSqlQueryModel *Partenaire::trier()
           {
               QSqlQueryModel *model2=new QSqlQueryModel();
               model2->setQuery("select * from GEST_PART ORDER BY ID_PART");
               model2->setHeaderData(0, Qt::Horizontal, QObject::tr(":ID_PART"));
               model2->setHeaderData(1, Qt::Horizontal, QObject::tr("PR_PART"));
               model2->setHeaderData(2, Qt::Horizontal, QObject::tr("ADRESSE_PART"));
               model2->setHeaderData(3, Qt::Horizontal, QObject::tr("NM_PART"));

               model2->setHeaderData(4, Qt::Horizontal, QObject::tr("FONCT_PART"));
               model2->setHeaderData(5, Qt::Horizontal, QObject::tr("SALAIRE_PART"));
               model2->setHeaderData(6, Qt::Horizontal, QObject::tr("EMAIL_PART"));

               model2->setHeaderData(7, Qt::Horizontal, QObject::tr("NUMTEL_PART"));

               return model2;


}
       QSqlQueryModel *Partenaire::trier2()
           {
               QSqlQueryModel *model2=new QSqlQueryModel();
               model2->setQuery("select * from GEST_PART ORDER BY NM_PART");
               model2->setHeaderData(0, Qt::Horizontal, QObject::tr(":ID_PART"));
               model2->setHeaderData(1, Qt::Horizontal, QObject::tr("PR_PART"));
               model2->setHeaderData(2, Qt::Horizontal, QObject::tr("ADRESSE_PART"));
               model2->setHeaderData(3, Qt::Horizontal, QObject::tr("NM_PART"));

               model2->setHeaderData(4, Qt::Horizontal, QObject::tr("FONCT_PART"));
               model2->setHeaderData(5, Qt::Horizontal, QObject::tr("SALAIRE_PART"));
               model2->setHeaderData(6, Qt::Horizontal, QObject::tr("EMAIL_PART"));

               model2->setHeaderData(7, Qt::Horizontal, QObject::tr("NUMTEL_PART"));

               return model2;
       }

