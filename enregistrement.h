#ifndef ENREGISTREMENT_H
#define ENREGISTREMENT_H

#include <qstring.h>
#include <qsqlquery.h>
#include <QDate>
#include <qsqlquerymodel.h>

class enregistrement
{
public:
    enregistrement();//constructeur par defaut
     enregistrement(QString);//constructeur parametre
     QString get_msg();


          bool ajouter();
          QSqlQueryModel * afficher();

private:

QString msg;
};



#endif // ENREGISTREMENT_H
