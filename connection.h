#ifndef CONNECTION_H
#define CONNECTION_H


#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class connection
{
public:
    connection();
    bool createConnection();
    void fermerConnection();

private:
QSqlDatabase db;
};
#endif // CONNECTION_H
