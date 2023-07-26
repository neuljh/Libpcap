/********************************************************************************
** Form generated from reading UI file 'dialog_ethernet.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ETHERNET_H
#define UI_DIALOG_ETHERNET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog_ethernet
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QTextEdit *te_from;
    QTextEdit *te_time;
    QTextEdit *te_length;
    QTextEdit *te_type;
    QTextEdit *te_ptotocol;
    QTextEdit *te_mac_source;
    QTextEdit *te_mac_des;
    QPushButton *btn_start;

    void setupUi(QDialog *Dialog_ethernet)
    {
        if (Dialog_ethernet->objectName().isEmpty())
            Dialog_ethernet->setObjectName(QStringLiteral("Dialog_ethernet"));
        Dialog_ethernet->resize(679, 429);
        buttonBox = new QDialogButtonBox(Dialog_ethernet);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(320, 390, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textEdit = new QTextEdit(Dialog_ethernet);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 681, 61));
        label = new QLabel(Dialog_ethernet);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 90, 261, 21));
        label_2 = new QLabel(Dialog_ethernet);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 130, 241, 21));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_3 = new QLabel(Dialog_ethernet);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 170, 161, 21));
        label_4 = new QLabel(Dialog_ethernet);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 210, 151, 16));
        label_5 = new QLabel(Dialog_ethernet);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 250, 111, 16));
        label_6 = new QLabel(Dialog_ethernet);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 290, 181, 21));
        label_7 = new QLabel(Dialog_ethernet);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 330, 201, 21));
        te_from = new QTextEdit(Dialog_ethernet);
        te_from->setObjectName(QStringLiteral("te_from"));
        te_from->setGeometry(QRect(290, 90, 381, 31));
        te_time = new QTextEdit(Dialog_ethernet);
        te_time->setObjectName(QStringLiteral("te_time"));
        te_time->setGeometry(QRect(290, 130, 381, 31));
        te_length = new QTextEdit(Dialog_ethernet);
        te_length->setObjectName(QStringLiteral("te_length"));
        te_length->setGeometry(QRect(290, 170, 381, 31));
        te_type = new QTextEdit(Dialog_ethernet);
        te_type->setObjectName(QStringLiteral("te_type"));
        te_type->setGeometry(QRect(290, 210, 381, 31));
        te_ptotocol = new QTextEdit(Dialog_ethernet);
        te_ptotocol->setObjectName(QStringLiteral("te_ptotocol"));
        te_ptotocol->setGeometry(QRect(290, 250, 381, 31));
        te_mac_source = new QTextEdit(Dialog_ethernet);
        te_mac_source->setObjectName(QStringLiteral("te_mac_source"));
        te_mac_source->setGeometry(QRect(290, 290, 381, 31));
        te_mac_des = new QTextEdit(Dialog_ethernet);
        te_mac_des->setObjectName(QStringLiteral("te_mac_des"));
        te_mac_des->setGeometry(QRect(290, 330, 381, 31));
        btn_start = new QPushButton(Dialog_ethernet);
        btn_start->setObjectName(QStringLiteral("btn_start"));
        btn_start->setGeometry(QRect(90, 380, 111, 31));

        retranslateUi(Dialog_ethernet);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_ethernet, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_ethernet, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_ethernet);
    } // setupUi

    void retranslateUi(QDialog *Dialog_ethernet)
    {
        Dialog_ethernet->setWindowTitle(QApplication::translate("Dialog_ethernet", "Capture Ethernet packets", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("Dialog_ethernet", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt; font-weight:600;\">Capture Ethernet packets</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog_ethernet", "capture a packet from net_interface:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog_ethernet", "caputre time is : ", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog_ethernet", "packet length is: ", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog_ethernet", "ethernet type is: ", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog_ethernet", "protocol:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog_ethernet", "mac source address is : ", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog_ethernet", "mac destination address is: ", Q_NULLPTR));
        btn_start->setText(QApplication::translate("Dialog_ethernet", "Start now!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_ethernet: public Ui_Dialog_ethernet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ETHERNET_H
