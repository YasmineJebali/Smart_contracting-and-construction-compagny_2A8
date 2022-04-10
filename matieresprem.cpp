#include "matieresprem.h"
#include "ui_matieresprem.h"
#include <QString>
#include <QMessageBox>
#include <QtWidgets>
#include <QPainter>
#include <QtPrintSupport/QPrinter>
#include <QFileDialog>
#include <QSqlQueryModel>
#include <QTextDocument>
#include <QValidator>
#include <QComboBox>
#include <QSystemTrayIcon>

matieresprem::matieresprem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::matieresprem)
{
    ui->setupUi(this);
    ui->lineEdit_ref->setValidator(new  QIntValidator(0000, 9999, this));
     ui->lineEdit_nom->setValidator (new QRegExpValidator( QRegExp( "\\w\1733,12\175" ) ));


     ui->tabView_MatieresPrem->setModel(tMatieresPrem->afficher());
      ui->lineEdit_time->setText(QTime::currentTime().toString());
}

matieresprem::~matieresprem()
{
    delete ui;
}


matieresprem::matieresprem(int ref,QString nom,int Qt,QString Prttc,QString Prht ,QString type,QString dispo)
{
    this->ref=ref;
    this->nom=nom;
    this->Qt=Qt;
    this->prttc=Prttc;
    this->prht=Prht;
    this->type=type;
    this->dispo=dispo;


}



bool matieresprem::ajouter()
{

    QSqlQuery  query;
   QString res=QString::number(ref);
   query.prepare("INSERT INTO MP(REF_MP,NM_MP,QT_MP,PRIXMP_TTC,PRIXMP_HT,TYPE_MP,DISPO_MP)" "VALUES(:ref,:nom,:Qt,:Prttc,:Prht,:type,:dispo)") ;
     query.bindValue(":ref",res);
     query.bindValue(":nom",nom);
     query.bindValue(":Qt",Qt);
     query.bindValue(":Prttc",prttc);
     query.bindValue(":Prht",prht);
      query.bindValue(":type",type);
     query.bindValue(":dispo",dispo);

     return query.exec();

}

bool matieresprem::modifier(int ref)
{
    QSqlQuery  query;
     QString res= QString::number(ref);
     query.prepare("update MP set REF_MP = :ref, NM_MP = :nom, QT_MP = :Qt, PRIXMP_HT = :Prht, PRIXMP_TTC = :Prht,TYPE_MP= :type ,DISPO_MP = :dispo where REF_MP = :ref");
     query.bindValue(":ref",res);
     query.bindValue(":nom",nom);
     query.bindValue(":Qt",Qt);
     query.bindValue(":Prttc",prttc);
     query.bindValue(":Prht",prht);
     query.bindValue(":type",type);
     query.bindValue(":dipso",dispo);

     return query.exec();
}



QSqlQueryModel * matieresprem::afficher(){


    QSqlQueryModel * model= new QSqlQueryModel();
        model->setQuery("select * from MP");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("REF_MP"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NM_MP"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("QT_MP"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRIXMP_TTC"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("PRIXMP_HT"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("TYPE_MP"));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("DISPO_MP"));
        return model;

}

bool matieresprem::supprimer(int ref)
{
    QSqlQuery  query;
    QString res= QString::number(ref);
     query.prepare("Delete from MP where REF_MP = :ref");
     query.bindValue(":ref",res);
return query.exec();

}

void matieresprem::on_pushButton_ajou_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}



void matieresprem::on_pushButton_affi_clicked() //page afficher matieres premieres
{
     ui->stackedWidget->setCurrentIndex(2);


}

void matieresprem::on_pushButton_affi2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void matieresprem::on_pushButton_bkaf_clicked() //back  mel afficher
{
     ui->stackedWidget->setCurrentIndex(0);

}

