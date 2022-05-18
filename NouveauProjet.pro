QT  += core gui sql multimedia multimediawidgets serialport network
QT  += printsupport charts
PKGCONFIG += openssl
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport quickwidgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arduino1.cpp \
    arduino2.cpp \
    calendrier.cpp \
    chantier.cpp \
    connection.cpp \
    employee.cpp \
    enregistrement.cpp \
    fournisseur.cpp \
    historique.cpp \
    mailing.cpp \
    main.cpp \
    mainwindow.cpp \
    map.cpp \
    materiels.cpp \
    matieresprem.cpp \
    partenaire.cpp \
    qcustomplot.cpp \
    qrcode.cpp \
    smtp.cpp \
    statistic.cpp \
    statisticf.cpp

HEADERS += \
    arduino1.h \
    arduino2.h \
    calendrier.h \
    chantier.h \
    connection.h \
    employee.h \
    enregistrement.h \
    fournisseur.h \
    historique.h \
    mailing.h \
    mainwindow.h \
    map.h \
    materiels.h \
    matieresprem.h \
    partenaire.h \
    qcustomplot.h \
    qrcode.h \
    qrcodegen.h \
    smtp.h \
    statistic.h \
    statisticf.h

FORMS += \
    mainwindow.ui \
    map.ui \
    statistic.ui \
    statisticf.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    employe_ressources.qrc \
    fournisseur.qrc \
    qml.qrc \
    ressources.qrc \
    ressources2.qrc

RC_ICONS = icons/2.ico

DISTFILES += \
    Diffnes.qss \
    Integrid.qss \
    historique.txt \
    imgs/4.jpg \
    map.qml

QMAKE_CXXFLAGS += -std=gnu++14
