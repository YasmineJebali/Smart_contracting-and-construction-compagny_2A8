/********************************************************************************
** Form generated from reading UI file 'materiels.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATERIELS_H
#define UI_MATERIELS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_materiels
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_ajou;
    QPushButton *pushButton_affi;
    QPushButton *pushButton_menu;
    QWidget *page_2;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_ref;
    QLineEdit *lineEdit_nom;
    QPushButton *pushButton_aj2;
    QPushButton *pushButton_bk2;
    QSpinBox *SpinBox_Qt;
    QLabel *label_4;
    QDoubleSpinBox *DoubleS_Prht;
    QDoubleSpinBox *DoubleS_Prttc;
    QPushButton *pushButton_affi2;
    QComboBox *comboBox_dispo;
    QLabel *label_click;
    QLabel *label_waiting;
    QLabel *label_backr;
    QWidget *page_3;
    QPushButton *pushButton_reche;
    QLabel *label_ref;
    QLineEdit *lineEdit_ref_2;
    QFrame *frame_6;
    QPushButton *pushButton_mod;
    QLabel *label_12;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_8;
    QLineEdit *lineEdit_rf;
    QLineEdit *lineEdit_nm;
    QDoubleSpinBox *DoubleS_prttc;
    QDoubleSpinBox *DoubleS_prht;
    QSpinBox *spinBox_Qt;
    QComboBox *RoomList_dispo;
    QPushButton *pushButton_suppr;
    QTableView *tabView_Materiels;
    QFrame *frame_5;
    QRadioButton *radioButton_ref;
    QRadioButton *radioButton_nom;
    QLabel *label_73;
    QPushButton *pushButton_bkaf;
    QPushButton *pushButton_chart;
    QPushButton *pushButton_excel;
    QLabel *label_excel;
    QLabel *label_chart;
    QLabel *label_notific;
    QPushButton *pushButton_notification;
    QLineEdit *lineEdit_nom_2;
    QPushButton *pushButton_reche_2;
    QLabel *label_13;
    QWidget *page_4;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;

    void setupUi(QDialog *materiels)
    {
        if (materiels->objectName().isEmpty())
            materiels->setObjectName(QStringLiteral("materiels"));
        materiels->resize(1026, 582);
        stackedWidget = new QStackedWidget(materiels);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, -50, 1021, 641));
        stackedWidget->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayoutWidget_2 = new QWidget(page);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(240, 60, 671, 531));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_ajou = new QPushButton(verticalLayoutWidget_2);
        pushButton_ajou->setObjectName(QStringLiteral("pushButton_ajou"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        pushButton_ajou->setFont(font);
        pushButton_ajou->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_ajou->setStyleSheet(QLatin1String("border-radius: 10% 30% 50% 70%;\n"
"  background: #BC4A3C;\n"
"  padding: 20px;\n"
""));

        verticalLayout_3->addWidget(pushButton_ajou);

        pushButton_affi = new QPushButton(verticalLayoutWidget_2);
        pushButton_affi->setObjectName(QStringLiteral("pushButton_affi"));
        pushButton_affi->setFont(font);
        pushButton_affi->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_affi->setStyleSheet(QLatin1String("border-radius: 10% 30% 50% 70%;\n"
"  background: #BC4A3C;\n"
"  padding: 20px;\n"
""));
        pushButton_affi->setFlat(false);

        verticalLayout_3->addWidget(pushButton_affi);

        pushButton_menu = new QPushButton(verticalLayoutWidget_2);
        pushButton_menu->setObjectName(QStringLiteral("pushButton_menu"));
        pushButton_menu->setFont(font);
        pushButton_menu->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_menu->setStyleSheet(QLatin1String("border-radius: 10% 30% 50% 70%;\n"
"  background: #BC4A3C;\n"
"  padding: 20px;\n"
""));

        verticalLayout_3->addWidget(pushButton_menu);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setStyleSheet(QStringLiteral(""));
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(110, 50, 691, 421));
        QFont font1;
        font1.setPointSize(12);
        groupBox_2->setFont(font1);
        groupBox_2->setStyleSheet(QLatin1String("groupBox_2{\n"
"background-size:contain;\n"
"border-image:url(\":/ressources/imgs/5.png\");\n"
"background-repeat:no-repeat;\n"
"}"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 50, 41, 16));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 80, 47, 13));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 110, 61, 16));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 170, 61, 16));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 200, 81, 21));
        lineEdit_ref = new QLineEdit(groupBox_2);
        lineEdit_ref->setObjectName(QStringLiteral("lineEdit_ref"));
        lineEdit_ref->setGeometry(QRect(80, 50, 51, 20));
        lineEdit_nom = new QLineEdit(groupBox_2);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(80, 80, 101, 20));
        pushButton_aj2 = new QPushButton(groupBox_2);
        pushButton_aj2->setObjectName(QStringLiteral("pushButton_aj2"));
        pushButton_aj2->setGeometry(QRect(340, 240, 151, 41));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        pushButton_aj2->setFont(font2);
        pushButton_aj2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_aj2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :yellow;\n"
"}"));
        pushButton_bk2 = new QPushButton(groupBox_2);
        pushButton_bk2->setObjectName(QStringLiteral("pushButton_bk2"));
        pushButton_bk2->setGeometry(QRect(10, 250, 61, 41));
        pushButton_bk2->setFont(font2);
        pushButton_bk2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_bk2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"border-image:url(\"\");\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        SpinBox_Qt = new QSpinBox(groupBox_2);
        SpinBox_Qt->setObjectName(QStringLiteral("SpinBox_Qt"));
        SpinBox_Qt->setGeometry(QRect(80, 110, 41, 22));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 140, 56, 16));
        DoubleS_Prht = new QDoubleSpinBox(groupBox_2);
        DoubleS_Prht->setObjectName(QStringLiteral("DoubleS_Prht"));
        DoubleS_Prht->setGeometry(QRect(80, 140, 62, 22));
        DoubleS_Prttc = new QDoubleSpinBox(groupBox_2);
        DoubleS_Prttc->setObjectName(QStringLiteral("DoubleS_Prttc"));
        DoubleS_Prttc->setGeometry(QRect(80, 170, 62, 22));
        pushButton_affi2 = new QPushButton(groupBox_2);
        pushButton_affi2->setObjectName(QStringLiteral("pushButton_affi2"));
        pushButton_affi2->setGeometry(QRect(500, 240, 141, 41));
        pushButton_affi2->setFont(font2);
        pushButton_affi2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_affi2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :yellow;\n"
"}"));
        comboBox_dispo = new QComboBox(groupBox_2);
        comboBox_dispo->setObjectName(QStringLiteral("comboBox_dispo"));
        comboBox_dispo->setGeometry(QRect(80, 200, 143, 21));
        comboBox_dispo->setStyleSheet(QLatin1String("QComboBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background: white;\n"
"}\n"
"\n"
"QComboBox:!editable, QComboBox::drop-down:editable {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                 stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"}\n"
"\n"
"/* QComboBox gets the \"on\" state when the popup is open */\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #D3D3D3, stop: 0.4 #D8D8D8,\n"
"                                stop: 0.5 #DDDDDD, stop: 1.0 #E1E1E1);\n"
"}\n"
"\n"
"QComboBox:on { /* shift the text when the popup opens */\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
""
                        "    subcontrol-position: top right;\n"
