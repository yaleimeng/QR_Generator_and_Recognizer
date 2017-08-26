#-------------------------------------------------
## Project created by QtCreator 2017-08-19T08:18:41
##-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyQR
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        main.cpp \
        maniform.cpp \
    qrcodegenerate.cpp

HEADERS += \
        maniform.h \
    qrcodegenerate.h \
    qrencode.h

FORMS += \
        maniform.ui \
    qrcodegenerate.ui

LIBS+= C:\Qt\cv\qr\qrcodelib.lib

include(C:\Qt\cv\QZXingV2.4\QZXing.pri)