void matieresprem::on_pushButton_bkaf2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void matieresprem::on_pushButton_aj2_clicked()
{
    int ref= ui->lineEdit_ref->text().toInt();
    QString nom= ui->lineEdit_nom->text();
    int Qt= ui->SpinBox_Qt->text().toInt();
    QString prttc= ui->DoubleS_Prttc->text();
    QString prht= ui->DoubleS_Prht->text();
    QString type= ui->comboBox_type->currentText();
    QString dispo= ui->comboBox_dispo->currentText();
    matieresprem m(ref,nom,Qt,prttc,prht,type,dispo);
    bool test=m.ajouter();
   if(test)

    {

       QMessageBox:: information(nullptr, QObject::tr("OK"),
               QObject::tr("ajout effectué\n"
                           "click Cancel to exit."), QMessageBox::Cancel);

     }
       else
      { QMessageBox::critical(nullptr,QObject::tr("Not OK"),
               QObject::tr("Ajout non effectuè.\n"
                            "clicK Cancel to exit."), QMessageBox::Cancel);
   }
}











void matieresprem::on_pushButton_mod_clicked()
{
    int ref= ui->lineEdit_rf->text().toInt();
    QString nom= ui->lineEdit_nm->text();
    int Qt= ui->spinBox_Qt->text().toInt();
    QString prttc= ui->DoubleS_prttc->text();
    QString prht= ui->DoubleS_prht->text();
    QString type= ui->comboBox_type->currentText();
    QString dispo= ui->RoomList_dispo->currentText();
    matieresprem m(ref,nom,Qt,prttc,prht,type,dispo);
    bool test=m.modifier(ref);
    if(test)
  {



        ui->tabView_MatieresPrem->setModel(tMatieresPrem->afficher());//refresh

        QMessageBox:: information(nullptr, QObject::tr("OK"),
                QObject::tr("Modification effectué\n"
                            "click Cancel to exit."), QMessageBox::Cancel);
ui->lineEdit_rf->clear();
ui->lineEdit_nom->clear();
ui->spinBox_Qt->clear();
ui->DoubleS_prttc->clear();
ui->DoubleS_prht->clear();
ui->comboBox_dispo->clear();
ui->RoomList_dispo->clear();

}
else

       { QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                QObject::tr("Modification non effectuè.\n"
                             "clicK Cancel to exit."), QMessageBox::Cancel);
    }


}


void matieresprem::on_pushButton_suppr_clicked()
{
    int ref=ui->lineEdit_rf->text().toUInt();
    bool test=tMatieresPrem->supprimer(ref);

    if(test)
    {

        ui->tabView_MatieresPrem->setModel(tMatieresPrem->afficher());
        QMessageBox:: information(nullptr, QObject::tr("OK"),
                QObject::tr("Suppression effectué\n"
                            "click Cancel to exit."), QMessageBox::Cancel);

        ui->lineEdit_rf->clear();
        ui->lineEdit_nom->clear();
        ui->spinBox_Qt->clear();
        ui->DoubleS_prttc->clear();
        ui->DoubleS_prht->clear();
        ui->comboBox_dispo->clear();
        ui->RoomList_dispo->clear();
       // hide();
    }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                QObject::tr("Suppression non effectuè.\n"
                             "clicK Cancel to exit."), QMessageBox::Cancel);
    }
}


QSqlQueryModel *matieresprem::trierR()
{
              QSqlQuery * q = new  QSqlQuery ();
                     QSqlQueryModel * model = new  QSqlQueryModel ();
                     q->prepare("SELECT * FROM MP order by REF_MP DESC");
                     q->exec();
                     model->setQuery(*q);
                     return model;

}

QSqlQueryModel *matieresprem::trierN()
{

              QSqlQuery * q = new  QSqlQuery ();
                     QSqlQueryModel * model = new  QSqlQueryModel ();
                     q->prepare("SELECT * FROM MP order by NM_MP DESC");
                     q->exec();
                     model->setQuery(*q);
                     return model;

}


