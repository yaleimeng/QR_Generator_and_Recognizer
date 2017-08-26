#include "qrcodegenerate.h"
#include "ui_qrcodegenerate.h"

QrcodeGenerate::QrcodeGenerate(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QrcodeGenerate)
{
    ui->setupUi(this);
    qr = NULL;
}

QrcodeGenerate::~QrcodeGenerate()
{
    if(qr != NULL)        QRcode_free(qr);
    delete ui;
}
bool QrcodeGenerate::saveImage(QString fileName, int size)
{
    if(size != 0 && !fileName.isEmpty())
    {
        QImage image(size, size, QImage::Format_Mono);
        QPainter painter(&image);           //在QImage里面绘图。
        QColor background(Qt::white);
        painter.setBrush(background);   //笔刷设置为白色。
        painter.setPen(Qt::NoPen);          //画笔为没有颜色。
        painter.drawRect(0, 0, size, size);
        if(qr != NULL)                draw(painter, size, size);          //绘制二维码
        return image.save(fileName);
    }
    else  
        return false;

}

void QrcodeGenerate::generateString(QString str)
{
    string = str;
    if(qr != NULL)       QRcode_free(qr);
    qr = QRcode_encodeString(string.toStdString().c_str(),
                             1,                                       //版本1最小，21×21个模块
                             QR_ECLEVEL_M,            //高纠错级别
                             QR_MODE_8,               //< 8-bit 数据模式
                             1);                                     //大小写敏感
    update();       //刷新界面，调用一下paintEvent()绘图函数。

}


void QrcodeGenerate::draw(QPainter &painter, int width, int height)
{
    QColor foreground(Qt::black);           //前景色
    painter.setBrush(foreground);
    const int qr_width = qr->width > 0 ? qr->width : 1;
    double scale_x = width / qr_width;     //缩放系数。当前尺寸除以二维码单位尺寸。比如500/20=25倍
    double scale_y = height / qr_width;
    for( int y = 0; y < qr_width; y ++)
    {
        for(int x = 0; x < qr_width; x++)
        {
            unsigned char b = qr->data[y * qr_width + x];
            if(b & 0x01)     //如果当前位置元素为黑色，执行画图。
            {
                QRectF r(x * scale_x, y * scale_y, scale_x, scale_y);
                painter.drawRect(r);
            }
            //如果当前位置是白色，什么也不做。
        }
    }
}

void QrcodeGenerate::paintEvent(QPaintEvent *)
{
    QPainter painter(this);                 QColor background(Qt::white);
    painter.setBrush(background);
    painter.setPen(Qt::NoPen);
    painter.drawRect(0, 0, width(), height());
    if(qr != NULL)         draw(painter, width(), height());  //调用draw()绘制二维码。
}

QSize QrcodeGenerate::sizeHint()  const
{
    QSize s;
    if(qr != NULL)
    {
        int qr_width = qr->width > 0 ? qr->width : 1;
        s = QSize(qr_width * 4, qr_width * 4);
    }
    else        s = QSize(100, 100);
    return s;
}

QSize QrcodeGenerate::minimumSizeHint()  const
{
    QSize s;
    if(qr != NULL)
    {
        int qr_width = qr->width > 0 ? qr->width : 1;
        s = QSize(qr_width, qr_width);
    }
    else      s = QSize(100, 100);
    return s;
}