"    width: 15px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; /* just a single line */\n"
"    border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(/usr/share/icons/crystalsvg/16x16/actions/1downarrow.png);\n"
"}\n"
"\n"
"QComboBox::down-arrow:on { /* shift the arrow when popup is open */\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}"));
        label_click = new QLabel(groupBox_2);
        label_click->setObjectName(QStringLiteral("label_click"));
        label_click->setGeometry(QRect(270, 210, 91, 71));
        label_waiting = new QLabel(groupBox_2);
        label_waiting->setObjectName(QStringLiteral("label_waiting"));
        label_waiting->setGeometry(QRect(530, 220, 81, 41));
        label_waiting->setStyleSheet(QStringLiteral("background-color:transparent;"));
        label_backr = new QLabel(groupBox_2);
        label_backr->setObjectName(QStringLiteral("label_backr"));
        label_backr->setGeometry(QRect(8, 10, 671, 341));
        label_backr->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_5->raise();
        label_6->raise();
        lineEdit_ref->raise();
        lineEdit_nom->raise();
        pushButton_aj2->raise();
        pushButton_bk2->raise();
        SpinBox_Qt->raise();
        label_4->raise();
        DoubleS_Prht->raise();
        DoubleS_Prttc->raise();
        pushButton_affi2->raise();
        comboBox_dispo->raise();
        label_click->raise();
        label_waiting->raise();
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setStyleSheet(QStringLiteral("border-image:(\":url/imgs/5.png\");"));
        pushButton_reche = new QPushButton(page_3);
        pushButton_reche->setObjectName(QStringLiteral("pushButton_reche"));
        pushButton_reche->setGeometry(QRect(700, 140, 81, 21));
        pushButton_reche->setStyleSheet(QLatin1String("QPushButton {\n"
"padding:5px;\n"
"border-radius:5px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight:bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"}"));
        label_ref = new QLabel(page_3);
        label_ref->setObjectName(QStringLiteral("label_ref"));
        label_ref->setGeometry(QRect(500, 140, 71, 20));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setItalic(false);
        label_ref->setFont(font3);
        lineEdit_ref_2 = new QLineEdit(page_3);
        lineEdit_ref_2->setObjectName(QStringLiteral("lineEdit_ref_2"));
        lineEdit_ref_2->setGeometry(QRect(612, 140, 91, 20));
        frame_6 = new QFrame(page_3);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(540, 210, 251, 241));
        frame_6->setStyleSheet(QStringLiteral("background-color:rgb(178,184,185);"));
        frame_6->setFrameShape(QFrame::Box);
        frame_6->setFrameShadow(QFrame::Plain);
        frame_6->setLineWidth(2);
        frame_6->setMidLineWidth(0);
        pushButton_mod = new QPushButton(frame_6);
        pushButton_mod->setObjectName(QStringLiteral("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(140, 190, 81, 21));
        pushButton_mod->setStyleSheet(QLatin1String("QPushButton {\n"
"padding:5px;\n"
"border-radius:5px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight:bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"}"));
        label_12 = new QLabel(frame_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 100, 91, 16));
        label_7 = new QLabel(frame_6);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 10, 41, 16));
        label_9 = new QLabel(frame_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 40, 47, 13));
        label_10 = new QLabel(frame_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 70, 61, 16));
        label_11 = new QLabel(frame_6);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 130, 61, 16));
        label_8 = new QLabel(frame_6);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 160, 81, 21));
        lineEdit_rf = new QLineEdit(frame_6);
        lineEdit_rf->setObjectName(QStringLiteral("lineEdit_rf"));
        lineEdit_rf->setGeometry(QRect(60, 10, 51, 20));
        lineEdit_nm = new QLineEdit(frame_6);
        lineEdit_nm->setObjectName(QStringLiteral("lineEdit_nm"));
        lineEdit_nm->setGeometry(QRect(60, 40, 71, 20));
        DoubleS_prttc = new QDoubleSpinBox(frame_6);
        DoubleS_prttc->setObjectName(QStringLiteral("DoubleS_prttc"));
        DoubleS_prttc->setGeometry(QRect(120, 100, 62, 22));
        DoubleS_prht = new QDoubleSpinBox(frame_6);
        DoubleS_prht->setObjectName(QStringLiteral("DoubleS_prht"));
        DoubleS_prht->setGeometry(QRect(120, 130, 62, 22));
        spinBox_Qt = new QSpinBox(frame_6);
        spinBox_Qt->setObjectName(QStringLiteral("spinBox_Qt"));
        spinBox_Qt->setGeometry(QRect(120, 70, 41, 22));
        RoomList_dispo = new QComboBox(frame_6);
        RoomList_dispo->setObjectName(QStringLiteral("RoomList_dispo"));
        RoomList_dispo->setGeometry(QRect(120, 160, 81, 21));
        QFont font4;
        font4.setPointSize(8);
        RoomList_dispo->setFont(font4);
        RoomList_dispo->setEditable(true);
        pushButton_suppr = new QPushButton(frame_6);
        pushButton_suppr->setObjectName(QStringLiteral("pushButton_suppr"));
        pushButton_suppr->setGeometry(QRect(30, 190, 81, 21));
        pushButton_suppr->setStyleSheet(QLatin1String("QPushButton {\n"
"padding:5px;\n"
"border-radius:5px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight:bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"}"));
        tabView_Materiels = new QTableView(page_3);
        tabView_Materiels->setObjectName(QStringLiteral("tabView_Materiels"));
        tabView_Materiels->setGeometry(QRect(40, 40, 441, 241));
        tabView_Materiels->setStyleSheet(QStringLiteral(""));
        frame_5 = new QFrame(page_3);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(560, 30, 191, 91));
        frame_5->setStyleSheet(QStringLiteral("background-color:rgb(178,184,185);"));
        frame_5->setFrameShape(QFrame::Box);
        frame_5->setFrameShadow(QFrame::Plain);
        frame_5->setLineWidth(2);
        frame_5->setMidLineWidth(0);
        radioButton_ref = new QRadioButton(frame_5);
        radioButton_ref->setObjectName(QStringLiteral("radioButton_ref"));
        radioButton_ref->setGeometry(QRect(10, 50, 101, 21));
        QFont font5;
        font5.setPointSize(8);
        font5.setBold(true);
        radioButton_ref->setFont(font5);
        radioButton_ref->setStyleSheet(QLatin1String("\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"font-weight: bold;"));
        radioButton_nom = new QRadioButton(frame_5);
        radioButton_nom->setObjectName(QStringLiteral("radioButton_nom"));
        radioButton_nom->setGeometry(QRect(110, 50, 71, 21));
        radioButton_nom->setFont(font5);
        radioButton_nom->setStyleSheet(QLatin1String("\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"\n"
"font-weight: bold;"));
        label_73 = new QLabel(frame_5);
        label_73->setObjectName(QStringLiteral("label_73"));
        label_73->setGeometry(QRect(10, 10, 101, 21));
        QFont font6;
        font6.setPointSize(11);
        font6.setBold(true);
        font6.setUnderline(true);
        label_73->setFont(font6);
        pushButton_bkaf = new QPushButton(page_3);
        pushButton_bkaf->setObjectName(QStringLiteral("pushButton_bkaf"));
        pushButton_bkaf->setGeometry(QRect(440, 290, 61, 41));
        pushButton_bkaf->setFont(font2);
        pushButton_bkaf->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_bkaf->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pushButton_chart = new QPushButton(page_3);
        pushButton_chart->setObjectName(QStringLiteral("pushButton_chart"));
        pushButton_chart->setGeometry(QRect(340, 370, 181, 51));
        pushButton_chart->setFont(font2);
        pushButton_chart->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_chart->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pushButton_excel = new QPushButton(page_3);
        pushButton_excel->setObjectName(QStringLiteral("pushButton_excel"));
        pushButton_excel->setGeometry(QRect(200, 370, 131, 51));
        pushButton_excel->setFont(font2);
        pushButton_excel->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_excel->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        label_excel = new QLabel(page_3);
        label_excel->setObjectName(QStringLiteral("label_excel"));
        label_excel->setGeometry(QRect(200, 370, 61, 51));
        label_excel->setStyleSheet(QLatin1String("/*border-image:url(\":/ressources/imgs/6.png\");*/\n"
"border-radius:20px;"));
        label_chart = new QLabel(page_3);
        label_chart->setObjectName(QStringLiteral("label_chart"));
        label_chart->setGeometry(QRect(340, 370, 61, 51));
        label_chart->setStyleSheet(QLatin1String("/*border-image:url(\":/ressources/imgs/6.png\");*/\n"
"border-radius:20px;"));
        label_notific = new QLabel(page_3);
        label_notific->setObjectName(QStringLiteral("label_notific"));
        label_notific->setGeometry(QRect(10, 370, 51, 51));
        pushButton_notification = new QPushButton(page_3);
        pushButton_notification->setObjectName(QStringLiteral("pushButton_notification"));
        pushButton_notification->setGeometry(QRect(10, 370, 171, 51));
        pushButton_notification->setFont(font2);
        pushButton_notification->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        lineEdit_nom_2 = new QLineEdit(page_3);
        lineEdit_nom_2->setObjectName(QStringLiteral("lineEdit_nom_2"));
        lineEdit_nom_2->setGeometry(QRect(610, 180, 91, 22));
        pushButton_reche_2 = new QPushButton(page_3);
        pushButton_reche_2->setObjectName(QStringLiteral("pushButton_reche_2"));
        pushButton_reche_2->setGeometry(QRect(700, 180, 81, 21));
        pushButton_reche_2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding:5px;\n"
"border-radius:5px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight:bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"}"));
        label_13 = new QLabel(page_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(500, 180, 51, 16));
        QFont font7;
        font7.setPointSize(10);
        font7.setBold(true);
        label_13->setFont(font7);
        stackedWidget->addWidget(page_3);
        pushButton_notification->raise();
        pushButton_reche->raise();
        label_ref->raise();
        lineEdit_ref_2->raise();
        frame_6->raise();
        tabView_Materiels->raise();
        frame_5->raise();
        pushButton_bkaf->raise();
        pushButton_chart->raise();
        pushButton_excel->raise();
        label_excel->raise();
        label_chart->raise();
        label_notific->raise();
        lineEdit_nom_2->raise();
        pushButton_reche_2->raise();
        label_13->raise();
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        horizontalFrame = new QFrame(page_4);
        horizontalFrame->setObjectName(QStringLiteral("horizontalFrame"));
        horizontalFrame->setGeometry(QRect(-140, -20, 821, 471));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        stackedWidget->addWidget(page_4);

        retranslateUi(materiels);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(materiels);
    } // setupUi

    void retranslateUi(QDialog *materiels)
    {
        materiels->setWindowTitle(QApplication::translate("materiels", "Dialog", Q_NULLPTR));
        pushButton_ajou->setText(QApplication::translate("materiels", "Ajouter  mat\303\251riels", Q_NULLPTR));
        pushButton_affi->setText(QApplication::translate("materiels", "Afficher mat\303\251riels", Q_NULLPTR));
        pushButton_menu->setText(QApplication::translate("materiels", "Menu", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("materiels", "Ajouter mat\303\251riels", Q_NULLPTR));
        label->setText(QApplication::translate("materiels", "R\303\251f:", Q_NULLPTR));
        label_2->setText(QApplication::translate("materiels", "NOM:", Q_NULLPTR));
        label_3->setText(QApplication::translate("materiels", "Quantit\303\251:", Q_NULLPTR));
        label_5->setText(QApplication::translate("materiels", "Prix TTC:", Q_NULLPTR));
        label_6->setText(QApplication::translate("materiels", "Disponibilit\303\251:", Q_NULLPTR));
        pushButton_aj2->setText(QApplication::translate("materiels", "Ajouter ", Q_NULLPTR));
        pushButton_bk2->setText(QApplication::translate("materiels", "Back", Q_NULLPTR));
        label_4->setText(QApplication::translate("materiels", "Prix HT", Q_NULLPTR));
        pushButton_affi2->setText(QApplication::translate("materiels", "Afficher", Q_NULLPTR));
        comboBox_dispo->clear();
        comboBox_dispo->insertItems(0, QStringList()
         << QApplication::translate("materiels", "En Stock", Q_NULLPTR)
         << QApplication::translate("materiels", "Hors Stock", Q_NULLPTR)
        );
        label_click->setText(QString());
        label_waiting->setText(QString());
        label_backr->setText(QString());
        pushButton_reche->setText(QApplication::translate("materiels", "Recherche", Q_NULLPTR));
        label_ref->setText(QApplication::translate("materiels", "R\303\251ference :", Q_NULLPTR));
        pushButton_mod->setText(QApplication::translate("materiels", "Modifier", Q_NULLPTR));
        label_12->setText(QApplication::translate("materiels", "Prix TTC :", Q_NULLPTR));
        label_7->setText(QApplication::translate("materiels", "R\303\251f:", Q_NULLPTR));
        label_9->setText(QApplication::translate("materiels", "NOM:", Q_NULLPTR));
        label_10->setText(QApplication::translate("materiels", "Quantit\303\251 :", Q_NULLPTR));
        label_11->setText(QApplication::translate("materiels", "Prix HT:", Q_NULLPTR));
        label_8->setText(QApplication::translate("materiels", "Disponiblit\303\251 :", Q_NULLPTR));
        RoomList_dispo->clear();
        RoomList_dispo->insertItems(0, QStringList()
         << QApplication::translate("materiels", "En Stock", Q_NULLPTR)
         << QApplication::translate("materiels", "Hors Stock", Q_NULLPTR)
        );
        RoomList_dispo->setCurrentText(QApplication::translate("materiels", "En Stock", Q_NULLPTR));
        pushButton_suppr->setText(QApplication::translate("materiels", "Supprimer", Q_NULLPTR));
        radioButton_ref->setText(QApplication::translate("materiels", "R\303\251ference", Q_NULLPTR));
        radioButton_nom->setText(QApplication::translate("materiels", "Nom", Q_NULLPTR));
        label_73->setText(QApplication::translate("materiels", "Trier selon :", Q_NULLPTR));
        pushButton_bkaf->setText(QApplication::translate("materiels", "Retour", Q_NULLPTR));
        pushButton_chart->setText(QApplication::translate("materiels", "           Statistiques", Q_NULLPTR));
        pushButton_excel->setText(QApplication::translate("materiels", "           Excel", Q_NULLPTR));
        label_excel->setText(QString());
        label_chart->setText(QString());
        label_notific->setText(QString());
        pushButton_notification->setText(QApplication::translate("materiels", "        Notification", Q_NULLPTR));
        pushButton_reche_2->setText(QApplication::translate("materiels", "Recherche", Q_NULLPTR));
        label_13->setText(QApplication::translate("materiels", "Nom :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class materiels: public Ui_materiels {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATERIELS_H
