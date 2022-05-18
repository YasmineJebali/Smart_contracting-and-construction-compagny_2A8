#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "fournisseur.h"
#include "materiels.h"
#include "statisticf.h"
#include <QAbstractSocket>
#include "chantier.h"
#include "employee.h"
#include "materiels.h"
#include "matieresprem.h"
#include <QVector>
#include <qtableview.h>
#include "qrcode.h"
#include "map.h"
#include "historique.h"
#include "partenaire.h"
#include "arduino2.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void update_label();
    void on_pushButton_start_clicked();
    void on_pushButton_close_clicked();

    void on_pbM_afF_clicked();

    void on_pbMF_aj_clicked();

    void on_pbMF_aff_clicked();

    void on_pbM_clicked();

    void on_affF_clicked();

    void on_pbF_Baff_clicked();

    void on_retMF_clicked();

    void on_backFcourr_clicked();

    void on_pbF_stat_clicked();

    void on_backFstat_clicked();

    void on_pbF_courr_clicked();

    void on_pbM_afCh_clicked();



    void on_pbChM_aj_clicked();

    void on_pbChM_aff_clicked();

    void on_pbChM_m_clicked();



    void on_pbMCh_ret_clicked();

    void on_pbM_afE_clicked();

    void on_pbM_afM_clicked();

    void on_pbM_afMp_clicked();

    void on_pbM_afPart_clicked();

    void on_pushButton_bkaf_11_clicked();

    void on_pushButton_bkaf_8_clicked();

    void on_pushButton_bkaf_10_clicked();

    void on_pushButton_bkaf_14_clicked();

    void on_pbCh_aff_clicked();

    void on_pushButton_affi2_6_clicked();

    void on_pushButton_affi2_4_clicked();

    void on_pushButton_affi2_5_clicked();

    void on_pushButton_affi2_7_clicked();

    void on_pushButton_bkaf_7_clicked();

    void on_pushButton_bkaf_12_clicked();

    void on_pushButton_bkaf_9_clicked();

    void on_pushButton_bkaf_13_clicked();

    void on_pbF_rech1_clicked();

    void on_ajF_clicked();

    void on_pbF_modifier_clicked();

    void on_pbF_supprimer_clicked();



    void on_pbF_Vguide_clicked();

    void on_pbF_rech2_clicked();

    void on_rbF_id_clicked();

    void on_rbF_nom_clicked();

    void on_pushButton_clicked();



    void on_pushButton_offre_clicked();

    void on_pushButton_aj2_7_clicked();

    void on_pbCh_aj_clicked();

    void on_pbCh_retAj_clicked();

    void on_pbCh_rech1_clicked();

    void on_pbCh_rech2_clicked();

    void on_radioButton_id_3_clicked();

    void on_radioButton_sal_3_clicked();

    void on_pbCh_modifier_clicked();

    void on_pbCh_supprimer_clicked();

    void on_pushButton_cour_6_clicked();

    void on_pushButton_cour_5_clicked();

    void on_generateButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_stat_3_clicked();

    void on_pushButton_ajou_5_clicked();

    void on_pushButton_affi_5_clicked();

    void on_pushButton_menu_5_clicked();

    void on_pushButton_ajou_3_clicked();

    void on_pushButton_affi_3_clicked();

    void on_pushButton_menu_3_clicked();

    void on_pushButton_ajou_4_clicked();

    void on_pushButton_affi_4_clicked();

    void on_pushButton_menu_4_clicked();

    void on_pushButton_ajou_6_clicked();

    void on_pushButton_affi_6_clicked();

    void on_pushButton_menu_6_clicked();

    void on_pushButton_aj2_6_clicked();

    void on_evaluer_clicked();

    void on_recherche_6_clicked();

    void on_rechercheNom_6_clicked();

    void on_pb_modifier_6_clicked();

    void on_radioButton_id_6_clicked();

    void on_radioButton_sal_6_clicked();

    void on_pushButton_cal_6_clicked();

    void on_pushButton_stat_6_clicked();

    void on_pushButton_cour_11_clicked();

    void on_backCal_clicked();

    void on_pb_ajouter_2_clicked();

    void on_le_modifier_2_clicked();

    void on_pb_supprimer_2_clicked();

    void on_pushButton_aj2_4_clicked();

    void on_recherche_4_clicked();

    void on_rechercheNom_4_clicked();

    void on_pb_modifier_4_clicked();

    void on_radioButton_id_4_clicked();

    void on_radioButton_sal_4_clicked();

    void on_pb_supprimer_4_clicked();

    void on_pushButton_cour_7_clicked();

    void on_pushButton_cour_8_clicked();

    void on_pushButton_stat_4_clicked();

    void on_pushButton_aj2_5_clicked();

    void on_recherche_5_clicked();

    void on_rechercheNom_5_clicked();

    void on_pb_modifier_5_clicked();

    void on_pb_supprimer_5_clicked();

    void on_radioButton_id_5_clicked();

    void on_radioButton_sal_5_clicked();

    void on_pushButton_cour_9_clicked();

    void on_pushButton_cal_5_clicked();

    void on_pushButton_cour_10_clicked();

    void on_generateButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_cour_14_clicked();

    void on_pushButton_cour_13_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_dark_6_clicked();

    void on_light_6_clicked();

    void on_pb_supprimer_6_clicked();

    void on_pbF_ct1_clicked();

    void on_pbF_ct2_clicked();

    void on_dark_3_clicked();

    void on_light_3_clicked();

    void on_dark_4_clicked();

    void on_light_4_clicked();

    void on_pbPartCt1_clicked();

    void on_pbPart_Ct2_clicked();

    void on_dark_5_clicked();

    void on_light_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::MainWindow *ui;
    materiels *tMateriels;
    QSystemTrayIcon *mSystemTrayIcon;
    materiels *materiel;
    fournisseur *Tfournisseurs;
    matieresprem *tMatieresPrem;

    fournisseur *f;
    MainWindow *m;
    class Partenaire *P;
    statisticF *statistic;
    Statistic *statistic1;
   employee *EMP;
    Chantier *ch;
     Chantier *tch;
     map *p;
     QString data; // variable contenant les données reçues
     QString data0;
     QByteArray cardid="47";
     arduino2 A; // objet temporaire
     QSerialPort *Serial;

      //QSound *son;

};
#endif // MAINWINDOW_H
