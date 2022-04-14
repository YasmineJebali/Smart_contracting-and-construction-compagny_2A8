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
#include <QMediaPlaylist>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connection c;
    bool test=c.createConnection();


    QMediaPlaylist *playlist = new QMediaPlaylist;
    playlist->addMedia(QUrl("qrc:/ressources/mpg/2.mpg"));
    playlist->addMedia(QUrl("qrc:/ressources/mpg/1.mpg"));
  playlist->setCurrentIndex(1);

   QMediaPlayer *player = new QMediaPlayer;
  player->setPlaylist(playlist);

  QVideoWidget *videoWidget = new QVideoWidget;
  player->setVideoOutput(videoWidget);
  videoWidget->setFullScreen(player);
  videoWidget->show();
  player->play();




    MainWindow w;
    //QTimer::singleShot(16000,_vw,SLOT(close()));
   //QTimer::singleShot(16000,_vw2,SLOT(show()));

    QTimer::singleShot(31420,videoWidget,SLOT(close()));
   QTimer::singleShot(31420,&w,SLOT(show()));

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
