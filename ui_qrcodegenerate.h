/********************************************************************************
** Form generated from reading UI file 'qrcodegenerate.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QRCODEGENERATE_H
#define UI_QRCODEGENERATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QrcodeGenerate
{
public:

    void setupUi(QWidget *QrcodeGenerate)
    {
        if (QrcodeGenerate->objectName().isEmpty())
            QrcodeGenerate->setObjectName(QStringLiteral("QrcodeGenerate"));
        QrcodeGenerate->resize(477, 436);

        retranslateUi(QrcodeGenerate);

        QMetaObject::connectSlotsByName(QrcodeGenerate);
    } // setupUi

    void retranslateUi(QWidget *QrcodeGenerate)
    {
        QrcodeGenerate->setWindowTitle(QApplication::translate("QrcodeGenerate", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QrcodeGenerate: public Ui_QrcodeGenerate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRCODEGENERATE_H
