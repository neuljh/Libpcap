/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPlainTextEdit *plainTextEdit;
    QTextEdit *textEdit_3;
    QTextEdit *te_net_interface;
    QTextEdit *te_net_ip;
    QTextEdit *te_net_mask;
    QPushButton *get_base_infor;
    QPushButton *btn_single;
    QPushButton *btn_multiple;
    QPushButton *btn_ethernet;
    QPushButton *btn_arp;
    QPushButton *btn_ip;
    QPushButton *btn_tcp;
    QPushButton *btn_udp;
    QPushButton *btn_icmp;
    QPushButton *btn_all;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(945, 602);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setGeometry(QRect(0, 0, 941, 51));
        textEdit->setReadOnly(true);
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(80, 80, 171, 31));
        textEdit_2->setReadOnly(true);
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(80, 130, 171, 31));
        plainTextEdit->setReadOnly(true);
        textEdit_3 = new QTextEdit(centralWidget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(80, 180, 171, 31));
        textEdit_3->setReadOnly(true);
        te_net_interface = new QTextEdit(centralWidget);
        te_net_interface->setObjectName(QStringLiteral("te_net_interface"));
        te_net_interface->setGeometry(QRect(350, 80, 231, 31));
        te_net_ip = new QTextEdit(centralWidget);
        te_net_ip->setObjectName(QStringLiteral("te_net_ip"));
        te_net_ip->setGeometry(QRect(350, 130, 231, 31));
        te_net_mask = new QTextEdit(centralWidget);
        te_net_mask->setObjectName(QStringLiteral("te_net_mask"));
        te_net_mask->setGeometry(QRect(350, 180, 231, 31));
        get_base_infor = new QPushButton(centralWidget);
        get_base_infor->setObjectName(QStringLiteral("get_base_infor"));
        get_base_infor->setGeometry(QRect(700, 110, 161, 61));
        btn_single = new QPushButton(centralWidget);
        btn_single->setObjectName(QStringLiteral("btn_single"));
        btn_single->setGeometry(QRect(60, 360, 221, 41));
        btn_multiple = new QPushButton(centralWidget);
        btn_multiple->setObjectName(QStringLiteral("btn_multiple"));
        btn_multiple->setGeometry(QRect(60, 290, 221, 41));
        btn_ethernet = new QPushButton(centralWidget);
        btn_ethernet->setObjectName(QStringLiteral("btn_ethernet"));
        btn_ethernet->setGeometry(QRect(60, 430, 221, 41));
        btn_arp = new QPushButton(centralWidget);
        btn_arp->setObjectName(QStringLiteral("btn_arp"));
        btn_arp->setGeometry(QRect(360, 290, 221, 41));
        btn_ip = new QPushButton(centralWidget);
        btn_ip->setObjectName(QStringLiteral("btn_ip"));
        btn_ip->setGeometry(QRect(360, 360, 221, 41));
        btn_tcp = new QPushButton(centralWidget);
        btn_tcp->setObjectName(QStringLiteral("btn_tcp"));
        btn_tcp->setGeometry(QRect(360, 430, 221, 41));
        btn_udp = new QPushButton(centralWidget);
        btn_udp->setObjectName(QStringLiteral("btn_udp"));
        btn_udp->setGeometry(QRect(670, 290, 221, 41));
        btn_icmp = new QPushButton(centralWidget);
        btn_icmp->setObjectName(QStringLiteral("btn_icmp"));
        btn_icmp->setGeometry(QRect(670, 360, 221, 41));
        btn_all = new QPushButton(centralWidget);
        btn_all->setObjectName(QStringLiteral("btn_all"));
        btn_all->setGeometry(QRect(670, 430, 221, 41));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 945, 28));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Experiment 4: Learning of network packet capture development kit Libpcap", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26pt; font-weight:600;\">Visualized Results Presentation----Main Interface</span></p></body></html>", Q_NULLPTR));
        textEdit_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Network Interface:</p></body></html>", Q_NULLPTR));
        plainTextEdit->setPlainText(QApplication::translate("MainWindow", "Network IP Address:", Q_NULLPTR));
        textEdit_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Network Mask Address:</p></body></html>", Q_NULLPTR));
        te_net_interface->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        te_net_ip->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        te_net_mask->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        get_base_infor->setText(QApplication::translate("MainWindow", "Get Basic Information", Q_NULLPTR));
        btn_single->setText(QApplication::translate("MainWindow", "Capture a multiple packet", Q_NULLPTR));
        btn_multiple->setText(QApplication::translate("MainWindow", "Capture single packets", Q_NULLPTR));
        btn_ethernet->setText(QApplication::translate("MainWindow", "Capture Ethernet packets", Q_NULLPTR));
        btn_arp->setText(QApplication::translate("MainWindow", "Capture ARP packets", Q_NULLPTR));
        btn_ip->setText(QApplication::translate("MainWindow", "Capture IP packets", Q_NULLPTR));
        btn_tcp->setText(QApplication::translate("MainWindow", "Capture TCP packets", Q_NULLPTR));
        btn_udp->setText(QApplication::translate("MainWindow", "Capture UDP packets", Q_NULLPTR));
        btn_icmp->setText(QApplication::translate("MainWindow", "Capture ICMP packets", Q_NULLPTR));
        btn_all->setText(QApplication::translate("MainWindow", "Capture All packets", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
