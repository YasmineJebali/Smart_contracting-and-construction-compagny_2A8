#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>



#include <QMainWindow>
#include "employer.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //void on_pushButton_clicked();

    void on_pb_ajouter_clicked();

    //void on_le_id_cursorPositionChanged(int arg1, int arg2);

    //void on_pb_supprimer_clicked();

    void on_tab_employee_activated(const QModelIndex &index);

    void on_tab_employee_clicked(const QModelIndex &index);

    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();

private:
    Ui::MainWindow *ui;
    employee *EMP;
};

#endif // MAINWINDOW_H
