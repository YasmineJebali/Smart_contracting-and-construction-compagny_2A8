/********************************************************************************
** Form generated from reading UI file 'partenaire.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARTENAIRE_H
#define UI_PARTENAIRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Partenaire
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_6;
    QLineEdit *le_id;
    QLineEdit *le_nom;
    QLineEdit *le_prenom;
    QLineEdit *le_salaire;
    QLineEdit *le_adresse;
    QLineEdit *le_mail;
    QLabel *label_7;
    QLineEdit *le_FONCT;
    QLabel *label_22;
    QLineEdit *le_tel;
    QGroupBox *groupBox_2;
    QPushButton *pbajouter;
    QLabel *labelarduino;
    QWidget *tab_3;
    QTableView *tab_part;
    QWidget *tab_4;
    QPushButton *sup;
    QLabel *label_8;
    QLineEdit *le_id_sup;
    QWidget *tab_2;
    QLineEdit *lee_Id;
    QLineEdit *lee_Nom;
    QLineEdit *lee_Fonction;
    QLineEdit *lee_Adresse;
    QLineEdit *lee_Num;
    QLineEdit *lee_Prenom;
    QLineEdit *lee_Salaire;
    QLineEdit *lee_mail;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *pbupdate;
    QWidget *tab_5;
    QLabel *label_17;
    QPushButton *reche;
    QLineEdit *search_id;
    QTableView *tabView;
    QLineEdit *search_prenom;
    QWidget *tab_6;
    QRadioButton *TRIID;
    QRadioButton *TRINOM;
    QFrame *frame;
    QTableView *tab_part_2;
    QWidget *tab_8;
    QTextBrowser *historique;
    QWidget *tab_7;
    QLineEdit *em;
    QLabel *label_18;
    QPushButton *mail;
    QLineEdit *subject;
    QLineEdit *body;
    QLabel *label_58;
    QLabel *label_59;

    void setupUi(QDialog *Partenaire)
    {
        if (Partenaire->objectName().isEmpty())
            Partenaire->setObjectName(QStringLiteral("Partenaire"));
        Partenaire->resize(1026, 589);
        tabWidget = new QTabWidget(Partenaire);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1026, 589));
        tabWidget->setStyleSheet(QStringLiteral("background-color: rgb(148, 148, 148);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 60, 261, 391));
        groupBox->setStyleSheet(QStringLiteral("font: 15pt \"MS Shell Dlg 2\";"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 110, 61, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 150, 101, 21));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 190, 91, 21));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 240, 101, 21));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 70, 61, 21));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 280, 56, 21));
        le_id = new QLineEdit(groupBox);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(100, 70, 113, 22));
        le_nom = new QLineEdit(groupBox);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(110, 110, 113, 22));
        le_prenom = new QLineEdit(groupBox);
        le_prenom->setObjectName(QStringLiteral("le_prenom"));
        le_prenom->setGeometry(QRect(120, 150, 113, 22));
        le_salaire = new QLineEdit(groupBox);
        le_salaire->setObjectName(QStringLiteral("le_salaire"));
        le_salaire->setGeometry(QRect(120, 190, 113, 22));
        le_adresse = new QLineEdit(groupBox);
        le_adresse->setObjectName(QStringLiteral("le_adresse"));
        le_adresse->setGeometry(QRect(130, 240, 113, 22));
        le_mail = new QLineEdit(groupBox);
        le_mail->setObjectName(QStringLiteral("le_mail"));
        le_mail->setGeometry(QRect(100, 280, 113, 22));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 320, 101, 20));
        le_FONCT = new QLineEdit(groupBox);
        le_FONCT->setObjectName(QStringLiteral("le_FONCT"));
        le_FONCT->setGeometry(QRect(120, 320, 113, 22));
        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(30, 350, 56, 21));
        le_tel = new QLineEdit(groupBox);
        le_tel->setObjectName(QStringLiteral("le_tel"));
        le_tel->setGeometry(QRect(100, 350, 113, 22));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(310, 90, 171, 291));
        groupBox_2->setStyleSheet(QStringLiteral("font: 16pt \"MS Shell Dlg 2\";"));
        pbajouter = new QPushButton(groupBox_2);
        pbajouter->setObjectName(QStringLiteral("pbajouter"));
        pbajouter->setGeometry(QRect(10, 130, 141, 41));
        labelarduino = new QLabel(tab);
        labelarduino->setObjectName(QStringLiteral("labelarduino"));
        labelarduino->setGeometry(QRect(690, 150, 201, 51));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tab_part = new QTableView(tab_3);
        tab_part->setObjectName(QStringLiteral("tab_part"));
        tab_part->setGeometry(QRect(50, 30, 431, 411));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        sup = new QPushButton(tab_4);
        sup->setObjectName(QStringLiteral("sup"));
        sup->setGeometry(QRect(300, 120, 93, 28));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 50, 221, 16));
        le_id_sup = new QLineEdit(tab_4);
        le_id_sup->setObjectName(QStringLiteral("le_id_sup"));
        le_id_sup->setGeometry(QRect(410, 50, 113, 22));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        lee_Id = new QLineEdit(tab_2);
        lee_Id->setObjectName(QStringLiteral("lee_Id"));
        lee_Id->setGeometry(QRect(150, 60, 241, 31));
        lee_Nom = new QLineEdit(tab_2);
        lee_Nom->setObjectName(QStringLiteral("lee_Nom"));
        lee_Nom->setGeometry(QRect(150, 180, 241, 31));
        lee_Fonction = new QLineEdit(tab_2);
        lee_Fonction->setObjectName(QStringLiteral("lee_Fonction"));
        lee_Fonction->setGeometry(QRect(150, 300, 241, 31));
        lee_Adresse = new QLineEdit(tab_2);
        lee_Adresse->setObjectName(QStringLiteral("lee_Adresse"));
        lee_Adresse->setGeometry(QRect(150, 430, 241, 31));
        lee_Num = new QLineEdit(tab_2);
        lee_Num->setObjectName(QStringLiteral("lee_Num"));
        lee_Num->setGeometry(QRect(740, 60, 241, 31));
        lee_Prenom = new QLineEdit(tab_2);
        lee_Prenom->setObjectName(QStringLiteral("lee_Prenom"));
        lee_Prenom->setGeometry(QRect(740, 180, 241, 31));
        lee_Salaire = new QLineEdit(tab_2);
        lee_Salaire->setObjectName(QStringLiteral("lee_Salaire"));
        lee_Salaire->setGeometry(QRect(740, 300, 241, 31));
        lee_mail = new QLineEdit(tab_2);
        lee_mail->setObjectName(QStringLiteral("lee_mail"));
        lee_mail->setGeometry(QRect(740, 420, 241, 31));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 60, 111, 21));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 180, 111, 21));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 300, 111, 21));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 440, 111, 21));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(620, 60, 111, 21));
        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(620, 180, 111, 21));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(620, 310, 111, 21));
        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(620, 430, 111, 21));
        pbupdate = new QPushButton(tab_2);
        pbupdate->setObjectName(QStringLiteral("pbupdate"));
        pbupdate->setGeometry(QRect(490, 470, 171, 71));
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_17 = new QLabel(tab_5);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(180, 80, 321, 16));
        reche = new QPushButton(tab_5);
        reche->setObjectName(QStringLiteral("reche"));
        reche->setGeometry(QRect(470, 160, 93, 28));
        search_id = new QLineEdit(tab_5);
        search_id->setObjectName(QStringLiteral("search_id"));
        search_id->setGeometry(QRect(550, 80, 113, 22));
        tabView = new QTableView(tab_5);
        tabView->setObjectName(QStringLiteral("tabView"));
        tabView->setGeometry(QRect(105, 201, 961, 271));
        search_prenom = new QLineEdit(tab_5);
        search_prenom->setObjectName(QStringLiteral("search_prenom"));
        search_prenom->setGeometry(QRect(880, 80, 113, 22));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        TRIID = new QRadioButton(tab_6);
        TRIID->setObjectName(QStringLiteral("TRIID"));
        TRIID->setGeometry(QRect(130, 100, 151, 71));
        TRINOM = new QRadioButton(tab_6);
        TRINOM->setObjectName(QStringLiteral("TRINOM"));
        TRINOM->setGeometry(QRect(360, 100, 141, 81));
        frame = new QFrame(tab_6);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(100, 49, 541, 191));
        frame->setStyleSheet(QLatin1String("padding : 5px;\n"
"border-raduis:5px;\n"
"font-weight:bold;\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tab_part_2 = new QTableView(tab_6);
        tab_part_2->setObjectName(QStringLiteral("tab_part_2"));
        tab_part_2->setGeometry(QRect(670, 30, 551, 461));
        tabWidget->addTab(tab_6, QString());
        frame->raise();
        TRIID->raise();
        TRINOM->raise();
        tab_part_2->raise();
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        historique = new QTextBrowser(tab_8);
        historique->setObjectName(QStringLiteral("historique"));
        historique->setGeometry(QRect(45, 31, 1231, 411));
        tabWidget->addTab(tab_8, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        em = new QLineEdit(tab_7);
        em->setObjectName(QStringLiteral("em"));
        em->setGeometry(QRect(580, 100, 361, 31));
        label_18 = new QLabel(tab_7);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(460, 90, 111, 41));
        mail = new QPushButton(tab_7);
        mail->setObjectName(QStringLiteral("mail"));
        mail->setGeometry(QRect(560, 410, 141, 41));
        subject = new QLineEdit(tab_7);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(580, 190, 361, 31));
        body = new QLineEdit(tab_7);
        body->setObjectName(QStringLiteral("body"));
        body->setGeometry(QRect(580, 280, 361, 41));
        label_58 = new QLabel(tab_7);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setGeometry(QRect(460, 180, 111, 41));
        label_59 = new QLabel(tab_7);
        label_59->setObjectName(QStringLiteral("label_59"));
        label_59->setGeometry(QRect(460, 280, 111, 41));
        tabWidget->addTab(tab_7, QString());

        retranslateUi(Partenaire);

        tabWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(Partenaire);
    } // setupUi

    void retranslateUi(QDialog *Partenaire)
    {
        Partenaire->setWindowTitle(QApplication::translate("Partenaire", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Partenaire", "les informations", Q_NULLPTR));
        label_2->setText(QApplication::translate("Partenaire", "Nom :", Q_NULLPTR));
        label_3->setText(QApplication::translate("Partenaire", "Prenom :", Q_NULLPTR));
        label_4->setText(QApplication::translate("Partenaire", "salaire :", Q_NULLPTR));
        label_5->setText(QApplication::translate("Partenaire", "adresse :", Q_NULLPTR));
        label->setText(QApplication::translate("Partenaire", "Id :", Q_NULLPTR));
        label_6->setText(QApplication::translate("Partenaire", "Email adresse", Q_NULLPTR));
        le_id->setText(QString());
        le_nom->setText(QString());
        le_prenom->setText(QString());
        label_7->setText(QApplication::translate("Partenaire", "Fonction :", Q_NULLPTR));
        label_22->setText(QApplication::translate("Partenaire", "Tel :", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Partenaire", "CRUD", Q_NULLPTR));
        pbajouter->setText(QApplication::translate("Partenaire", "AJOUTER", Q_NULLPTR));
        labelarduino->setText(QApplication::translate("Partenaire", "z", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Partenaire", "Gestion des partenaires", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Partenaire", "Afficher Partenaires", Q_NULLPTR));
        sup->setText(QApplication::translate("Partenaire", "Supprimer", Q_NULLPTR));
        label_8->setText(QApplication::translate("Partenaire", "Entrer l'ID du partenaire \303\240 supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Partenaire", "Supprimer Partenaires", Q_NULLPTR));
        label_9->setText(QApplication::translate("Partenaire", "ID", Q_NULLPTR));
        label_10->setText(QApplication::translate("Partenaire", "Nom", Q_NULLPTR));
        label_11->setText(QApplication::translate("Partenaire", "Fonction", Q_NULLPTR));
        label_12->setText(QApplication::translate("Partenaire", "Adresse", Q_NULLPTR));
        label_13->setText(QApplication::translate("Partenaire", "Num", Q_NULLPTR));
        label_14->setText(QApplication::translate("Partenaire", "Prenom", Q_NULLPTR));
        label_15->setText(QApplication::translate("Partenaire", "Salaire", Q_NULLPTR));
        label_16->setText(QApplication::translate("Partenaire", "Mail", Q_NULLPTR));
        pbupdate->setText(QApplication::translate("Partenaire", "Update", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Partenaire", "Modifier Partenaires", Q_NULLPTR));
        label_17->setText(QApplication::translate("Partenaire", "Entrez l'ID du partenaire pour afficher ses coordonn\303\251es", Q_NULLPTR));
        reche->setText(QApplication::translate("Partenaire", "Rechercher", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Partenaire", "Recherche par ID", Q_NULLPTR));
        TRIID->setText(QApplication::translate("Partenaire", "Identifiant Partenaire", Q_NULLPTR));
        TRINOM->setText(QApplication::translate("Partenaire", "Nom Partenaire", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("Partenaire", "Tri", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("Partenaire", "Historique", Q_NULLPTR));
        em->setText(QString());
        label_18->setText(QApplication::translate("Partenaire", "e-mail", Q_NULLPTR));
        mail->setText(QApplication::translate("Partenaire", "Envoyer Mail", Q_NULLPTR));
        subject->setText(QString());
        body->setText(QString());
        label_58->setText(QApplication::translate("Partenaire", "Subject", Q_NULLPTR));
        label_59->setText(QApplication::translate("Partenaire", "Body", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("Partenaire", "Mailing", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Partenaire: public Ui_Partenaire {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTENAIRE_H
