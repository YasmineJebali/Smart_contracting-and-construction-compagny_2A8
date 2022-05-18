#ifndef STATISTICF_H
#define STATISTICF_H

#include <QDialog>

namespace Ui {
class statisticF;
}

class statisticF : public QDialog
{
    Q_OBJECT

public:
    explicit statisticF(QWidget *parent = nullptr);
    ~statisticF();
    statisticF(QVector<double>* ticks,QVector<QString> *labels);
   void MakeStat();

private:
    Ui::statisticF *ui;
};

#endif // STATISTICF_H




