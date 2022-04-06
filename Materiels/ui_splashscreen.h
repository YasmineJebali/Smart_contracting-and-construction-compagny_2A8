/********************************************************************************
** Form generated from reading UI file 'splashscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLASHSCREEN_H
#define UI_SPLASHSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_splashScreen
{
public:

    void setupUi(QDialog *splashScreen)
    {
        if (splashScreen->objectName().isEmpty())
            splashScreen->setObjectName(QStringLiteral("splashScreen"));
        splashScreen->resize(734, 300);

        retranslateUi(splashScreen);

        QMetaObject::connectSlotsByName(splashScreen);
    } // setupUi

    void retranslateUi(QDialog *splashScreen)
    {
        splashScreen->setWindowTitle(QApplication::translate("splashScreen", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class splashScreen: public Ui_splashScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASHSCREEN_H
