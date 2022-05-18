/********************************************************************************
** Form generated from reading UI file 'statisticf.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICF_H
#define UI_STATISTICF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_statisticF
{
public:
    QCustomPlot *customPlot;

    void setupUi(QDialog *statisticF)
    {
        if (statisticF->objectName().isEmpty())
            statisticF->setObjectName(QStringLiteral("statisticF"));
        statisticF->resize(842, 458);
        customPlot = new QCustomPlot(statisticF);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(10, 10, 831, 441));

        retranslateUi(statisticF);

        QMetaObject::connectSlotsByName(statisticF);
    } // setupUi

    void retranslateUi(QDialog *statisticF)
    {
        statisticF->setWindowTitle(QApplication::translate("statisticF", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class statisticF: public Ui_statisticF {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICF_H
