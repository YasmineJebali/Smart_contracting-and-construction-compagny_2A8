/********************************************************************************
** Form generated from reading UI file 'employee.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEE_H
#define UI_EMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_employee
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *Page1;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QLabel *le_id_2;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *le_id;
    QLineEdit *le_nom;
    QLineEdit *le_prenom;
    QPushButton *pb_ajouter;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *adresse;
    QLineEdit *email;
    QLineEdit *salaire;
    QLineEdit *fonction;
    QPushButton *pushButton_affi2;
    QWidget *Page2;
    QFrame *frame_6;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_4;
    QLineEdit *le_id_4;
    QLabel *label_28;
    QLineEdit *le_nom_2;
    QLabel *label_29;
    QLineEdit *le_prenom_2;
    QLabel *label_30;
    QLineEdit *adresse_2;
    QLabel *label_34;
    QLineEdit *email_2;
    QLabel *label_35;
    QLineEdit *salaire_2;
    QLabel *label_36;
    QLineEdit *fonction_2;
    QLabel *le_id_6;
    QSplitter *splitter;
    QPushButton *pb_modifier;
    QPushButton *pb_supprimer;
    QFrame *frame_5;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QPushButton *rechercheNom;
    QLineEdit *rechercheinput;
    QPushButton *recherche;
    QLabel *label_19;
    QLineEdit *rechercheinput2;
    QLabel *label_17;
    QLabel *label_73;
    QFrame *frame;
    QPushButton *dark;
    QPushButton *light;
    QLabel *label;
    QPushButton *pushButton_stat;
    QLabel *label_chart;
    QLabel *label_courrier;
    QPushButton *pushButton_cour;
    QPushButton *pushButton_bkaf;
    QLabel *label_b1;
    QPushButton *pushButton_cal;
    QLabel *label_calendrier;
    QFrame *frame_7;
    QRadioButton *radioButton_id;
    QRadioButton *radioButton_sal;
    QLabel *label_74;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_20;
    QTableView *tab_employee;
    QSlider *Slider;
    QLabel *label_24;
    QLabel *rating;
    QLabel *label_23;
    QTableView *rated;
    QPushButton *evaluer;
    QLabel *label_21;
    QLabel *label_18;
    QLabel *label_22;
    QLineEdit *identifiant;
    QWidget *Page5;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *backM;
    QPushButton *pushButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_5;
    QLineEdit *sujet;
    QLineEdit *adresse_3;
    QLabel *label_15;
    QLabel *label_14;
    QLabel *label_16;
    QTextEdit *text;
    QWidget *supPage7;
    QTabWidget *tabWidget_3;
    QWidget *tab_9;
    QLabel *label_41;
    QLineEdit *le_id_5;
    QLabel *label_42;
    QDateEdit *le_date_deb;
    QLabel *label_43;
    QDateEdit *le_date_fin;
    QLabel *label_25;
    QLabel *label_33;
    QLabel *label_26;
    QLineEdit *la_periode;
    QLabel *label_27;
    QPushButton *backCal;
    QSplitter *splitter_2;
    QPushButton *pb_ajouter_2;
    QPushButton *le_modifier_2;
    QWidget *tab_10;
    QTableView *tab_etudiant_2;
    QLabel *label_48;
    QLabel *label_31;
    QWidget *tab_11;
    QLineEdit *le_id_sup_3;
    QPushButton *pb_supprimer_2;
    QLabel *label_49;
    QLabel *label_32;

    void setupUi(QDialog *employee)
    {
        if (employee->objectName().isEmpty())
            employee->setObjectName(QStringLiteral("employee"));
        employee->resize(1026, 589);
        verticalLayout = new QVBoxLayout(employee);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(employee);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        Page1 = new QWidget();
        Page1->setObjectName(QStringLiteral("Page1"));
        gridLayout = new QGridLayout(Page1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(Page1);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QLatin1String("font: 10pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(218, 217, 217);"));
        le_id_2 = new QLabel(groupBox);
        le_id_2->setObjectName(QStringLiteral("le_id_2"));
        le_id_2->setGeometry(QRect(10, 30, 63, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 35, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 110, 53, 16));
        le_id = new QLineEdit(groupBox);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(140, 30, 150, 21));
        le_nom = new QLineEdit(groupBox);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(140, 70, 150, 21));
        le_prenom = new QLineEdit(groupBox);
        le_prenom->setObjectName(QStringLiteral("le_prenom"));
        le_prenom->setGeometry(QRect(139, 110, 150, 21));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(400, 330, 131, 41));
        pb_ajouter->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :yellow;\n"
"}"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 150, 56, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 200, 41, 16));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 250, 51, 16));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 290, 58, 16));
        adresse = new QLineEdit(groupBox);
        adresse->setObjectName(QStringLiteral("adresse"));
        adresse->setGeometry(QRect(138, 150, 150, 21));
        email = new QLineEdit(groupBox);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(137, 200, 150, 21));
        salaire = new QLineEdit(groupBox);
        salaire->setObjectName(QStringLiteral("salaire"));
        salaire->setGeometry(QRect(137, 250, 150, 21));
        fonction = new QLineEdit(groupBox);
        fonction->setObjectName(QStringLiteral("fonction"));
        fonction->setGeometry(QRect(136, 290, 150, 21));
        pushButton_affi2 = new QPushButton(groupBox);
        pushButton_affi2->setObjectName(QStringLiteral("pushButton_affi2"));
        pushButton_affi2->setGeometry(QRect(560, 330, 141, 41));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(false);
        pushButton_affi2->setFont(font);
        pushButton_affi2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_affi2->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :yellow;\n"
"}"));

        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        stackedWidget->addWidget(Page1);
        Page2 = new QWidget();
        Page2->setObjectName(QStringLiteral("Page2"));
        frame_6 = new QFrame(Page2);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(530, 180, 251, 251));
        frame_6->setStyleSheet(QStringLiteral("background-color:rgb(178,184,185);"));
        frame_6->setFrameShape(QFrame::Box);
        frame_6->setFrameShadow(QFrame::Plain);
        frame_6->setLineWidth(2);
        frame_6->setMidLineWidth(0);
        layoutWidget_2 = new QWidget(frame_6);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 10, 231, 240));
        gridLayout_4 = new QGridLayout(layoutWidget_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        le_id_4 = new QLineEdit(layoutWidget_2);
        le_id_4->setObjectName(QStringLiteral("le_id_4"));

        gridLayout_4->addWidget(le_id_4, 0, 1, 1, 1);

        label_28 = new QLabel(layoutWidget_2);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_4->addWidget(label_28, 1, 0, 1, 1);

        le_nom_2 = new QLineEdit(layoutWidget_2);
        le_nom_2->setObjectName(QStringLiteral("le_nom_2"));

        gridLayout_4->addWidget(le_nom_2, 1, 1, 1, 1);

        label_29 = new QLabel(layoutWidget_2);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayout_4->addWidget(label_29, 2, 0, 1, 1);

        le_prenom_2 = new QLineEdit(layoutWidget_2);
        le_prenom_2->setObjectName(QStringLiteral("le_prenom_2"));

        gridLayout_4->addWidget(le_prenom_2, 2, 1, 1, 1);

        label_30 = new QLabel(layoutWidget_2);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_4->addWidget(label_30, 3, 0, 1, 1);

        adresse_2 = new QLineEdit(layoutWidget_2);
        adresse_2->setObjectName(QStringLiteral("adresse_2"));

        gridLayout_4->addWidget(adresse_2, 3, 1, 1, 1);

        label_34 = new QLabel(layoutWidget_2);
        label_34->setObjectName(QStringLiteral("label_34"));

        gridLayout_4->addWidget(label_34, 4, 0, 1, 1);

        email_2 = new QLineEdit(layoutWidget_2);
        email_2->setObjectName(QStringLiteral("email_2"));

        gridLayout_4->addWidget(email_2, 4, 1, 1, 1);

        label_35 = new QLabel(layoutWidget_2);
        label_35->setObjectName(QStringLiteral("label_35"));

        gridLayout_4->addWidget(label_35, 5, 0, 1, 1);

        salaire_2 = new QLineEdit(layoutWidget_2);
        salaire_2->setObjectName(QStringLiteral("salaire_2"));

        gridLayout_4->addWidget(salaire_2, 5, 1, 1, 1);

        label_36 = new QLabel(layoutWidget_2);
        label_36->setObjectName(QStringLiteral("label_36"));

        gridLayout_4->addWidget(label_36, 6, 0, 1, 1);

        fonction_2 = new QLineEdit(layoutWidget_2);
        fonction_2->setObjectName(QStringLiteral("fonction_2"));

        gridLayout_4->addWidget(fonction_2, 6, 1, 1, 1);

        le_id_6 = new QLabel(layoutWidget_2);
        le_id_6->setObjectName(QStringLiteral("le_id_6"));

        gridLayout_4->addWidget(le_id_6, 0, 0, 1, 1);

        splitter = new QSplitter(frame_6);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(20, 210, 201, 28));
        splitter->setOrientation(Qt::Horizontal);
        pb_modifier = new QPushButton(splitter);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        splitter->addWidget(pb_modifier);
        pb_supprimer = new QPushButton(splitter);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        splitter->addWidget(pb_supprimer);
        frame_5 = new QFrame(Page2);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(530, 10, 291, 161));
        frame_5->setStyleSheet(QStringLiteral("background-color:rgb(178,184,185);"));
        frame_5->setFrameShape(QFrame::Box);
        frame_5->setFrameShadow(QFrame::Plain);
        frame_5->setLineWidth(2);
        frame_5->setMidLineWidth(0);
        layoutWidget = new QWidget(frame_5);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 50, 333, 81));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        rechercheNom = new QPushButton(layoutWidget);
        rechercheNom->setObjectName(QStringLiteral("rechercheNom"));
        rechercheNom->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));

        gridLayout_3->addWidget(rechercheNom, 1, 2, 1, 2);

        rechercheinput = new QLineEdit(layoutWidget);
        rechercheinput->setObjectName(QStringLiteral("rechercheinput"));

        gridLayout_3->addWidget(rechercheinput, 0, 1, 1, 1);

        recherche = new QPushButton(layoutWidget);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));

        gridLayout_3->addWidget(recherche, 1, 0, 1, 2);

        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_3->addWidget(label_19, 0, 2, 1, 1);

        rechercheinput2 = new QLineEdit(layoutWidget);
        rechercheinput2->setObjectName(QStringLiteral("rechercheinput2"));

        gridLayout_3->addWidget(rechercheinput2, 0, 3, 1, 1);

        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setStyleSheet(QLatin1String("font: 18pt \"MS Shell Dlg 2\";\n"
"font: 12pt \"MS Shell Dlg 2\";"));

        gridLayout_3->addWidget(label_17, 0, 0, 1, 1);

        label_73 = new QLabel(frame_5);
        label_73->setObjectName(QStringLiteral("label_73"));
        label_73->setGeometry(QRect(80, 20, 101, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(true);
        label_73->setFont(font1);
        frame = new QFrame(Page2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(830, 10, 161, 171));
        frame->setStyleSheet(QLatin1String("QFrame{\n"
" border: 2px solid black;\n"
"background-color:rgb(178,184,185);\n"
"/*border-color: red cyan black gold;*/\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        dark = new QPushButton(frame);
        dark->setObjectName(QStringLiteral("dark"));
        dark->setGeometry(QRect(10, 50, 131, 31));
        dark->setStyleSheet(QLatin1String("QPushButton {\n"
"padding:5px;\n"
"border-radius:5px;\n"
"background-color:rgb(0,0,0);\n"
"font-weight:bold;\n"
"color:white\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"}"));
        light = new QPushButton(frame);
        light->setObjectName(QStringLiteral("light"));
        light->setGeometry(QRect(10, 110, 131, 26));
        light->setStyleSheet(QLatin1String("QPushButton {\n"
"padding:5px;\n"
"border-radius:5px;\n"
"background-color:#d4ede3;\n"
"font-weight:bold;\n"
"color:rgb(0,0,0);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color:white;\n"
"}"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 141, 31));
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("border-color:transparent;"));
        pushButton_stat = new QPushButton(Page2);
        pushButton_stat->setObjectName(QStringLiteral("pushButton_stat"));
        pushButton_stat->setGeometry(QRect(850, 330, 151, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(false);
        pushButton_stat->setFont(font2);
        pushButton_stat->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_stat->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        label_chart = new QLabel(Page2);
        label_chart->setObjectName(QStringLiteral("label_chart"));
        label_chart->setGeometry(QRect(850, 330, 51, 51));
        label_chart->setStyleSheet(QLatin1String("/*border-image:url(\":/ressources/imgs/6.png\");*/\n"
"border-radius:20px;"));
        label_courrier = new QLabel(Page2);
        label_courrier->setObjectName(QStringLiteral("label_courrier"));
        label_courrier->setGeometry(QRect(180, 360, 41, 51));
        label_courrier->setStyleSheet(QLatin1String("/*border-image:url(\":/ressources/imgs/6.png\");*/\n"
"border-radius:20px;"));
        pushButton_cour = new QPushButton(Page2);
        pushButton_cour->setObjectName(QStringLiteral("pushButton_cour"));
        pushButton_cour->setGeometry(QRect(180, 360, 191, 51));
        pushButton_cour->setFont(font2);
        pushButton_cour->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_cour->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pushButton_bkaf = new QPushButton(Page2);
        pushButton_bkaf->setObjectName(QStringLiteral("pushButton_bkaf"));
        pushButton_bkaf->setGeometry(QRect(400, 360, 121, 51));
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
        label_b1 = new QLabel(Page2);
        label_b1->setObjectName(QStringLiteral("label_b1"));
        label_b1->setGeometry(QRect(400, 360, 41, 51));
        pushButton_cal = new QPushButton(Page2);
        pushButton_cal->setObjectName(QStringLiteral("pushButton_cal"));
        pushButton_cal->setGeometry(QRect(850, 390, 151, 51));
        pushButton_cal->setFont(font2);
        pushButton_cal->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_cal->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        label_calendrier = new QLabel(Page2);
        label_calendrier->setObjectName(QStringLiteral("label_calendrier"));
        label_calendrier->setGeometry(QRect(850, 390, 51, 51));
        label_calendrier->setStyleSheet(QLatin1String("/*border-image:url(\":/ressources/imgs/6.png\");*/\n"
"border-radius:20px;"));
        frame_7 = new QFrame(Page2);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(790, 210, 211, 91));
        frame_7->setStyleSheet(QStringLiteral("background-color:rgb(178,184,185);"));
        frame_7->setFrameShape(QFrame::Box);
        frame_7->setFrameShadow(QFrame::Plain);
        frame_7->setLineWidth(2);
        frame_7->setMidLineWidth(0);
        radioButton_id = new QRadioButton(frame_7);
        radioButton_id->setObjectName(QStringLiteral("radioButton_id"));
        radioButton_id->setGeometry(QRect(10, 40, 111, 31));
        radioButton_id->setFont(font2);
        radioButton_id->setStyleSheet(QLatin1String("\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"font-weight: bold;"));
        radioButton_sal = new QRadioButton(frame_7);
        radioButton_sal->setObjectName(QStringLiteral("radioButton_sal"));
        radioButton_sal->setGeometry(QRect(120, 40, 81, 31));
        radioButton_sal->setFont(font2);
        radioButton_sal->setStyleSheet(QLatin1String("\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"\n"
"font-weight: bold;"));
        label_74 = new QLabel(frame_7);
        label_74->setObjectName(QStringLiteral("label_74"));
        label_74->setGeometry(QRect(10, 10, 101, 21));
        label_74->setFont(font1);
        layoutWidget1 = new QWidget(Page2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 10, 511, 331));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget1);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_2->addWidget(label_20, 2, 2, 1, 1);

        tab_employee = new QTableView(layoutWidget1);
        tab_employee->setObjectName(QStringLiteral("tab_employee"));
        tab_employee->setStyleSheet(QLatin1String("background-color: rgb(218, 217, 217);\n"
""));

        gridLayout_2->addWidget(tab_employee, 0, 0, 4, 1);

        Slider = new QSlider(layoutWidget1);
        Slider->setObjectName(QStringLiteral("Slider"));
        Slider->setMinimum(1);
        Slider->setMaximum(5);
        Slider->setValue(2);
        Slider->setSliderPosition(2);
        Slider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(Slider, 1, 2, 1, 5);

        label_24 = new QLabel(layoutWidget1);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_2->addWidget(label_24, 2, 6, 1, 1);

        rating = new QLabel(layoutWidget1);
        rating->setObjectName(QStringLiteral("rating"));

        gridLayout_2->addWidget(rating, 1, 1, 1, 1);

        label_23 = new QLabel(layoutWidget1);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_2->addWidget(label_23, 2, 5, 1, 1);

        rated = new QTableView(layoutWidget1);
        rated->setObjectName(QStringLiteral("rated"));

        gridLayout_2->addWidget(rated, 3, 1, 1, 7);

        evaluer = new QPushButton(layoutWidget1);
        evaluer->setObjectName(QStringLiteral("evaluer"));

        gridLayout_2->addWidget(evaluer, 1, 7, 2, 1);

        label_21 = new QLabel(layoutWidget1);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_2->addWidget(label_21, 2, 3, 1, 1);

        label_18 = new QLabel(layoutWidget1);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_2->addWidget(label_18, 0, 1, 1, 1);

        label_22 = new QLabel(layoutWidget1);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_2->addWidget(label_22, 2, 4, 1, 1);

        identifiant = new QLineEdit(layoutWidget1);
        identifiant->setObjectName(QStringLiteral("identifiant"));

        gridLayout_2->addWidget(identifiant, 0, 2, 1, 6);

        stackedWidget->addWidget(Page2);
        Page5 = new QWidget();
        Page5->setObjectName(QStringLiteral("Page5"));
        horizontalLayoutWidget = new QWidget(Page5);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(40, 370, 221, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        backM = new QPushButton(horizontalLayoutWidget);
        backM->setObjectName(QStringLiteral("backM"));
        backM->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));

        horizontalLayout->addWidget(backM);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));

        horizontalLayout->addWidget(pushButton);

        gridLayoutWidget = new QWidget(Page5);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 0, 641, 361));
        gridLayout_5 = new QGridLayout(gridLayoutWidget);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        sujet = new QLineEdit(gridLayoutWidget);
        sujet->setObjectName(QStringLiteral("sujet"));
        sujet->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(sujet, 1, 1, 1, 1);

        adresse_3 = new QLineEdit(gridLayoutWidget);
        adresse_3->setObjectName(QStringLiteral("adresse_3"));
        adresse_3->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(adresse_3, 0, 1, 1, 1);

        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        QFont font3;
        font3.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setItalic(false);
        label_15->setFont(font3);
        label_15->setStyleSheet(QLatin1String("font: 18pt \"MS Shell Dlg 2\";\n"
"font: 12pt \"MS Shell Dlg 2\";"));

        gridLayout_5->addWidget(label_15, 1, 0, 1, 1);

        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font3);
        label_14->setStyleSheet(QLatin1String("font: 18pt \"MS Shell Dlg 2\";\n"
"font: 12pt \"MS Shell Dlg 2\";"));

        gridLayout_5->addWidget(label_14, 0, 0, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font3);
        label_16->setStyleSheet(QLatin1String("font: 18pt \"MS Shell Dlg 2\";\n"
"font: 12pt \"MS Shell Dlg 2\";"));

        gridLayout_5->addWidget(label_16, 2, 0, 1, 1);

        text = new QTextEdit(gridLayoutWidget);
        text->setObjectName(QStringLiteral("text"));
        text->setStyleSheet(QStringLiteral(""));

        gridLayout_5->addWidget(text, 2, 1, 1, 1);

        stackedWidget->addWidget(Page5);
        supPage7 = new QWidget();
        supPage7->setObjectName(QStringLiteral("supPage7"));
        tabWidget_3 = new QTabWidget(supPage7);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(10, 0, 1001, 491));
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        label_41 = new QLabel(tab_9);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(230, 220, 211, 20));
        label_41->setStyleSheet(QStringLiteral("font: 75 10pt \"MS Shell Dlg 2\";"));
        le_id_5 = new QLineEdit(tab_9);
        le_id_5->setObjectName(QStringLiteral("le_id_5"));
        le_id_5->setGeometry(QRect(470, 220, 113, 22));
        label_42 = new QLabel(tab_9);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(230, 110, 81, 16));
        label_42->setStyleSheet(QStringLiteral("font: 75 10pt \"MS Shell Dlg 2\";"));
        le_date_deb = new QDateEdit(tab_9);
        le_date_deb->setObjectName(QStringLiteral("le_date_deb"));
        le_date_deb->setGeometry(QRect(340, 100, 161, 31));
        le_date_deb->setDateTime(QDateTime(QDate(2021, 11, 3), QTime(0, 0, 0)));
        label_43 = new QLabel(tab_9);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(550, 110, 81, 20));
        label_43->setStyleSheet(QStringLiteral("font: 75 10pt \"MS Shell Dlg 2\";"));
        le_date_fin = new QDateEdit(tab_9);
        le_date_fin->setObjectName(QStringLiteral("le_date_fin"));
        le_date_fin->setGeometry(QRect(650, 100, 161, 31));
        le_date_fin->setDateTime(QDateTime(QDate(2021, 11, 2), QTime(0, 0, 0)));
        label_25 = new QLabel(tab_9);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(320, 0, 811, 31));
        label_25->setStyleSheet(QLatin1String("font: 75 10pt \"Segoe Print\";\n"
"background-color: rgb(255, 211, 49);"));
        label_33 = new QLabel(tab_9);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(-70, -60, 341, 431));
        label_33->setPixmap(QPixmap(QString::fromUtf8("../../okey25.png")));
        label_26 = new QLabel(tab_9);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(230, 360, 101, 21));
        label_26->setStyleSheet(QStringLiteral("font: 75 10pt \"MS Shell Dlg 2\";"));
        la_periode = new QLineEdit(tab_9);
        la_periode->setObjectName(QStringLiteral("la_periode"));
        la_periode->setGeometry(QRect(470, 360, 113, 22));
        label_27 = new QLabel(tab_9);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(-120, -40, 261, 411));
        label_27->setPixmap(QPixmap(QString::fromUtf8("../../../okey2.png")));
        backCal = new QPushButton(tab_9);
        backCal->setObjectName(QStringLiteral("backCal"));
        backCal->setGeometry(QRect(680, 410, 93, 28));
        backCal->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        splitter_2 = new QSplitter(tab_9);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(630, 360, 191, 28));
        splitter_2->setOrientation(Qt::Horizontal);
        pb_ajouter_2 = new QPushButton(splitter_2);
        pb_ajouter_2->setObjectName(QStringLiteral("pb_ajouter_2"));
        pb_ajouter_2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        splitter_2->addWidget(pb_ajouter_2);
        le_modifier_2 = new QPushButton(splitter_2);
        le_modifier_2->setObjectName(QStringLiteral("le_modifier_2"));
        le_modifier_2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        splitter_2->addWidget(le_modifier_2);
        tabWidget_3->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        tab_etudiant_2 = new QTableView(tab_10);
        tab_etudiant_2->setObjectName(QStringLiteral("tab_etudiant_2"));
        tab_etudiant_2->setGeometry(QRect(85, 110, 721, 251));
        label_48 = new QLabel(tab_10);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(-120, 0, 271, 401));
        label_48->setPixmap(QPixmap(QString::fromUtf8("../../../okey25.png")));
        label_31 = new QLabel(tab_10);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(320, 0, 811, 31));
        label_31->setStyleSheet(QLatin1String("font: 75 10pt \"Segoe Print\";\n"
"background-color: rgb(255, 211, 49);"));
        tabWidget_3->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        le_id_sup_3 = new QLineEdit(tab_11);
        le_id_sup_3->setObjectName(QStringLiteral("le_id_sup_3"));
        le_id_sup_3->setGeometry(QRect(112, 90, 231, 51));
        pb_supprimer_2 = new QPushButton(tab_11);
        pb_supprimer_2->setObjectName(QStringLiteral("pb_supprimer_2"));
        pb_supprimer_2->setGeometry(QRect(370, 90, 221, 41));
        pb_supprimer_2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 20px;\n"
