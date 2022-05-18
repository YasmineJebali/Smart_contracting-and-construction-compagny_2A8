#ifndef MODULES_H
#define MODULES_H
#include "materiels.h"
#include "matieresprem.h"
#include "chantier.h"
#include "partenaire.h"
#include "employee.h"
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
    void on_pushButton_11_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::modules *ui;
    materiels *materiels;
    matieresprem *matieresprem;
    Chantier *Chantier;
    Partenaire *Partenaire;
    employee *employee;
};

#endif // MODULES_H
