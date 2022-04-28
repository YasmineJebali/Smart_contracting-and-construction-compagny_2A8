#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include "connection.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connection c;

    bool test=c.createconnect();
    MainWindow w;
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("Connection"),
        QObject::tr("connection successful.\n"
                    "click cancel to exit."), QMessageBox::Cancel);

    }
w.show();
    return a.exec();


}

