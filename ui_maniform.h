/********************************************************************************
** Form generated from reading UI file 'maniform.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANIFORM_H
#define UI_MANIFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <qrcodegenerate.h>

QT_BEGIN_NAMESPACE

class Ui_ManiForm
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *saveQR;
    QLineEdit *textForQR;
    QPushButton *makeQR;
    QrcodeGenerate *showQR;
    QWidget *tab_2;
    QLabel *showPic;
    QPushButton *openPic;
    QLabel *showText;
    QLabel *goodQR;

    void setupUi(QWidget *ManiForm)
    {
        if (ManiForm->objectName().isEmpty())
            ManiForm->setObjectName(QStringLiteral("ManiForm"));
        ManiForm->resize(1089, 596);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(18);
        ManiForm->setFont(font);
        tabWidget = new QTabWidget(ManiForm);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 1071, 571));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(14);
        tabWidget->setFont(font1);
        tabWidget->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 150, 200, 65), stop:0 rgba(255, 255, 255, 255));"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        saveQR = new QPushButton(tab);
        saveQR->setObjectName(QStringLiteral("saveQR"));
        saveQR->setGeometry(QRect(380, 130, 91, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(12);
        saveQR->setFont(font2);
        textForQR = new QLineEdit(tab);
        textForQR->setObjectName(QStringLiteral("textForQR"));
        textForQR->setGeometry(QRect(40, 60, 471, 41));
        textForQR->setFont(font2);
        makeQR = new QPushButton(tab);
        makeQR->setObjectName(QStringLiteral("makeQR"));
        makeQR->setGeometry(QRect(50, 130, 101, 61));
        makeQR->setFont(font2);
        showQR = new QrcodeGenerate(tab);
        showQR->setObjectName(QStringLiteral("showQR"));
        showQR->setGeometry(QRect(530, 10, 511, 511));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        showPic = new QLabel(tab_2);
        showPic->setObjectName(QStringLiteral("showPic"));
        showPic->setGeometry(QRect(20, 20, 500, 500));
        showPic->setFont(font2);
        showPic->setFrameShape(QFrame::Box);
        showPic->setAlignment(Qt::AlignCenter);
        openPic = new QPushButton(tab_2);
        openPic->setObjectName(QStringLiteral("openPic"));
        openPic->setGeometry(QRect(550, 50, 121, 51));
        openPic->setFont(font2);
        showText = new QLabel(tab_2);
        showText->setObjectName(QStringLiteral("showText"));
        showText->setGeometry(QRect(530, 370, 521, 151));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(16);
        showText->setFont(font3);
        showText->setTextFormat(Qt::PlainText);
        showText->setScaledContents(true);
        showText->setAlignment(Qt::AlignCenter);
        showText->setWordWrap(true);
        goodQR = new QLabel(tab_2);
        goodQR->setObjectName(QStringLiteral("goodQR"));
        goodQR->setGeometry(QRect(700, 10, 350, 350));
        goodQR->setFont(font2);
        goodQR->setFrameShape(QFrame::StyledPanel);
        goodQR->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_2, QString());

        retranslateUi(ManiForm);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ManiForm);
    } // setupUi

    void retranslateUi(QWidget *ManiForm)
    {
        ManiForm->setWindowTitle(QApplication::translate("ManiForm", "\344\272\214\347\273\264\347\240\201\347\224\237\346\210\220\344\270\216\350\257\206\345\210\253", Q_NULLPTR));
        saveQR->setText(QApplication::translate("ManiForm", "\344\277\235\345\255\230\345\233\276\347\211\207", Q_NULLPTR));
        textForQR->setPlaceholderText(QApplication::translate("ManiForm", "\350\257\267\350\276\223\345\205\245\345\255\227\347\254\246\357\274\214\344\273\245\344\276\277\347\224\237\346\210\220\344\272\214\347\273\264\347\240\201\342\200\246\342\200\246", Q_NULLPTR));
        makeQR->setText(QApplication::translate("ManiForm", "\347\224\237\346\210\220\344\272\214\347\273\264\347\240\201", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ManiForm", "\347\224\237\346\210\220\344\272\214\347\273\264\347\240\201", Q_NULLPTR));
        showPic->setText(QApplication::translate("ManiForm", "\350\277\231\351\207\214\346\230\276\347\244\272\346\202\250\346\211\223\345\274\200\347\232\204\345\270\246\346\234\211\344\272\214\347\273\264\347\240\201\347\232\204\345\233\276\347\211\207", Q_NULLPTR));
        openPic->setText(QApplication::translate("ManiForm", "\346\211\223\345\274\200\345\233\276\347\211\207", Q_NULLPTR));
        showText->setText(QApplication::translate("ManiForm", "\350\277\231\351\207\214\344\274\232\345\261\225\347\244\272\344\272\214\347\273\264\347\240\201\350\257\206\345\210\253\347\232\204\347\273\223\346\236\234:)", Q_NULLPTR));
        goodQR->setText(QApplication::translate("ManiForm", "\345\233\276\347\211\207\351\207\214\346\210\252\345\217\226\347\232\204\344\272\214\347\273\264\347\240\201", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ManiForm", "\350\257\206\345\210\253\344\272\214\347\273\264\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ManiForm: public Ui_ManiForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANIFORM_H
