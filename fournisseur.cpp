#include "fournisseur.h"
#include <QString>
#include <QMessageBox>
#include <QtWidgets>
#include <QPainter>
#include <QtPrintSupport/QPrinter>
#include <QFileDialog>
#include <QSqlQueryModel>
#include <QTextDocument>
fournisseur::fournisseur(int id, QString nom,QString adr,QString email,QString livCode,QString dateLiv,QString tel)
{

    this->id=id;
    this->nom=nom;
    this->adr=adr;
    this->email=email;
    this->livCode=livCode;
    this->dateLiv=dateLiv;
    this->tel=tel;



}


bool fournisseur::ajouter()
{
    QSqlQuery  query;
    QString res=QString::number(id);
     query.prepare("INSERT INTO FOURNISSEURS(ID_F,NM_F,ADR_F,EMAIL_F,LIVRAISON_F,DATE_LIV_F,NUMTEL_F)" "VALUES(:id,:nom,:adr,:email,:codeLiv,:dateLiv,:tel)") ;
     query.bindValue(":id",res);
     query.bindValue(":nom",nom);
     query.bindValue(":adr",adr);
     query.bindValue(":email",email);
     query.bindValue(":codeLiv",livCode);
     query.bindValue(":dateLiv",dateLiv);
      query.bindValue(":tel",tel);

     return query.exec();

}

bool fournisseur::modifier(int id)
{
    QSqlQuery  query;
     QString res= QString::number(id);
     query.prepare("UPDATE FOURNISSEURS set ID_F = :id, NM_F = :nom, ADR_F = :adr, EMAIL_F = :email, LIVRAISON_F = :codeLiv, DATE_LIV_F = :dateLiv,NUMTEL_F=:tel where ID_F =:id");
     query.bindValue(":id",res);
     query.bindValue(":nom",nom);
     query.bindValue(":adr",adr);
     query.bindValue(":email",email);
     query.bindValue(":codeLiv",livCode);
     query.bindValue(":dateLiv",dateLiv);
      query.bindValue(":tel",tel);


     return query.exec();
}



QSqlQueryModel * fournisseur::afficher(){


    QSqlQueryModel * model= new QSqlQueryModel();
        model->setQuery("select * from FOURNISSEURS");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("adr"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("email"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("livCode"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("dateLiv"));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("Tel"));
        return model;

}

bool fournisseur::supprimer(int id)
{
    QSqlQuery  query;
    QString res= QString::number(id);
     query.prepare("Delete from FOURNISSEURS where ID_F = :id");
     query.bindValue(":id",res);
return query.exec();


}




QSqlQueryModel *fournisseur::rechercherId(int id)
{
    QSqlQueryModel * model1=new QSqlQueryModel();
     QSqlQuery query;
    QString res=QString::number(id);
    query.prepare("select * from FOURNISSEURS where ID_F=:id");
    query.bindValue(":id",res);
    query.exec();
    model1->setQuery(query);
    model1->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model1->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model1->setHeaderData(2, Qt::Horizontal, QObject::tr("adr"));
    model1->setHeaderData(3, Qt::Horizontal, QObject::tr("email"));
    model1->setHeaderData(4, Qt::Horizontal, QObject::tr("livCode"));
    model1->setHeaderData(5, Qt::Horizontal, QObject::tr("dateLiv"));
    model1->setHeaderData(6, Qt::Horizontal, QObject::tr("Tel"));
       return model1;
}

QSqlQueryModel *fournisseur::rechercherT(QString tel)
{
   QSqlQueryModel * model1=new QSqlQueryModel();
   QSqlQuery query;
   query.prepare("select * from FOURNISSEURS where NUMTEL_F=:tel");
   query.bindValue(":tel",tel);
   query.exec();
   model1->setQuery(query);
    model1->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model1->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model1->setHeaderData(2, Qt::Horizontal, QObject::tr("adr"));
    model1->setHeaderData(3, Qt::Horizontal, QObject::tr("email"));
    model1->setHeaderData(4, Qt::Horizontal, QObject::tr("livCode"));
    model1->setHeaderData(5, Qt::Horizontal, QObject::tr("dateLiv"));
    model1->setHeaderData(6, Qt::Horizontal, QObject::tr("Tel"));


       return model1;


}


QSqlQueryModel *fournisseur::trierId()
{
              QSqlQuery * q = new  QSqlQuery ();
                     QSqlQueryModel * model = new  QSqlQueryModel ();
                     q->prepare("SELECT * FROM FOURNISSEURS order by ID_F DESC");
                     q->exec();
                     model->setQuery(*q);
                     return model;

}

QSqlQueryModel *fournisseur::trierN()
{

              QSqlQuery * q = new  QSqlQuery ();
                     QSqlQueryModel * model = new  QSqlQueryModel ();
                     q->prepare("SELECT * FROM FOURNISSEURS order by NM_F DESC");
                     q->exec();
                     model->setQuery(*q);
                     return model;

}

QSqlQueryModel *fournisseur::meilleuroffreTri()
{

    QSqlQueryModel * model1=new QSqlQueryModel();
      QSqlQuery query;
      query.prepare("select REF,NOM,QT,PRTTC from MATERIELS where PRTTC < 30");
      query.exec();
      model1->setQuery(query);
       model1->setHeaderData(0, Qt::Horizontal, QObject::tr("ref"));
       model1->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
       model1->setHeaderData(2, Qt::Horizontal, QObject::tr("qt"));
       model1->setHeaderData(3, Qt::Horizontal, QObject::tr("prttc"));

        return model1;
}
void fournisseur::createpdf()
{
    QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Export PDF", QString(), "*.pdf");
        if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

        QPrinter printer(QPrinter::PrinterResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setPaperSize(QPrinter::A4);
        printer.setOutputFileName(fileName);

        QTextDocument doc;
        QSqlQuery q;
        q.prepare("select REF,NOM,QT,PRTTC from MATERIELS where PRTTC < 30");
        q.exec();
           QString pdf="<br><h1 style='color:red'>Liste des meilleurs offres  : <br></h1>\n <br>  <tr>   <th>Ref</th> <th>Nom</th>   <th>Qt</th> <th>Prix TTC</th> </tr>";

        while ( q.next()) {

            pdf= pdf+ " <br> <tr> <td> "+ q.value(0).toString()+"</td> <td>" + q.value(1).toString() +"</td> <td>" +q.value(2).toString() +"</td><td> "+q.value(3).toString()+"</td> " "</tr>";

        }
        doc.setHtml(pdf);
        doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
        doc.print(&printer);
}


