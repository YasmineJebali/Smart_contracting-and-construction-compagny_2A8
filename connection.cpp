#include "connection.h"
#include "QSqlDatabase"

connection::connection()
{

}
bool connection::createConnection(){
   bool test=false;
   QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
   db.setDatabaseName("construction");
   db.setUserName("Omar");
   db.setPassword("esprit22");
   if(db.open())
test=true;
return test;
}

void connection :: fermerConnection()
{
    db.close();
}
