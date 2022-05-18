QT       += core gui sql core gui sql widgets multimedia multimediawidgets serialport network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chantier.cpp \
    connection.cpp \
    main.cpp \
    mainwindow.cpp \
    qrcode.cpp


HEADERS += \
    chantier.h \
    connection.h \
    mainwindow.h \
    qrcode.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    .travis.yml \
    Atelier_Connexion.pro.user \
    qrencode.1.in
