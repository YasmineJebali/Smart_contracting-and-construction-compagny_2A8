#include "qrcode.h"
#include "ui_qrcode.h"
#include <climits>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include "qrcodegen.h"
#include <QWidget>

using std::int8_t;
using std::uint8_t;
using std::size_t;
using std::vector;
using qrcodegen::QrCode;
using qrcodegen::QrSegment;

QRcode::QRcode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QRcode)
{
    ui->setupUi(this);
}

QRcode::~QRcode()
{
    delete ui;
}

void QRcode::on_pushButton_clicked()
{
  //  QString text = ui->nom->text();
  //  const QRcode ::Ecc Errcorlv1;


}

