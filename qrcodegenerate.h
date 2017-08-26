#ifndef QRCODEGENERATE_H
#define QRCODEGENERATE_H

#include <QWidget>
#include "qrencode.h"
#include <QPainter>

namespace Ui {      class QrcodeGenerate;       }

class QrcodeGenerate : public QWidget
{
    Q_OBJECT

public:
    explicit QrcodeGenerate(QWidget *parent = 0);
    ~QrcodeGenerate();
    void generateString(QString str);
    bool saveImage(QString fileName, int size=600);
private:
    Ui::QrcodeGenerate *ui;
    void draw(QPainter &painter, int width, int height);
    QString string;
    QRcode *qr;

protected:
    void paintEvent(QPaintEvent *);
    QSize sizeHint() const;
    QSize minimumSizeHint() const;
};

#endif // QRCODEGENERATE_H
