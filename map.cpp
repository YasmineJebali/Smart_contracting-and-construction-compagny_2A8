#include "map.h"
#include "ui_map.h"

map::map(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::map)
{
    ui->setupUi(this);

    ui->quickWidget->setSource(QUrl(QStringLiteral("qrc:/map.qml")));
    ui->quickWidget->show();

    auto obj = ui->quickWidget->rootObject();
    connect(this, SIGNAL(setCenter(QVariant, QVariant)), obj, SLOT(setCenter(QVariant, QVariant)));
    connect(this, SIGNAL(addMarker(QVariant, QVariant)), obj, SLOT(addMarker(QVariant, QVariant)));

    emit setCenter(36.899630989848546, 10.189303026988023);
    emit addMarker(36.899630989848546, 10.189303026988023);
}

map::~map()
{
    delete ui;
}
