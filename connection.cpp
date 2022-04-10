#include "connection.h"
#include "QSqlDatabase"

connection::connection()
{

}
bool connection::createConnection(){
   bool test=false;
   QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
   db.setDatabaseName("construction");
   db.setUserName("Omar");//inserer nom de l'utilisateur
   db.setPassword("esprit22");//inserer mot de passe de cet utilisateur
   if(db.open())
test=true;
return test;
}

void connection :: fermerConnection()
{
    db.close();
}
