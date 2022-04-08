#include "mainwindow.h"
#include <QApplication>
#include "connection.h"
#include <QMessageBox>
#include <QtDebug>
#include <QMediaPlayer>
#include <QApplication>
#include <QVideoWidget>
#include <QTimer>
#include <QSplashScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connection c;
    bool test=c.createConnection();
 MainWindow w;

    if(test)
    { w.show();

       QMessageBox::information(nullptr, QObject::tr("database is open"),
                QObject::tr("Connection successful.\n""Click cancel to exit"),QMessageBox::Cancel);

    }
      else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                QObject::tr("Connection failed.\n""Click cancel to exit"),QMessageBox::Cancel);


    return a.exec();
}