QSqlQueryModel *matieresprem::rechercherR(int ref)
{
    QSqlQueryModel * model1=new QSqlQueryModel();
    QString res=QString::number(ref);


    model1->setQuery("select * from MP where REF_MP LIKE '"+res+"%'");
    model1->setHeaderData(0, Qt::Horizontal, QObject::tr("REF_MP"));
    model1->setHeaderData(1, Qt::Horizontal, QObject::tr("NM_MP"));
    model1->setHeaderData(2, Qt::Horizontal, QObject::tr("QT_MP"));
    model1->setHeaderData(3, Qt::Horizontal, QObject::tr("PRIXMP_TTC"));
    model1->setHeaderData(4, Qt::Horizontal, QObject::tr("PRIXMP_HT"));
     model1->setHeaderData(5, Qt::Horizontal, QObject::tr("TYPE_MP"));
    model1->setHeaderData(6, Qt::Horizontal, QObject::tr("DISPO_MP"));



       return model1;


}

QSqlQueryModel *matieresprem::rechercherC(QString cout)
{
    QSqlQueryModel * model1=new QSqlQueryModel();



    model1->setQuery("select * from MP where PRIXMP_TTC LIKE '"+cout+"%'");
    model1->setHeaderData(0, Qt::Horizontal, QObject::tr("REF_MP"));
    model1->setHeaderData(1, Qt::Horizontal, QObject::tr("NM_MP"));
    model1->setHeaderData(2, Qt::Horizontal, QObject::tr("QT_MP"));
    model1->setHeaderData(3, Qt::Horizontal, QObject::tr("PRIXMP_TTC"));
    model1->setHeaderData(4, Qt::Horizontal, QObject::tr("PRIXMP_HT"));
     model1->setHeaderData(5, Qt::Horizontal, QObject::tr("TYPE_MP"));
    model1->setHeaderData(6, Qt::Horizontal, QObject::tr("DISPO_MP"));


       return model1;


}


QSqlQueryModel* matieresprem::statistiques()
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("SELECT DISPO_MP, COUNT(REF_MP) FROM MP GROUP BY DISPO_MP");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("DISPO_MP"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("COUNT"));
    return model;
}



void matieresprem::on_radioButton_ref_clicked()
{

   ui->tabView_MatieresPrem->setModel(tMatieresPrem->trierR());
}


void matieresprem::on_radioButton_nom_clicked()
{
    ui->tabView_MatieresPrem->setModel(tMatieresPrem->trierN());
}


void matieresprem::on_pushButton_reche_clicked()
{
    int ref = ui->lineEdit_ref_2->text().toUInt();



            ui->tabView_MatieresPrem->setModel(tMatieresPrem->rechercherR(ref));


}


void matieresprem::on_pushButton_reche_2_clicked()
{
    QString cout= ui->lineEdit_cout->text();
     ui->tabView_MatieresPrem->setModel(tMatieresPrem->rechercherC(cout));
}





void matieresprem::on_pushButton_statut_clicked()
{
    ui->tabView_MatieresPrem->setModel(tMatieresPrem->statistiques());

}


void matieresprem::on_pushButton_Qrcode_clicked()
{
    qrcode = new class  QRcode(this);
    qrcode->setWindowTitle("QRcode");
    qrcode->show();
this->hide();
}


void matieresprem::on_pushButton_image_clicked()
{

    QFileDialog dialog(this);
    QDir dir;
        dialog.setNameFilter(tr("Images (*.png *.bmp *.jpg)"));
        dialog.setViewMode(QFileDialog::Detail);
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "C:/Users/mrdje/Downloads/MatieresPrem/images");
        QImage *img = new QImage(dir.absoluteFilePath(fileName));
        int w1 = ui->label_img->width();
         int h1 = ui->label_img->height();
          QPixmap map = QPixmap::fromImage(img->scaled(w1,h1,Qt::KeepAspectRatio,Qt::FastTransformation));
           ui->label_img->setPixmap(map);
           ui->label_img->show();

}




