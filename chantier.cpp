#include "chantier.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTextStream>
#include <QPainter>
#include <QTextStream>


Chantier::Chantier()
{
    this->id=0;
    this->emplace="";
    this->surface="";
    this->plan="";
    this->topog="";
    this->cout="";
    this->type="";
    this->autorisa="";
}

Chantier::Chantier(int id,QString emplace,QString surface,QString plan,QString topog,QString cout,QString type,QString autorisa)
{
    this->id=id;
    this->emplace=emplace;
    this->surface=surface;
    this->plan=plan;
    this->topog=topog;
    this->cout=cout;
    this->type=type;
    this->autorisa=autorisa;

    }

int Chantier:: getId()
{
   return this->id;
}
QString Chantier:: getEmplace()
{
   return this->emplace;
}
QString Chantier:: getSurface()
{
return this->surface;
}
QString Chantier:: getPlan()
{
  return this->plan;
}

QString Chantier:: getTopog()
{
    return this->topog;
}
QString Chantier:: getCout()
{
    return this->cout;
}
QString Chantier:: getType()
{
    return this->type;
}
QString Chantier:: getAutorisa()
{
    return this->autorisa;
}
bool Chantier:: ajouter()
{
    QSqlQuery query;
    QString res=QString ::number(id);//res=sid//
    query.prepare("INSERT INTO GESTION_CHANTIER(id,emplace,surface,plan,topog,cout,type,autorisa)"
                  "VALUES(:id,:emplace,:surface,:plan,:topog,:cout,:type,:autorisa)");

 query.bindValue(":id",res);
 query.bindValue(":emplace",emplace);
 query.bindValue(":surface",surface);
 query.bindValue(":plan",plan);
 query.bindValue(":topog",topog);
 query.bindValue(":cout",cout);
 query.bindValue(":type",type);
 query.bindValue(":autorisa",autorisa);


    return query.exec();

}

QSqlQueryModel * Chantier:: afficher()
{

QSqlQueryModel * model =new QSqlQueryModel();
model->setQuery ("select * from GESTION_CHANTIER");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("emplace"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("surface"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("plan"));
model->setHeaderData(4,Qt::Horizontal,QObject::tr("topog"));
model->setHeaderData(5,Qt::Horizontal,QObject::tr("cout"));
model->setHeaderData(6,Qt::Horizontal,QObject::tr("type"));
model->setHeaderData(7,Qt::Horizontal,QObject::tr("autorisa"));
return model;

}


bool  Chantier::supprimer(int ide)
{
  QSqlQuery query;
  QString res=QString::number(ide);
  query.prepare("Delete from GESTION_CHANTIER where id= :id");
  query.bindValue(":id",res);

    return query.exec();

}

bool Chantier::modifier(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Update GESTION_CHANTIER set  emplace = :emplace , surface = :surface , plan = :plan ,topog= :topog , cout = :cout , type = :type, autorisa = :autorisa where id = :idd ");
query.bindValue(":idd",res);
query.bindValue(":emplace",emplace);
query.bindValue(":surface",surface);
query.bindValue(":plan",plan);
query.bindValue(":topog",topog);
query.bindValue(":cout",cout);
query.bindValue(":type",type);
query.bindValue(":autorisa",autorisa);

return    query.exec();
}




QSqlQueryModel *Chantier:: trie_ChantierS()
{
    QSqlQueryModel *model=new QSqlQueryModel();

    model->setQuery("select * from GESTION_CHANTIER order by SURFACE" );
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("emplace"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("surface"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("plan"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("topog"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("cout"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("type"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("autorisa"));

 return model;

}

QSqlQueryModel *Chantier:: trie_ChantierC()
{
    QSqlQueryModel *model=new QSqlQueryModel();

    model->setQuery("select * from GESTION_CHANTIER order by cout" );
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("emplace"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("surface"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("plan"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("topog"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("cout"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("type"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("autorisa"));


 return model;

}


QSqlQueryModel *Chantier::rechercherS(QString surface)
{
    QSqlQueryModel *model=new QSqlQueryModel();


    model->setQuery("select * from GESTION_CHANTIER where surface LIKE '"+surface+"%'");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("emplace"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("surface"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("plan"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("topog"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("cout"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("type"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("autorisa"));



       return model;


}

QSqlQueryModel *Chantier::rechercherC(QString cot)
{
    QSqlQueryModel * model=new QSqlQueryModel();



    model->setQuery("select * from GESTION_CHANTIER where cout LIKE '"+cot+"%'");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("emplace"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("surface"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("plan"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("topog"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("cout"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("type"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("autorisa"));



       return model;


}

void Chantier::CREATE_PDF()
{

    QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Export PDF", QString(), "*.pdf");
        if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

        QPrinter printer(QPrinter::PrinterResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setPaperSize(QPrinter::A4);
        printer.setOutputFileName(fileName);

        QTextDocument doc;
        QSqlQuery q;
        q.prepare("SELECT * FROM GESTION_CHANTIER");
        q.exec();
           QString pdf="<br><h1 style='color:red'>Liste des chantiers  : <br></h1>\n <br>  <tr>  <th>ID </th> <th>Emplace</th> <th>Surface</th> <th>PLan</th>  <th>Topog</th> <th>cout</th> <th>Type</th><th>Auto</th></tr>";

        while ( q.next()) {

            pdf= pdf+ " <br> <tr> <td> "+ q.value(0).toString()+"</td> <td>" + q.value(1).toString() +"</td> <td>" +q.value(2).toString() +"</td><td> "+q.value(3).toString() +"</td><td> "+q.value(4).toString() +"</td> <td> "+q.value(5).toString()+"</td> <td>" +q.value(6).toString()+"</td><td>"+q.value(7).toString()+"</td></tr>";

        }
        doc.setHtml(pdf);
        doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
        doc.print(&printer);

}
