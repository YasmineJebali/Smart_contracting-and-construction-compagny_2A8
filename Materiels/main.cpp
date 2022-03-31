#include "mainwindow.h"
#include <QApplication>
#include "connection.h"
#include <QMessageBox>
#include <QtDebug>
#include "splashscreen.h"
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


    QMediaPlayer *_player = new QMediaPlayer;
    QVideoWidget *_vw = new QVideoWidget;
   // QSplashScreen *splash = new QSplashScreen;
    _player->setVideoOutput(_vw);
    const QUrl url = QUrl("qrc:/ressources/mpg/2.mpg");
    //const QNetworkRequest requete(url);

    _player->setMedia(url);
    _vw->setGeometry(100,100,350,285);
   _vw->setFullScreen(_player);
    //splash->show();
    _vw->show();
    _player->play();
    MainWindow w;
    QTimer::singleShot(16000,_vw,SLOT(close()));
   QTimer::singleShot(16000,&w,SLOT(show()));
  // splash->close();
  //_vw->close();

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
