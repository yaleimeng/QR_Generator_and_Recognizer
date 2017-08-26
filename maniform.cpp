#include "maniform.h"
#include "ui_maniform.h"

ManiForm::ManiForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManiForm)
{
    ui->setupUi(this);
}

ManiForm::~ManiForm()
{
    delete ui;
}

void ManiForm::on_openPic_clicked()
{
    wjMing= QFileDialog::getOpenFileName(this,"打开图像","D:/","图像文件(*.png *.jpg *.jpeg *.bmp)");
       yuan.load(wjMing);
      QImage img= yuan.scaled(QSize(ui->showPic->width(),ui->showPic->height()),Qt::KeepAspectRatio,Qt::SmoothTransformation);
       ui->showPic->setPixmap(QPixmap::fromImage(img));            //在Label上显示原图。

   //    // 准备识别二维码内容。
       QZXing zxing;               QString  aaa;
       aaa =   zxing.decodeImage(yuan);
       ui->showText->setText(aaa);
}

void ManiForm::on_makeQR_clicked()
{
    ui->showQR->generateString(ui->textForQR->text());
}

void ManiForm::on_saveQR_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                                                       tr("Open Image"), "D:/", tr("Image Files (*.png *.jpg *.bmp)"));
       if( !fileName.isEmpty() )
           ui->showQR->saveImage(fileName,ui->showQR->size().width());
}
