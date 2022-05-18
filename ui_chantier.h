/********************************************************************************
** Form generated from reading UI file 'chantier.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANTIER_H
#define UI_CHANTIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chantier
{
public:
    QTabWidget *Qrcode;
    QWidget *widget;
    QGroupBox *groupBox;
    QLabel *le_id_2;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *line_id;
    QLineEdit *line_emplace;
    QLineEdit *line_surface;
    QPushButton *pb_ajouter;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *topog;
    QLineEdit *line_cout;
    QLineEdit *line_type;
    QLineEdit *line_autorisa;
    QLabel *label_14;
    QLineEdit *line_plan;
    QWidget *tab_3;
    QTableView *tableView_chan;
    QLineEdit *surfR;
    QLabel *label_19;
    QPushButton *pushButton_rechS;
    QLabel *label_20;
    QLineEdit *lineEdit_coutR;
    QPushButton *pushButton_rech_2;
    QWidget *tab_2;
    QListWidget *listWidget;
    QGroupBox *groupBox_2;
    QLabel *le_id_3;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *id_2;
    QLineEdit *emplace_2;
    QLineEdit *surface_2;
    QPushButton *pb_modifier;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *plan_2;
    QLineEdit *topog_2;
    QLineEdit *cout_2;
    QLineEdit *type_2;
    QLineEdit *autorisa_2;
    QLabel *label_16;
    QWidget *tab;
    QLineEdit *ide;
    QLabel *label;
    QPushButton *pb_supprimer;
    QWidget *tab_4;
    QPushButton *PDF_pb;
    QWidget *tab_5;
    QPushButton *triePB;
    QLabel *label_15;
    QPushButton *triePB_2;
    QTableView *tab_trie;
    QWidget *tab_6;
    QPushButton *pushButton;
    QWidget *tab_7;
    QGroupBox *groupInput;
    QLabel *qrcode;
    QTableView *tableView_Qr;
    QPushButton *generateButton;

    void setupUi(QDialog *Chantier)
    {
        if (Chantier->objectName().isEmpty())
            Chantier->setObjectName(QStringLiteral("Chantier"));
        Chantier->resize(841, 514);
        Qrcode = new QTabWidget(Chantier);
        Qrcode->setObjectName(QStringLiteral("Qrcode"));
        Qrcode->setGeometry(QRect(0, 0, 841, 511));
        Qrcode->setStyleSheet(QLatin1String("\n"
"background-color: rgb(148, 148, 148);"));
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 641, 411));
        groupBox->setStyleSheet(QLatin1String("font: 10pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(218, 217, 217);"));
        le_id_2 = new QLabel(groupBox);
        le_id_2->setObjectName(QStringLiteral("le_id_2"));
        le_id_2->setGeometry(QRect(20, 30, 101, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 81, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 110, 111, 16));
        line_id = new QLineEdit(groupBox);
        line_id->setObjectName(QStringLiteral("line_id"));
        line_id->setGeometry(QRect(150, 30, 411, 22));
        line_emplace = new QLineEdit(groupBox);
        line_emplace->setObjectName(QStringLiteral("line_emplace"));
        line_emplace->setGeometry(QRect(150, 70, 411, 22));
        line_surface = new QLineEdit(groupBox);
        line_surface->setObjectName(QStringLiteral("line_surface"));
        line_surface->setGeometry(QRect(150, 110, 411, 22));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(410, 320, 141, 41));
        pb_ajouter->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #fff;\n"
"background:#b22626;\n"
"border-radius: 15px;\n"
"font-size:14px;\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"border:15px;\n"
"background:#6a1616;\n"
"}"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 180, 71, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 220, 56, 16));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 250, 56, 16));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 290, 91, 16));
        topog = new QLineEdit(groupBox);
        topog->setObjectName(QStringLiteral("topog"));
        topog->setGeometry(QRect(150, 180, 411, 22));
        line_cout = new QLineEdit(groupBox);
        line_cout->setObjectName(QStringLiteral("line_cout"));
        line_cout->setGeometry(QRect(150, 220, 411, 22));
        line_type = new QLineEdit(groupBox);
        line_type->setObjectName(QStringLiteral("line_type"));
        line_type->setGeometry(QRect(150, 250, 421, 22));
        line_autorisa = new QLineEdit(groupBox);
        line_autorisa->setObjectName(QStringLiteral("line_autorisa"));
        line_autorisa->setGeometry(QRect(150, 290, 421, 22));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 150, 71, 16));
        line_plan = new QLineEdit(groupBox);
        line_plan->setObjectName(QStringLiteral("line_plan"));
        line_plan->setGeometry(QRect(150, 150, 411, 22));
        Qrcode->addTab(widget, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tableView_chan = new QTableView(tab_3);
        tableView_chan->setObjectName(QStringLiteral("tableView_chan"));
        tableView_chan->setGeometry(QRect(55, 30, 611, 341));
        tableView_chan->setStyleSheet(QLatin1String(" QTableView {\n"
"     selection-background-color: qlineargradient(x1: 0, y1: 0, x2: 0.5, y2: 0.5,\n"
"                                 stop: 0 #FF92BB, stop: 1 white);\n"
" }\n"
" QTableView QTableCornerButton::section {\n"
"     background: red;\n"
"     border: 2px outset red;\n"
" }"));
        surfR = new QLineEdit(tab_3);
        surfR->setObjectName(QStringLiteral("surfR"));
        surfR->setGeometry(QRect(740, 70, 71, 21));
        label_19 = new QLabel(tab_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(670, 70, 51, 21));
        pushButton_rechS = new QPushButton(tab_3);
        pushButton_rechS->setObjectName(QStringLiteral("pushButton_rechS"));
        pushButton_rechS->setGeometry(QRect(700, 100, 121, 31));
        pushButton_rechS->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #fff;\n"
"background:#b22626;\n"
"border-radius: 15px;\n"
"font-size:14px;\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"border:15px;\n"
"background:#6a1616;\n"
"}"));
        label_20 = new QLabel(tab_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(670, 160, 51, 21));
        lineEdit_coutR = new QLineEdit(tab_3);
        lineEdit_coutR->setObjectName(QStringLiteral("lineEdit_coutR"));
        lineEdit_coutR->setGeometry(QRect(740, 160, 71, 21));
        pushButton_rech_2 = new QPushButton(tab_3);
        pushButton_rech_2->setObjectName(QStringLiteral("pushButton_rech_2"));
        pushButton_rech_2->setGeometry(QRect(700, 190, 121, 31));
        pushButton_rech_2->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #fff;\n"
"background:#b22626;\n"
"border-radius: 15px;\n"
"font-size:14px;\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"border:15px;\n"
"background:#6a1616;\n"
"}"));
        Qrcode->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        listWidget = new QListWidget(tab_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(400, 100, 256, 192));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 30, 761, 441));
        groupBox_2->setStyleSheet(QLatin1String("font: 10pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(218, 217, 217);"));
        le_id_3 = new QLabel(groupBox_2);
        le_id_3->setObjectName(QStringLiteral("le_id_3"));
        le_id_3->setGeometry(QRect(10, 40, 131, 20));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 80, 81, 16));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 120, 111, 16));
        id_2 = new QLineEdit(groupBox_2);
        id_2->setObjectName(QStringLiteral("id_2"));
        id_2->setGeometry(QRect(150, 30, 411, 22));
        emplace_2 = new QLineEdit(groupBox_2);
        emplace_2->setObjectName(QStringLiteral("emplace_2"));
        emplace_2->setGeometry(QRect(150, 70, 411, 22));
        surface_2 = new QLineEdit(groupBox_2);
        surface_2->setObjectName(QStringLiteral("surface_2"));
        surface_2->setGeometry(QRect(150, 110, 411, 22));
        pb_modifier = new QPushButton(groupBox_2);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(440, 370, 151, 31));
        pb_modifier->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #fff;\n"
"background:#b22626;\n"
"border-radius: 15px;\n"
"font-size:14px;\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"border:15px;\n"
"background:#6a1616;\n"
"}"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 160, 71, 16));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 210, 56, 16));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 250, 56, 16));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 290, 91, 16));
        plan_2 = new QLineEdit(groupBox_2);
        plan_2->setObjectName(QStringLiteral("plan_2"));
        plan_2->setGeometry(QRect(150, 150, 411, 22));
        topog_2 = new QLineEdit(groupBox_2);
        topog_2->setObjectName(QStringLiteral("topog_2"));
        topog_2->setGeometry(QRect(150, 200, 411, 22));
        cout_2 = new QLineEdit(groupBox_2);
        cout_2->setObjectName(QStringLiteral("cout_2"));
        cout_2->setGeometry(QRect(150, 250, 421, 22));
        type_2 = new QLineEdit(groupBox_2);
        type_2->setObjectName(QStringLiteral("type_2"));
        type_2->setGeometry(QRect(150, 290, 421, 22));
        autorisa_2 = new QLineEdit(groupBox_2);
        autorisa_2->setObjectName(QStringLiteral("autorisa_2"));
        autorisa_2->setGeometry(QRect(150, 330, 421, 22));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(20, 330, 91, 16));
        Qrcode->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        ide = new QLineEdit(tab);
        ide->setObjectName(QStringLiteral("ide"));
        ide->setGeometry(QRect(170, 60, 351, 41));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 66, 111, 20));
        label->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        pb_supprimer = new QPushButton(tab);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(530, 60, 121, 41));
        pb_supprimer->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #fff;\n"
"background:#b22626;\n"
"border-radius: 15px;\n"
"font-size:14px;\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"border:15px;\n"
"background:#6a1616;\n"
"}"));
        Qrcode->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        PDF_pb = new QPushButton(tab_4);
        PDF_pb->setObjectName(QStringLiteral("PDF_pb"));
        PDF_pb->setGeometry(QRect(290, 30, 231, 71));
        PDF_pb->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #fff;\n"
"background:#b22626;\n"
"border-radius: 15px;\n"
"font-size:40px;\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"border:15px;\n"
"background:#6a1616;\n"
"}"));
        Qrcode->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        triePB = new QPushButton(tab_5);
        triePB->setObjectName(QStringLiteral("triePB"));
        triePB->setGeometry(QRect(220, 120, 101, 31));
        triePB->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #fff;\n"
"background:#b22626;\n"
"border-radius: 15px;\n"
"font-size:14px;\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"border:15px;\n"
"background:#6a1616;\n"
"}"));
        label_15 = new QLabel(tab_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(290, 70, 101, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_15->setFont(font);
        triePB_2 = new QPushButton(tab_5);
        triePB_2->setObjectName(QStringLiteral("triePB_2"));
        triePB_2->setGeometry(QRect(350, 120, 111, 31));
        triePB_2->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #fff;\n"
"background:#b22626;\n"
"border-radius: 15px;\n"
"font-size:14px;\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"border:15px;\n"
"background:#6a1616;\n"
"}"));
        tab_trie = new QTableView(tab_5);
        tab_trie->setObjectName(QStringLiteral("tab_trie"));
        tab_trie->setGeometry(QRect(70, 180, 671, 261));
        Qrcode->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        pushButton = new QPushButton(tab_6);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 100, 261, 111));
        Qrcode->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        groupInput = new QGroupBox(tab_7);
        groupInput->setObjectName(QStringLiteral("groupInput"));
        groupInput->setGeometry(QRect(480, 10, 321, 301));
        groupInput->setMaximumSize(QSize(760, 360));
        qrcode = new QLabel(groupInput);
        qrcode->setObjectName(QStringLiteral("qrcode"));
        qrcode->setGeometry(QRect(50, 20, 241, 211));
        tableView_Qr = new QTableView(tab_7);
        tableView_Qr->setObjectName(QStringLiteral("tableView_Qr"));
        tableView_Qr->setGeometry(QRect(10, 10, 471, 461));
        tableView_Qr->setStyleSheet(QLatin1String(" QTableView {\n"
"     selection-background-color: qlineargradient(x1: 0, y1: 0, x2: 0.5, y2: 0.5,\n"
"                                 stop: 0 #FF92BB, stop: 1 white);\n"
" } \n"
"QTableView QTableCornerButton::section {\n"
"     background: red;\n"
"     border: 2px outset red;\n"
" }"));
        generateButton = new QPushButton(tab_7);
        generateButton->setObjectName(QStringLiteral("generateButton"));
        generateButton->setGeometry(QRect(550, 340, 201, 81));
        generateButton->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #fff;\n"
"background:#b22626;\n"
"border-radius: 15px;\n"
"font-size:40px;\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"border:15px;\n"
"background:#6a1616;\n"
"}"));
        Qrcode->addTab(tab_7, QString());

        retranslateUi(Chantier);

        Qrcode->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(Chantier);
    } // setupUi

    void retranslateUi(QDialog *Chantier)
    {
        Chantier->setWindowTitle(QApplication::translate("Chantier", "Dialog", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        Qrcode->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        groupBox->setTitle(QApplication::translate("Chantier", "Ajout", Q_NULLPTR));
        le_id_2->setText(QApplication::translate("Chantier", "Id", Q_NULLPTR));
        label_2->setText(QApplication::translate("Chantier", "emplace", Q_NULLPTR));
        label_3->setText(QApplication::translate("Chantier", "surface", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("Chantier", "Ajouter", Q_NULLPTR));
        label_4->setText(QApplication::translate("Chantier", "topog", Q_NULLPTR));
        label_5->setText(QApplication::translate("Chantier", "cout", Q_NULLPTR));
        label_6->setText(QApplication::translate("Chantier", "type", Q_NULLPTR));
        label_7->setText(QApplication::translate("Chantier", "autorisa", Q_NULLPTR));
        label_14->setText(QApplication::translate("Chantier", "plan", Q_NULLPTR));
        Qrcode->setTabText(Qrcode->indexOf(widget), QApplication::translate("Chantier", "Ajouter ch", Q_NULLPTR));
        label_19->setText(QApplication::translate("Chantier", "Surface :", Q_NULLPTR));
        pushButton_rechS->setText(QApplication::translate("Chantier", "recherche", Q_NULLPTR));
        label_20->setText(QApplication::translate("Chantier", "Cout :", Q_NULLPTR));
        pushButton_rech_2->setText(QApplication::translate("Chantier", "recherche", Q_NULLPTR));
        Qrcode->setTabText(Qrcode->indexOf(tab_3), QApplication::translate("Chantier", "Afficher ch", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Chantier", "Modifier", Q_NULLPTR));
        le_id_3->setText(QApplication::translate("Chantier", "Id", Q_NULLPTR));
        label_8->setText(QApplication::translate("Chantier", "emplace", Q_NULLPTR));
        label_9->setText(QApplication::translate("Chantier", "surface", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("Chantier", "modifier", Q_NULLPTR));
        label_10->setText(QApplication::translate("Chantier", "plan", Q_NULLPTR));
        label_11->setText(QApplication::translate("Chantier", "topog", Q_NULLPTR));
        label_12->setText(QApplication::translate("Chantier", "cout", Q_NULLPTR));
        label_13->setText(QApplication::translate("Chantier", "type", Q_NULLPTR));
        label_16->setText(QApplication::translate("Chantier", "autorisa", Q_NULLPTR));
        Qrcode->setTabText(Qrcode->indexOf(tab_2), QApplication::translate("Chantier", "Modifier ch", Q_NULLPTR));
        label->setText(QApplication::translate("Chantier", "Id", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("Chantier", "Supprimer", Q_NULLPTR));
        Qrcode->setTabText(Qrcode->indexOf(tab), QApplication::translate("Chantier", "Supprimer ch", Q_NULLPTR));
        PDF_pb->setText(QApplication::translate("Chantier", "Export PDF", Q_NULLPTR));
        Qrcode->setTabText(Qrcode->indexOf(tab_4), QApplication::translate("Chantier", "Export Pdf", Q_NULLPTR));
        triePB->setText(QApplication::translate("Chantier", "emplacement", Q_NULLPTR));
        label_15->setText(QApplication::translate("Chantier", "trier selon:", Q_NULLPTR));
        triePB_2->setText(QApplication::translate("Chantier", "surface", Q_NULLPTR));
        Qrcode->setTabText(Qrcode->indexOf(tab_5), QApplication::translate("Chantier", "Trier", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Chantier", "Voir Map", Q_NULLPTR));
        Qrcode->setTabText(Qrcode->indexOf(tab_6), QApplication::translate("Chantier", "Map", Q_NULLPTR));
        groupInput->setTitle(QApplication::translate("Chantier", "QrCode :", Q_NULLPTR));
        qrcode->setText(QString());
        generateButton->setText(QApplication::translate("Chantier", "Generate", Q_NULLPTR));
        Qrcode->setTabText(Qrcode->indexOf(tab_7), QApplication::translate("Chantier", "Qr code", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Chantier: public Ui_Chantier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANTIER_H
