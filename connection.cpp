#include "connection.h"
#include "QSqlDatabase"

connection::connection()
{

}
bool connection::createConnection(){
   bool test=false;
   QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
   db.setDatabaseName("source_projet2a");
   db.setUserName("iheb");//inserer nom de l'utilisateur
   db.setPassword("iheb");//inserer mot de passe de cet utilisateur
   if(db.open())
test=true;
return test;
}

void connection :: fermerConnection()
{
    db.close();
}
