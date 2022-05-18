#include "statisticf.h"
#include "ui_statisticf.h"
#include "qcustomplot.h"
#include <QSqlQueryModel>
#include <QSqlQuery>

statisticF::statisticF(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::statisticF)
{
    ui->setupUi(this);
    MakeStat();
}

statisticF::statisticF(QVector<double>* ticks,QVector<QString> *labels)
{
QSqlQuery qry;
int i=0;
qry.exec("SELECT DATE_LIV_F FROM FOURNISSEURS");
while (qry.next())
{
    QString ID_PRODUIT = qry.value(0).toString();
    i++;
    *ticks<<i;
    *labels <<ID_PRODUIT;
}
}

void statisticF::MakeStat()
{

QLinearGradient gradient(0, 0, 0, 400);
                  gradient.setColorAt(0, QColor(90, 90, 90));
                  gradient.setColorAt(0.38, QColor(105, 105, 105));
                  gradient.setColorAt(1, QColor(70, 70, 70));
                  ui->customPlot->setBackground(QBrush(gradient));

                  QCPBars *amande = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
                  amande->setAntialiased(false);
                  amande->setStackingGap(1);
                   //couleurs
                  amande->setName("Repartition produits selon les fournissurs ");
                  amande->setPen(QPen(QColor(0, 168, 140).lighter(130)));
                  amande->setBrush(QColor(0, 168, 140));

                   //axe des abscisses
                  QVector<double> ticks;
                  QVector<QString> labels;
                  statisticF(&ticks,&labels);
                  QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
                  textTicker->addTicks(ticks, labels);
                  ui->customPlot->xAxis->setTicker(textTicker);
                  ui->customPlot->xAxis->setTickLabelRotation(60);
                  ui->customPlot->xAxis->setSubTicks(false);
                  ui->customPlot->xAxis->setTickLength(0, 4);
                  ui->customPlot->xAxis->setRange(0, 8);
                  ui->customPlot->xAxis->setBasePen(QPen(Qt::white));
                  ui->customPlot->xAxis->setTickPen(QPen(Qt::white));
                  ui->customPlot->xAxis->grid()->setVisible(true);
                  ui->customPlot->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
                  ui->customPlot->xAxis->setTickLabelColor(Qt::white);
                  ui->customPlot->xAxis->setLabelColor(Qt::white);

                  // axe des ordonnées
                  ui->customPlot->yAxis->setRange(0,10);
                  ui->customPlot->yAxis->setPadding(5);
                  ui->customPlot->yAxis->setLabel("Statistiques");
                  ui->customPlot->yAxis->setBasePen(QPen(Qt::white));
                  ui->customPlot->yAxis->setTickPen(QPen(Qt::white));
                  ui->customPlot->yAxis->setSubTickPen(QPen(Qt::white));
                  ui->customPlot->yAxis->grid()->setSubGridVisible(true);
                  ui->customPlot->yAxis->setTickLabelColor(Qt::white);
                  ui->customPlot->yAxis->setLabelColor(Qt::white);
                  ui->customPlot->yAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::SolidLine));
                  ui->customPlot->yAxis->grid()->setSubGridPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));

                  // ajout des données  (statistiques de la quantité)//

                  QVector<double> PlaceData;
                  QSqlQuery q1("SELECT QT FROM MATERIELS");
                  while (q1.next()) {
                                int  nbr_fautee = q1.value(0).toInt();
                                PlaceData<< nbr_fautee;
                                  }
                  amande->setData(ticks, PlaceData);

                  ui->customPlot->legend->setVisible(true);
                  ui->customPlot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
                  ui->customPlot->legend->setBrush(QColor(255, 255, 255, 100));
                  ui->customPlot->legend->setBorderPen(Qt::NoPen);
                  QFont legendFont = font();
                  legendFont.setPointSize(5);
                  ui->customPlot->legend->setFont(legendFont);
                  ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);



}


statisticF::~statisticF()
{
delete ui;
}
