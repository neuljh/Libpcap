/********************************************************************************
** Form generated from reading UI file 'dialog_arp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ARP_H
#define UI_DIALOG_ARP_H

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

class Ui_Dialog_arp
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit;
    QLabel *order;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QTextEdit *te_id;
    QTextEdit *te_mac_source;
    QTextEdit *te_mac_des;
    QTextEdit *te_ht;
    QTextEdit *te_pt;
    QTextEdit *te_hl;
    QTextEdit *te_pl;
    QTextEdit *te_operation;
    QTextEdit *te_protocol;
    QTextEdit *te_eth_source;
    QTextEdit *te_ip_source;
    QTextEdit *te_eth_des;
    QTextEdit *te_ip_des;
    QPushButton *btn_next;
    QPushButton *btn_start;
    QLabel *label_15;
    QTextEdit *te_number;

    void setupUi(QDialog *Dialog_arp)
    {
        if (Dialog_arp->objectName().isEmpty())
            Dialog_arp->setObjectName(QStringLiteral("Dialog_arp"));
        Dialog_arp->resize(728, 693);
        buttonBox = new QDialogButtonBox(Dialog_arp);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(370, 650, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textEdit = new QTextEdit(Dialog_arp);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 711, 61));
        order = new QLabel(Dialog_arp);
        order->setObjectName(QStringLiteral("order"));
        order->setGeometry(QRect(150, 80, 341, 21));
        label_2 = new QLabel(Dialog_arp);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 120, 131, 21));
        label_3 = new QLabel(Dialog_arp);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 160, 171, 21));
        label_4 = new QLabel(Dialog_arp);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 200, 201, 21));
        label_5 = new QLabel(Dialog_arp);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 240, 181, 16));
        label_6 = new QLabel(Dialog_arp);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 290, 171, 16));
        label_7 = new QLabel(Dialog_arp);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 320, 161, 31));
        label_8 = new QLabel(Dialog_arp);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 360, 161, 31));
        label_9 = new QLabel(Dialog_arp);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 410, 141, 21));
        label_10 = new QLabel(Dialog_arp);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 450, 67, 17));
        label_11 = new QLabel(Dialog_arp);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 490, 201, 21));
        label_12 = new QLabel(Dialog_arp);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 530, 191, 21));
        label_13 = new QLabel(Dialog_arp);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 570, 231, 21));
        label_14 = new QLabel(Dialog_arp);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 610, 211, 21));
        te_id = new QTextEdit(Dialog_arp);
        te_id->setObjectName(QStringLiteral("te_id"));
        te_id->setGeometry(QRect(280, 120, 411, 31));
        te_mac_source = new QTextEdit(Dialog_arp);
        te_mac_source->setObjectName(QStringLiteral("te_mac_source"));
        te_mac_source->setGeometry(QRect(280, 160, 411, 31));
        te_mac_des = new QTextEdit(Dialog_arp);
        te_mac_des->setObjectName(QStringLiteral("te_mac_des"));
        te_mac_des->setGeometry(QRect(280, 200, 411, 31));
        te_ht = new QTextEdit(Dialog_arp);
        te_ht->setObjectName(QStringLiteral("te_ht"));
        te_ht->setGeometry(QRect(280, 240, 411, 31));
        te_pt = new QTextEdit(Dialog_arp);
        te_pt->setObjectName(QStringLiteral("te_pt"));
        te_pt->setGeometry(QRect(280, 280, 411, 31));
        te_hl = new QTextEdit(Dialog_arp);
        te_hl->setObjectName(QStringLiteral("te_hl"));
        te_hl->setGeometry(QRect(280, 320, 411, 31));
        te_pl = new QTextEdit(Dialog_arp);
        te_pl->setObjectName(QStringLiteral("te_pl"));
        te_pl->setGeometry(QRect(280, 360, 411, 31));
        te_operation = new QTextEdit(Dialog_arp);
        te_operation->setObjectName(QStringLiteral("te_operation"));
        te_operation->setGeometry(QRect(280, 400, 411, 31));
        te_protocol = new QTextEdit(Dialog_arp);
        te_protocol->setObjectName(QStringLiteral("te_protocol"));
        te_protocol->setGeometry(QRect(280, 440, 411, 31));
        te_eth_source = new QTextEdit(Dialog_arp);
        te_eth_source->setObjectName(QStringLiteral("te_eth_source"));
        te_eth_source->setGeometry(QRect(280, 480, 411, 31));
        te_ip_source = new QTextEdit(Dialog_arp);
        te_ip_source->setObjectName(QStringLiteral("te_ip_source"));
        te_ip_source->setGeometry(QRect(280, 520, 411, 31));
        te_eth_des = new QTextEdit(Dialog_arp);
        te_eth_des->setObjectName(QStringLiteral("te_eth_des"));
        te_eth_des->setGeometry(QRect(280, 560, 411, 31));
        te_ip_des = new QTextEdit(Dialog_arp);
        te_ip_des->setObjectName(QStringLiteral("te_ip_des"));
        te_ip_des->setGeometry(QRect(280, 600, 411, 31));
        btn_next = new QPushButton(Dialog_arp);
        btn_next->setObjectName(QStringLiteral("btn_next"));
        btn_next->setGeometry(QRect(490, 80, 89, 25));
        btn_start = new QPushButton(Dialog_arp);
        btn_start->setObjectName(QStringLiteral("btn_start"));
        btn_start->setGeometry(QRect(400, 650, 111, 31));
        label_15 = new QLabel(Dialog_arp);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 660, 201, 21));
        te_number = new QTextEdit(Dialog_arp);
        te_number->setObjectName(QStringLiteral("te_number"));
        te_number->setGeometry(QRect(280, 650, 81, 31));

        retranslateUi(Dialog_arp);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_arp, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_arp, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_arp);
    } // setupUi

    void retranslateUi(QDialog *Dialog_arp)
    {
        Dialog_arp->setWindowTitle(QApplication::translate("Dialog_arp", "Capture ARP packets", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("Dialog_arp", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt; font-weight:600;\">Capture ARP packets</span></p></body></html>", Q_NULLPTR));
        order->setText(QApplication::translate("Dialog_arp", "The %d ARP packet is captured", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog_arp", "Ethernet type id:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog_arp", "Mac Source Address is: ", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog_arp", "Mac Destination Address is: ", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog_arp", "ARP Hardware Type:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog_arp", "ARP Protocol Type:", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog_arp", "ARP Hardware Length:", Q_NULLPTR));
        label_8->setText(QApplication::translate("Dialog_arp", "ARP Protocol Length:", Q_NULLPTR));
        label_9->setText(QApplication::translate("Dialog_arp", "ARP Operation:", Q_NULLPTR));
        label_10->setText(QApplication::translate("Dialog_arp", "Protocol:", Q_NULLPTR));
        label_11->setText(QApplication::translate("Dialog_arp", "Ethernet Source Address is:", Q_NULLPTR));
        label_12->setText(QApplication::translate("Dialog_arp", "Source IP Address:", Q_NULLPTR));
        label_13->setText(QApplication::translate("Dialog_arp", "Ethernet Destination Address id:", Q_NULLPTR));
        label_14->setText(QApplication::translate("Dialog_arp", "Destination IP Address:", Q_NULLPTR));
        btn_next->setText(QApplication::translate("Dialog_arp", "NEXT!", Q_NULLPTR));
        btn_start->setText(QApplication::translate("Dialog_arp", "Start now!", Q_NULLPTR));
        label_15->setText(QApplication::translate("Dialog_arp", "Please input the number:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_arp: public Ui_Dialog_arp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ARP_H
