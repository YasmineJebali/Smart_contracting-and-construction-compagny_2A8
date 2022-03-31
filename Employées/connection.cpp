#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnection()
{

QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
bool test=false;
db.setDatabaseName("Source_Projet2A");
db.setUserName("yasmine");//inserer nom de l'utilisateur
db.setPassword("yasmine");//inserer mot de passe de cet utilisateur
db.setHostName("localhost");

if (db.open()) test=true;

return test;
}




