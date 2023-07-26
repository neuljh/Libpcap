#-------------------------------------------------
#
# Project created by QtCreator 2022-06-26T00:34:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = finalwork
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    libpcap1.cpp \
    dialog_single.cpp \
    libpcap2_2.cpp \
    dialog_multi.cpp \
    libpcap2_1.cpp \
    dialog_ethernet.cpp \
    libpcap3.cpp \
    dialog_arp.cpp \
    libpcap4.cpp \
    dialog_all.cpp \
    libpcap9.cpp

HEADERS += \
        mainwindow.h \
    libpcap1.h \
    dialog_single.h \
    libpcap2_2.h \
    dialog_multi.h \
    libpcap2_1.h \
    dialog_ethernet.h \
    libpcap3.h \
    dialog_arp.h \
    libpcap4.h \
    dialog_all.h \
    libpcap9.h

FORMS += \
        mainwindow.ui \
    dialog_single.ui \
    dialog_multi.ui \
    dialog_ethernet.ui \
    dialog_arp.ui \
    dialog_all.ui

LIBS += -lpcap

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
