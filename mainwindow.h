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

    void on_envoyer_clicked();

    void on_pushButton_clicked();

    void on_recherche_clicked();



    void on_tabrechercher_cellActivated(int row, int column);

    void on_customPlot_aboutToCompose();

    void on_evaluer_clicked();

    void on_rechercheNom_clicked();

    void on_statistique_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_dark_clicked();

    void on_light_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_rating_2_activated(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_RATING_clicked();




    void on_pb_ajouter_2_clicked();

    void on_le_modifier_2_clicked();

    void on_pb_supprimer_2_clicked();

private:
    Ui::MainWindow *ui;
    employee *EMP;
};

#endif // MAINWINDOW_H
