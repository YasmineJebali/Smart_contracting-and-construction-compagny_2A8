#ifndef QRCODE_H
#define QRCODE_H

#include <QDialog>

namespace Ui {
class QRcode;
}

class QRcode : public QDialog
{
    Q_OBJECT

public:
    explicit QRcode(QWidget *parent = nullptr);
    ~QRcode();

private slots:
    void on_pushButton_clicked();

private:
    Ui::QRcode *ui;
};

#endif // QRCODE_H
