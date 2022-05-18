/********************************************************************************
** Form generated from reading UI file 'matieresprem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATIERESPREM_H
#define UI_MATIERESPREM_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_matieresprem
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox;
    QPushButton *pushButton_ajou;
    QPushButton *pushButton_affi;
    QWidget *page_2;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_ref;
    QLineEdit *lineEdit_nom;
    QSpinBox *SpinBox_Qt;
    QLabel *label_4;
    QDoubleSpinBox *DoubleS_Prht;
    QDoubleSpinBox *DoubleS_Prttc;
    QComboBox *comboBox_dispo;
    QLabel *label_backr;
    QLabel *label_13;
    QComboBox *comboBox_type;
    QLineEdit *lineEdit_time;
    QPushButton *pushButton_bkaf;
    QLabel *label_waiting;
    QLabel *label_click;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_aj2;
    QPushButton *pushButton_affi2;
    QComboBox *comboBox_type_2;
    QLabel *label_15;
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
    QComboBox *comboBox_2;
    QLabel *label_14;
    QTableView *tabView_MatieresPrem;
    QFrame *frame_5;
    QRadioButton *radioButton_ref;
    QRadioButton *radioButton_nom;
    QLabel *label_73;
    QLabel *label_excel;
    QLabel *label_chart;
    QLabel *label_notific;
    QPushButton *pushButton_statut;
    QPushButton *pushButton_image;
    QPushButton *pushButton_Qrcode;
    QPushButton *pushButton_bkaf2;
    QLineEdit *lineEdit_cout;
    QLabel *label_nom;
    QPushButton *pushButton_reche_2;
    QLabel *label_img;
    QWidget *page_4;
    QLabel *qrcode;
    QPushButton *pushButton_bkaf2_2;

    void setupUi(QDialog *matieresprem)
    {
        if (matieresprem->objectName().isEmpty())
            matieresprem->setObjectName(QStringLiteral("matieresprem"));
        matieresprem->resize(1026, 589);
        stackedWidget = new QStackedWidget(matieresprem);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 811, 611));
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
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 10, 731, 451));
        groupBox->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pushButton_ajou = new QPushButton(groupBox);
        pushButton_ajou->setObjectName(QStringLiteral("pushButton_ajou"));
        pushButton_ajou->setGeometry(QRect(190, 30, 311, 101));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        pushButton_ajou->setFont(font);
        pushButton_ajou->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_ajou->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :yellow;\n"
"}"));
        pushButton_affi = new QPushButton(groupBox);
        pushButton_affi->setObjectName(QStringLiteral("pushButton_affi"));
        pushButton_affi->setGeometry(QRect(200, 260, 301, 81));
        pushButton_affi->setFont(font);
        pushButton_affi->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_affi->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :yellow;\n"
"}"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setStyleSheet(QStringLiteral(""));
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(120, 70, 691, 421));
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
        label_5->setGeometry(QRect(10, 140, 61, 16));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 240, 81, 21));
        lineEdit_ref = new QLineEdit(groupBox_2);
        lineEdit_ref->setObjectName(QStringLiteral("lineEdit_ref"));
        lineEdit_ref->setGeometry(QRect(80, 50, 51, 20));
        lineEdit_nom = new QLineEdit(groupBox_2);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(80, 80, 101, 20));
        SpinBox_Qt = new QSpinBox(groupBox_2);
        SpinBox_Qt->setObjectName(QStringLiteral("SpinBox_Qt"));
        SpinBox_Qt->setGeometry(QRect(80, 110, 41, 22));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 170, 56, 16));
        DoubleS_Prht = new QDoubleSpinBox(groupBox_2);
        DoubleS_Prht->setObjectName(QStringLiteral("DoubleS_Prht"));
        DoubleS_Prht->setGeometry(QRect(80, 140, 62, 22));
        DoubleS_Prttc = new QDoubleSpinBox(groupBox_2);
        DoubleS_Prttc->setObjectName(QStringLiteral("DoubleS_Prttc"));
        DoubleS_Prttc->setGeometry(QRect(80, 170, 62, 22));
        comboBox_dispo = new QComboBox(groupBox_2);
        comboBox_dispo->setObjectName(QStringLiteral("comboBox_dispo"));
        comboBox_dispo->setGeometry(QRect(90, 240, 143, 21));
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
        label_backr = new QLabel(groupBox_2);
        label_backr->setObjectName(QStringLiteral("label_backr"));
        label_backr->setGeometry(QRect(8, 10, 671, 341));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 200, 71, 21));
        comboBox_type = new QComboBox(groupBox_2);
        comboBox_type->setObjectName(QStringLiteral("comboBox_type"));
        comboBox_type->setGeometry(QRect(90, 201, 121, 21));
        lineEdit_time = new QLineEdit(groupBox_2);
        lineEdit_time->setObjectName(QStringLiteral("lineEdit_time"));
        lineEdit_time->setGeometry(QRect(570, 320, 113, 31));
        pushButton_bkaf = new QPushButton(groupBox_2);
        pushButton_bkaf->setObjectName(QStringLiteral("pushButton_bkaf"));
        pushButton_bkaf->setGeometry(QRect(450, 280, 91, 101));
        pushButton_bkaf->setFont(font);
        pushButton_bkaf->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_bkaf->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"border-radius:10px 50px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        label_waiting = new QLabel(groupBox_2);
        label_waiting->setObjectName(QStringLiteral("label_waiting"));
        label_waiting->setGeometry(QRect(260, 240, 111, 61));
        label_waiting->setStyleSheet(QStringLiteral("background-color:transparent;"));
        label_click = new QLabel(groupBox_2);
        label_click->setObjectName(QStringLiteral("label_click"));
        label_click->setGeometry(QRect(90, 260, 91, 51));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 280, 391, 91));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_aj2 = new QPushButton(layoutWidget);
        pushButton_aj2->setObjectName(QStringLiteral("pushButton_aj2"));
        pushButton_aj2->setFont(font);
        pushButton_aj2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_aj2->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"border-radius:10px 50px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));

        horizontalLayout->addWidget(pushButton_aj2);

        pushButton_affi2 = new QPushButton(layoutWidget);
        pushButton_affi2->setObjectName(QStringLiteral("pushButton_affi2"));
        pushButton_affi2->setFont(font);
        pushButton_affi2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_affi2->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"border-radius:10px 50px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));

        horizontalLayout->addWidget(pushButton_affi2);

        comboBox_type_2 = new QComboBox(groupBox_2);
        comboBox_type_2->setObjectName(QStringLiteral("comboBox_type_2"));
        comboBox_type_2->setGeometry(QRect(430, 361, 121, 21));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(350, 360, 71, 21));
        layoutWidget->raise();
        label_backr->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_5->raise();
        label_6->raise();
        lineEdit_ref->raise();
        lineEdit_nom->raise();
        SpinBox_Qt->raise();
        label_4->raise();
        DoubleS_Prht->raise();
        DoubleS_Prttc->raise();
        comboBox_dispo->raise();
        label_13->raise();
        comboBox_type->raise();
        lineEdit_time->raise();
        pushButton_bkaf->raise();
        label_waiting->raise();
        label_click->raise();
        comboBox_type_2->raise();
        label_15->raise();
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setStyleSheet(QStringLiteral("border-image:(\":url/imgs/5.png\");"));
        pushButton_reche = new QPushButton(page_3);
        pushButton_reche->setObjectName(QStringLiteral("pushButton_reche"));
        pushButton_reche->setGeometry(QRect(730, 140, 81, 21));
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
        label_ref->setGeometry(QRect(600, 140, 31, 20));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setItalic(false);
        label_ref->setFont(font2);
        label_ref->setStyleSheet(QStringLiteral(""));
        lineEdit_ref_2 = new QLineEdit(page_3);
        lineEdit_ref_2->setObjectName(QStringLiteral("lineEdit_ref_2"));
        lineEdit_ref_2->setGeometry(QRect(630, 140, 91, 20));
        frame_6 = new QFrame(page_3);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(560, 210, 251, 301));
        frame_6->setStyleSheet(QStringLiteral("background-color:rgb(120,140,130);"));
        frame_6->setFrameShape(QFrame::Box);
        frame_6->setFrameShadow(QFrame::Plain);
        frame_6->setLineWidth(2);
        frame_6->setMidLineWidth(0);
        pushButton_mod = new QPushButton(frame_6);
        pushButton_mod->setObjectName(QStringLiteral("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(120, 250, 81, 21));
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
        label_12->setGeometry(QRect(10, 100, 91, 16));
        label_7 = new QLabel(frame_6);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 10, 41, 16));
        label_9 = new QLabel(frame_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 40, 47, 13));
        label_10 = new QLabel(frame_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 70, 61, 16));
        label_11 = new QLabel(frame_6);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 130, 61, 16));
        label_8 = new QLabel(frame_6);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 210, 81, 21));
        lineEdit_rf = new QLineEdit(frame_6);
        lineEdit_rf->setObjectName(QStringLiteral("lineEdit_rf"));
        lineEdit_rf->setGeometry(QRect(60, 10, 51, 20));
        lineEdit_nm = new QLineEdit(frame_6);
        lineEdit_nm->setObjectName(QStringLiteral("lineEdit_nm"));
        lineEdit_nm->setGeometry(QRect(60, 40, 71, 20));
        DoubleS_prttc = new QDoubleSpinBox(frame_6);
        DoubleS_prttc->setObjectName(QStringLiteral("DoubleS_prttc"));
        DoubleS_prttc->setGeometry(QRect(90, 100, 62, 22));
        DoubleS_prht = new QDoubleSpinBox(frame_6);
        DoubleS_prht->setObjectName(QStringLiteral("DoubleS_prht"));
        DoubleS_prht->setGeometry(QRect(100, 130, 62, 22));
        spinBox_Qt = new QSpinBox(frame_6);
        spinBox_Qt->setObjectName(QStringLiteral("spinBox_Qt"));
        spinBox_Qt->setGeometry(QRect(90, 70, 41, 22));
        RoomList_dispo = new QComboBox(frame_6);
        RoomList_dispo->setObjectName(QStringLiteral("RoomList_dispo"));
        RoomList_dispo->setGeometry(QRect(110, 210, 81, 21));
        QFont font3;
        font3.setPointSize(8);
        RoomList_dispo->setFont(font3);
        RoomList_dispo->setEditable(true);
        pushButton_suppr = new QPushButton(frame_6);
        pushButton_suppr->setObjectName(QStringLiteral("pushButton_suppr"));
        pushButton_suppr->setGeometry(QRect(20, 250, 81, 21));
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
        comboBox_2 = new QComboBox(frame_6);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(90, 170, 121, 21));
        label_14 = new QLabel(frame_6);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 170, 71, 21));
        tabView_MatieresPrem = new QTableView(page_3);
        tabView_MatieresPrem->setObjectName(QStringLiteral("tabView_MatieresPrem"));
        tabView_MatieresPrem->setGeometry(QRect(10, 10, 281, 471));
        tabView_MatieresPrem->setStyleSheet(QStringLiteral(""));
        frame_5 = new QFrame(page_3);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(560, 30, 191, 91));
        frame_5->setStyleSheet(QStringLiteral("background-color:rgb(120,140,130);"));
        frame_5->setFrameShape(QFrame::Box);
        frame_5->setFrameShadow(QFrame::Plain);
        frame_5->setLineWidth(2);
        frame_5->setMidLineWidth(0);
        radioButton_ref = new QRadioButton(frame_5);
        radioButton_ref->setObjectName(QStringLiteral("radioButton_ref"));
        radioButton_ref->setGeometry(QRect(10, 50, 101, 21));
        QFont font4;
        font4.setPointSize(8);
        font4.setBold(true);
        radioButton_ref->setFont(font4);
        radioButton_ref->setStyleSheet(QLatin1String("\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"font-weight: bold;"));
        radioButton_nom = new QRadioButton(frame_5);
        radioButton_nom->setObjectName(QStringLiteral("radioButton_nom"));
        radioButton_nom->setGeometry(QRect(110, 50, 71, 21));
        radioButton_nom->setFont(font4);
        radioButton_nom->setStyleSheet(QLatin1String("\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"\n"
"font-weight: bold;"));
        label_73 = new QLabel(frame_5);
        label_73->setObjectName(QStringLiteral("label_73"));
        label_73->setGeometry(QRect(10, 10, 101, 21));
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(true);
        font5.setUnderline(true);
        label_73->setFont(font5);
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
        pushButton_statut = new QPushButton(page_3);
        pushButton_statut->setObjectName(QStringLiteral("pushButton_statut"));
        pushButton_statut->setGeometry(QRect(120, 530, 201, 61));
        pushButton_statut->setFont(font);
        pushButton_statut->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_statut->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"border-radius:10px 50px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pushButton_image = new QPushButton(page_3);
        pushButton_image->setObjectName(QStringLiteral("pushButton_image"));
        pushButton_image->setGeometry(QRect(510, 530, 251, 61));
        pushButton_image->setFont(font);
        pushButton_image->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_image->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"border-radius:10px 50px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pushButton_Qrcode = new QPushButton(page_3);
        pushButton_Qrcode->setObjectName(QStringLiteral("pushButton_Qrcode"));
        pushButton_Qrcode->setGeometry(QRect(330, 530, 171, 61));
        pushButton_Qrcode->setFont(font);
        pushButton_Qrcode->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"border-radius:10px 50px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pushButton_bkaf2 = new QPushButton(page_3);
        pushButton_bkaf2->setObjectName(QStringLiteral("pushButton_bkaf2"));
        pushButton_bkaf2->setGeometry(QRect(20, 490, 71, 101));
        pushButton_bkaf2->setFont(font);
        pushButton_bkaf2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_bkaf2->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"border-radius:10px 50px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        lineEdit_cout = new QLineEdit(page_3);
        lineEdit_cout->setObjectName(QStringLiteral("lineEdit_cout"));
        lineEdit_cout->setGeometry(QRect(630, 180, 91, 22));
        label_nom = new QLabel(page_3);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        label_nom->setGeometry(QRect(560, 180, 71, 20));
        QFont font6;
        font6.setPointSize(11);
        font6.setBold(true);
        label_nom->setFont(font6);
        label_nom->setFocusPolicy(Qt::ClickFocus);
        pushButton_reche_2 = new QPushButton(page_3);
        pushButton_reche_2->setObjectName(QStringLiteral("pushButton_reche_2"));
        pushButton_reche_2->setGeometry(QRect(730, 180, 81, 21));
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
        label_img = new QLabel(page_3);
        label_img->setObjectName(QStringLiteral("label_img"));
        label_img->setGeometry(QRect(300, 20, 251, 461));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        qrcode = new QLabel(page_4);
        qrcode->setObjectName(QStringLiteral("qrcode"));
        qrcode->setGeometry(QRect(190, 250, 271, 231));
        pushButton_bkaf2_2 = new QPushButton(page_4);
        pushButton_bkaf2_2->setObjectName(QStringLiteral("pushButton_bkaf2_2"));
        pushButton_bkaf2_2->setGeometry(QRect(570, 320, 71, 101));
        pushButton_bkaf2_2->setFont(font);
        pushButton_bkaf2_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_bkaf2_2->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"border-radius:10px 50px;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        stackedWidget->addWidget(page_4);

        retranslateUi(matieresprem);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(matieresprem);
    } // setupUi

    void retranslateUi(QDialog *matieresprem)
    {
        matieresprem->setWindowTitle(QApplication::translate("matieresprem", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("matieresprem", "Gestion des mati\303\250res premeieres", Q_NULLPTR));
        pushButton_ajou->setText(QApplication::translate("matieresprem", "Ajouter mati\303\250res premieres", Q_NULLPTR));
        pushButton_affi->setText(QApplication::translate("matieresprem", "Afficher mati\303\250res premieres", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("matieresprem", "Ajouter fournisseur", Q_NULLPTR));
        label->setText(QApplication::translate("matieresprem", "Id :", Q_NULLPTR));
        label_2->setText(QApplication::translate("matieresprem", "Nom :", Q_NULLPTR));
        label_3->setText(QApplication::translate("matieresprem", "Quantit\303\251 :", Q_NULLPTR));
        label_5->setText(QApplication::translate("matieresprem", "Email :", Q_NULLPTR));
        label_6->setText(QApplication::translate("matieresprem", "Disponibilit\303\251:", Q_NULLPTR));
        label_4->setText(QApplication::translate("matieresprem", "Livraison", Q_NULLPTR));
        comboBox_dispo->clear();
        comboBox_dispo->insertItems(0, QStringList()
         << QApplication::translate("matieresprem", "En Stock", Q_NULLPTR)
         << QApplication::translate("matieresprem", "Hors Stock", Q_NULLPTR)
        );
        label_backr->setText(QString());
        label_13->setText(QApplication::translate("matieresprem", "Type_mat", Q_NULLPTR));
        comboBox_type->clear();
        comboBox_type->insertItems(0, QStringList()
         << QApplication::translate("matieresprem", "premier choix", Q_NULLPTR)
         << QApplication::translate("matieresprem", "2 \303\250me choix", Q_NULLPTR)
         << QApplication::translate("matieresprem", "3 \303\250me choix", Q_NULLPTR)
        );
        pushButton_bkaf->setText(QApplication::translate("matieresprem", "Retourner", Q_NULLPTR));
        label_waiting->setText(QString());
        label_click->setText(QString());
        pushButton_aj2->setText(QApplication::translate("matieresprem", "Ajouter ", Q_NULLPTR));
        pushButton_affi2->setText(QApplication::translate("matieresprem", "Afficher", Q_NULLPTR));
        comboBox_type_2->clear();
        comboBox_type_2->insertItems(0, QStringList()
         << QApplication::translate("matieresprem", "premier choix", Q_NULLPTR)
         << QApplication::translate("matieresprem", "2 \303\250me choix", Q_NULLPTR)
         << QApplication::translate("matieresprem", "3 \303\250me choix", Q_NULLPTR)
        );
        label_15->setText(QApplication::translate("matieresprem", "Type_mat", Q_NULLPTR));
        pushButton_reche->setText(QApplication::translate("matieresprem", "Recherche", Q_NULLPTR));
        label_ref->setText(QApplication::translate("matieresprem", "R\303\251f", Q_NULLPTR));
        pushButton_mod->setText(QApplication::translate("matieresprem", "Modifier", Q_NULLPTR));
        label_12->setText(QApplication::translate("matieresprem", "Prix TTC :", Q_NULLPTR));
        label_7->setText(QApplication::translate("matieresprem", "R\303\251f:", Q_NULLPTR));
        label_9->setText(QApplication::translate("matieresprem", "NOM:", Q_NULLPTR));
        label_10->setText(QApplication::translate("matieresprem", "Quantit\303\251 :", Q_NULLPTR));
        label_11->setText(QApplication::translate("matieresprem", "Prix HT:", Q_NULLPTR));
        label_8->setText(QApplication::translate("matieresprem", "Disponiblit\303\251 :", Q_NULLPTR));
        RoomList_dispo->clear();
        RoomList_dispo->insertItems(0, QStringList()
         << QApplication::translate("matieresprem", "En Stock", Q_NULLPTR)
         << QApplication::translate("matieresprem", "Hors Stock", Q_NULLPTR)
        );
        RoomList_dispo->setCurrentText(QApplication::translate("matieresprem", "En Stock", Q_NULLPTR));
        pushButton_suppr->setText(QApplication::translate("matieresprem", "Supprimer", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("matieresprem", "premier choix", Q_NULLPTR)
         << QApplication::translate("matieresprem", "2 \303\250me choix", Q_NULLPTR)
         << QApplication::translate("matieresprem", "3 \303\250me choix", Q_NULLPTR)
        );
        label_14->setText(QApplication::translate("matieresprem", "Type_mat:", Q_NULLPTR));
        radioButton_ref->setText(QApplication::translate("matieresprem", "R\303\251ference", Q_NULLPTR));
        radioButton_nom->setText(QApplication::translate("matieresprem", "Nom", Q_NULLPTR));
        label_73->setText(QApplication::translate("matieresprem", "Trier selon :", Q_NULLPTR));
        label_excel->setText(QString());
        label_chart->setText(QString());
        label_notific->setText(QString());
        pushButton_statut->setText(QApplication::translate("matieresprem", "Statut", Q_NULLPTR));
        pushButton_image->setText(QApplication::translate("matieresprem", "Upload IMG", Q_NULLPTR));
        pushButton_Qrcode->setText(QApplication::translate("matieresprem", "QR-Code", Q_NULLPTR));
        pushButton_bkaf2->setText(QApplication::translate("matieresprem", "Back", Q_NULLPTR));
        label_nom->setText(QApplication::translate("matieresprem", "Prix (TTC)", Q_NULLPTR));
        pushButton_reche_2->setText(QApplication::translate("matieresprem", "Recherche", Q_NULLPTR));
        label_img->setText(QString());
        qrcode->setText(QString());
        pushButton_bkaf2_2->setText(QApplication::translate("matieresprem", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class matieresprem: public Ui_matieresprem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATIERESPREM_H
