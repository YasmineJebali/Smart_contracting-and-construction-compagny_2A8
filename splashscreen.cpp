/*#include "splashscreen.h"
#include "ui_splashscreen.h"

#include "mainwindow.h"
splashScreen::splashScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::splashScreen)
{
    ui->setupUi(this);

        MainWindow w;
        QMediaPlayer *_player = new QMediaPlayer;
        QVideoWidget *_vw = new QVideoWidget;
        QSplashScreen *splash = new QSplashScreen;
        _player->setVideoOutput(_vw);
        const QUrl url = QUrl("qrc:/ressources/mpg/1.mpg");
        //const QNetworkRequest requete(url);
        _player->setMedia(url);
        _vw->setGeometry(100,100,350,285);
        _vw->show();
         _vw->setFullScreen(_player);
        _player->play();
        QTimer::singleShot(15000,splash,SLOT(close()));
       QTimer::singleShot(15000,&w,SLOT(show()));

}

splashScreen::~splashScreen()
{
    delete ui;
}
*/
