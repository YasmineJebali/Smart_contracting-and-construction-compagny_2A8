#ifndef GESTIONMATERIELS_H
#define GESTIONMATERIELS_H

#include <QDialog>

namespace Ui {
class gestionMateriels;
}

class gestionMateriels : public QDialog
{
    Q_OBJECT

public:
    explicit gestionMateriels(QWidget *parent = nullptr);
    ~gestionMateriels();

private:
    Ui::gestionMateriels *ui;
};

#endif // GESTIONMATERIELS_H