"background-color:rgb(188, 74, 60);\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        label_49 = new QLabel(tab_11);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(-120, 0, 271, 401));
        label_49->setPixmap(QPixmap(QString::fromUtf8("../../../okey25.png")));
        label_32 = new QLabel(tab_11);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(430, 10, 811, 31));
        label_32->setStyleSheet(QLatin1String("font: 75 10pt \"Segoe Print\";\n"
"background-color: rgb(255, 211, 49);"));
        tabWidget_3->addTab(tab_11, QString());
        stackedWidget->addWidget(supPage7);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(employee);

        stackedWidget->setCurrentIndex(3);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(employee);
    } // setupUi

    void retranslateUi(QDialog *employee)
    {
        employee->setWindowTitle(QApplication::translate("employee", "Dialog", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        stackedWidget->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        groupBox->setTitle(QApplication::translate("employee", "Ajout", Q_NULLPTR));
        le_id_2->setText(QApplication::translate("employee", "Identifiant :", Q_NULLPTR));
        label_2->setText(QApplication::translate("employee", "Nom :", Q_NULLPTR));
        label_3->setText(QApplication::translate("employee", "Prenom :", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("employee", "Ajouter", Q_NULLPTR));
        label_4->setText(QApplication::translate("employee", "Adresse :", Q_NULLPTR));
        label_5->setText(QApplication::translate("employee", "Email :", Q_NULLPTR));
        label_6->setText(QApplication::translate("employee", "Salaire :", Q_NULLPTR));
        label_7->setText(QApplication::translate("employee", "Fonction :", Q_NULLPTR));
        pushButton_affi2->setText(QApplication::translate("employee", "Afficher", Q_NULLPTR));
        label_28->setText(QApplication::translate("employee", "Nom", Q_NULLPTR));
        label_29->setText(QApplication::translate("employee", "Prenom", Q_NULLPTR));
        label_30->setText(QApplication::translate("employee", "Adresse", Q_NULLPTR));
        label_34->setText(QApplication::translate("employee", "Email", Q_NULLPTR));
        label_35->setText(QApplication::translate("employee", "Salaire", Q_NULLPTR));
        label_36->setText(QApplication::translate("employee", "Fonction", Q_NULLPTR));
        le_id_6->setText(QApplication::translate("employee", "Identifiant", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("employee", "Modifier", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("employee", "Supprimer", Q_NULLPTR));
        rechercheNom->setText(QApplication::translate("employee", "rehchercher", Q_NULLPTR));
        rechercheinput->setText(QString());
        recherche->setText(QApplication::translate("employee", "rechercher", Q_NULLPTR));
        label_19->setText(QApplication::translate("employee", "nom", Q_NULLPTR));
        label_17->setText(QApplication::translate("employee", " Identifiant ", Q_NULLPTR));
        label_73->setText(QApplication::translate("employee", "Recherche :", Q_NULLPTR));
        dark->setText(QApplication::translate("employee", "dark", Q_NULLPTR));
        light->setText(QApplication::translate("employee", "light", Q_NULLPTR));
        label->setText(QApplication::translate("employee", "couleur du th\303\250me :", Q_NULLPTR));
        pushButton_stat->setText(QApplication::translate("employee", "           Statistiques", Q_NULLPTR));
        label_chart->setText(QString());
        label_courrier->setText(QString());
        pushButton_cour->setText(QApplication::translate("employee", "       Envoi de courrier", Q_NULLPTR));
        pushButton_bkaf->setText(QApplication::translate("employee", "Retourner", Q_NULLPTR));
        label_b1->setText(QString());
        pushButton_cal->setText(QApplication::translate("employee", "           Calendrier", Q_NULLPTR));
        label_calendrier->setText(QString());
        radioButton_id->setText(QApplication::translate("employee", "Identifiant", Q_NULLPTR));
        radioButton_sal->setText(QApplication::translate("employee", "Salaire", Q_NULLPTR));
        label_74->setText(QApplication::translate("employee", "Trier selon :", Q_NULLPTR));
        label_20->setText(QApplication::translate("employee", "1", Q_NULLPTR));
        label_24->setText(QApplication::translate("employee", "5", Q_NULLPTR));
        rating->setText(QApplication::translate("employee", "rating", Q_NULLPTR));
        label_23->setText(QApplication::translate("employee", "4", Q_NULLPTR));
        evaluer->setText(QApplication::translate("employee", "evaluer", Q_NULLPTR));
        label_21->setText(QApplication::translate("employee", "2", Q_NULLPTR));
        label_18->setText(QApplication::translate("employee", "Identifiant", Q_NULLPTR));
        label_22->setText(QApplication::translate("employee", "3", Q_NULLPTR));
        backM->setText(QApplication::translate("employee", "Retourner", Q_NULLPTR));
        pushButton->setText(QApplication::translate("employee", "Envoyer", Q_NULLPTR));
        label_15->setText(QApplication::translate("employee", "Objet :", Q_NULLPTR));
        label_14->setText(QApplication::translate("employee", "Destinataire :", Q_NULLPTR));
        label_16->setText(QApplication::translate("employee", "corps :", Q_NULLPTR));
        label_41->setText(QApplication::translate("employee", "Numero de reservation", Q_NULLPTR));
        label_42->setText(QApplication::translate("employee", "date debut", Q_NULLPTR));
        label_43->setText(QApplication::translate("employee", "date fin", Q_NULLPTR));
        label_25->setText(QApplication::translate("employee", "Calendrier", Q_NULLPTR));
        label_33->setText(QString());
        label_26->setText(QApplication::translate("employee", "la periode", Q_NULLPTR));
        label_27->setText(QString());
        backCal->setText(QApplication::translate("employee", "Retourner", Q_NULLPTR));
        pb_ajouter_2->setText(QApplication::translate("employee", "Reserver", Q_NULLPTR));
        le_modifier_2->setText(QApplication::translate("employee", "Modifier", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_9), QApplication::translate("employee", "Reserver", Q_NULLPTR));
        label_48->setText(QString());
        label_31->setText(QApplication::translate("employee", "Calendrier", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_10), QApplication::translate("employee", "Afficher", Q_NULLPTR));
        pb_supprimer_2->setText(QApplication::translate("employee", "Supprimer", Q_NULLPTR));
        label_49->setText(QString());
        label_32->setText(QApplication::translate("employee", "Calendrier", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_11), QApplication::translate("employee", "Supprimer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class employee: public Ui_employee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEE_H
