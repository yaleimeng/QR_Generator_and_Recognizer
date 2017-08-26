#ifndef MANIFORM_H
#define MANIFORM_H

#include <QWidget>
#include <QFileDialog>
#include <QMessageBox>
#include "qrcodegenerate.h"
#include <QZXing.h>

namespace Ui {      class ManiForm;     }

class ManiForm : public QWidget
{
    Q_OBJECT

public:
    explicit ManiForm(QWidget *parent = 0);
    ~ManiForm();
    QString wjMing;
    QImage yuan;

private slots:

    void on_openPic_clicked();
    void on_makeQR_clicked();
    void on_saveQR_clicked();

private:
    Ui::ManiForm *ui;
};

#endif // MANIFORM_H
