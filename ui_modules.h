/********************************************************************************
** Form generated from reading UI file 'modules.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULES_H
#define UI_MODULES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modules
{
public:
    QLabel *label_buble;
    QLabel *label_pers;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;

    void setupUi(QDialog *modules)
    {
        if (modules->objectName().isEmpty())
            modules->setObjectName(QStringLiteral("modules"));
        modules->resize(952, 594);
        modules->setStyleSheet(QStringLiteral(""));
        label_buble = new QLabel(modules);
        label_buble->setObjectName(QStringLiteral("label_buble"));
        label_buble->setGeometry(QRect(150, 80, 241, 141));
        label_pers = new QLabel(modules);
        label_pers->setObjectName(QStringLiteral("label_pers"));
        label_pers->setGeometry(QRect(0, 220, 211, 381));
        verticalLayoutWidget = new QWidget(modules);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(440, 0, 491, 621));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(verticalLayoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        pushButton_7->setFont(font);
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QLatin1String("border-radius: 10% 30% 50% 70%;\n"
"  background: #BC4A3C;\n"
"  padding: 20px;\n"
""));

        verticalLayout_2->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(verticalLayoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setFont(font);
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8->setStyleSheet(QLatin1String("border-radius: 10% 30% 50% 70%;\n"
"  background: #BC4A3C;\n"
"  padding: 20px;\n"
""));
        pushButton_8->setFlat(false);

        verticalLayout_2->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(verticalLayoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setFont(font);
        pushButton_9->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_9->setStyleSheet(QLatin1String("border-radius: 10% 30% 50% 70%;\n"
"  background: #BC4A3C;\n"
"  padding: 20px;\n"
""));

        verticalLayout_2->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(verticalLayoutWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setFont(font);
        pushButton_10->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_10->setStyleSheet(QLatin1String("border-radius: 10% 30% 50% 70%;\n"
"  background: #BC4A3C;\n"
"  padding: 20px;\n"
""));

        verticalLayout_2->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(verticalLayoutWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setFont(font);
        pushButton_11->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_11->setStyleSheet(QLatin1String("border-radius: 10% 30% 50% 70%;\n"
"  background: #BC4A3C;\n"
"  padding: 20px;\n"
""));

        verticalLayout_2->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(verticalLayoutWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setFont(font);
        pushButton_12->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_12->setStyleSheet(QLatin1String("border-radius: 10% 30% 50% 70%;\n"
" background: #BC4A3C;\n"
" padding: 20px;\n"
""));

        verticalLayout_2->addWidget(pushButton_12);


        retranslateUi(modules);

        QMetaObject::connectSlotsByName(modules);
    } // setupUi

    void retranslateUi(QDialog *modules)
    {
        modules->setWindowTitle(QApplication::translate("modules", "Dialog", Q_NULLPTR));
        label_buble->setText(QString());
        label_pers->setText(QString());
        pushButton_7->setText(QApplication::translate("modules", "Gestion Fournisseurs", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("modules", "Gestion chantiers", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("modules", "Gestion Mat\303\251riels", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("modules", "Gestion Employ\303\251es", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("modules", "Gestion Mati\303\250res premi\303\250res", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("modules", "Gestion Patenaires", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class modules: public Ui_modules {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULES_H
