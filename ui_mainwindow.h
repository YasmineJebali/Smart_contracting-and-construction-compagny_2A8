/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_logo;
    QPushButton *pushButton_close;
    QPushButton *pushButton_start;
    QLabel *label_back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(597, 379);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_logo = new QLabel(centralwidget);
        label_logo->setObjectName(QStringLiteral("label_logo"));
        label_logo->setGeometry(QRect(70, 30, 451, 191));
        label_logo->setStyleSheet(QLatin1String(".QLabel {\n"
"  display: block;\n"
"  margin-left: auto;\n"
"  margin-right: auto;\n"
"  width: 75%;\n"
"width: 256px;\n"
" height: 256px;\n"
" border-image:url(\":/ressources/imgs/logo.png\");\n"
"}"));
        pushButton_close = new QPushButton(centralwidget);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(370, 210, 191, 131));
        pushButton_close->setStyleSheet(QLatin1String("  QPushButton{\n"
"  box-sizing: border-box;\n"
"  appearance: none;\n"
"  border: 2px solid red;\n"
"  border-radius: 0.6em;\n"
"  color: red;\n"
"  cursor: pointer;\n"
"  display: flex;\n"
"  align-self: center;\n"
"  font-size: 1rem;\n"
"  font-weight: 400;\n"
"  line-height: 1;\n"
"  margin: 20px;\n"
"  padding: 1.2em 2.8em;\n"
"  text-align: center;\n"
"  text-transform: uppercase;\n"
"  font-family: 'Montserrat', sans-serif;\n"
"  font-weight: 700;\n"
"  }\n"
"  QPushButton:hover ,  QPushButton:focus {\n"
"    color: #fff;\n"
"    outline: 0;\n"
" \n"
"}\n"
"  QPushButton:hover {\n"
"    box-shadow: 0 0 40px 40px red inset;\n"
"padding-right: 25px;\n"
"background-color: #FFFAFA;\n"
"color:black;\n"
"border-color:black\n"
"  }"));
        pushButton_start = new QPushButton(centralwidget);
        pushButton_start->setObjectName(QStringLiteral("pushButton_start"));
        pushButton_start->setGeometry(QRect(30, 210, 191, 131));
        pushButton_start->setStyleSheet(QLatin1String("  QPushButton{\n"
"  box-sizing: border-box;\n"
"  appearance: none;\n"
"  border: 2px solid red;\n"
"  border-radius: 0.6em;\n"
"  color: red;\n"
"  cursor: pointer;\n"
"  display: flex;\n"
"  align-self: center;\n"
"  font-size: 1rem;\n"
"  font-weight: 400;\n"
"  line-height: 1;\n"
"  margin: 20px;\n"
"  padding: 1.2em 2.8em;\n"
"  text-align: center;\n"
"  text-transform: uppercase;\n"
"  font-family: 'Montserrat', sans-serif;\n"
"  font-weight: 700;\n"
"  }\n"
"  QPushButton:hover ,  QPushButton:focus {\n"
"    color: #fff;\n"
"    outline: 0;\n"
" \n"
"}\n"
"  QPushButton:hover {\n"
"    box-shadow: 0 0 40px 40px red inset;\n"
"padding-right: 25px;\n"
"background-color: #FFFAFA;\n"
"color:black;\n"
"border-color:black\n"
"  }"));
        label_back = new QLabel(centralwidget);
        label_back->setObjectName(QStringLiteral("label_back"));
        label_back->setGeometry(QRect(10, 0, 651, 351));
        MainWindow->setCentralWidget(centralwidget);
        label_back->raise();
        label_logo->raise();
        pushButton_close->raise();
        pushButton_start->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 597, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_logo->setText(QString());
        pushButton_close->setText(QApplication::translate("MainWindow", "Cancel", Q_NULLPTR));
        pushButton_start->setText(QApplication::translate("MainWindow", "start", Q_NULLPTR));
        label_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
