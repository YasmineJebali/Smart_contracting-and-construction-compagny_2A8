#include "connection.h"
#include "QSqlDatabase"

connection::connection()
{

}
bool connection::createConnection(){
   bool test=false;
   QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
   db.setDatabaseName("matieresPrem");
   db.setUserName("jihed");//inserer nom de l'utilisateur
   db.setPassword("jihed");//inserer mot de passe de cet utilisateur
   if(db.open())
test=true;
return test;
}

void connection :: fermerConnection()
{
    db.close();
}
