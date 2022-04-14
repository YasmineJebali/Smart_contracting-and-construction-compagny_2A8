#ifndef MODULES_H
#define MODULES_H
#include "materiels.h"
#include <QDialog>

namespace Ui {
class modules;
}

class modules : public QDialog
{
    Q_OBJECT

public:
    explicit modules(QWidget *parent = nullptr);
    ~modules();

private slots:
    void on_pushButton_9_clicked();

private:
    Ui::modules *ui;
    materiels *materiels;


};

#endif // MODULES_H
