/********************************************************************************
** Form generated from reading UI file 'dialog_multi.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_MULTI_H
#define UI_DIALOG_MULTI_H

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

class Ui_Dialog_multi
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *te_mul_from;
    QTextEdit *te_mul_len;
    QPushButton *btn_mul_start;

    void setupUi(QDialog *Dialog_multi)
    {
        if (Dialog_multi->objectName().isEmpty())
            Dialog_multi->setObjectName(QStringLiteral("Dialog_multi"));
        Dialog_multi->resize(595, 339);
        buttonBox = new QDialogButtonBox(Dialog_multi);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(220, 270, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textEdit = new QTextEdit(Dialog_multi);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 641, 61));
        label = new QLabel(Dialog_multi);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 120, 171, 31));
        label_2 = new QLabel(Dialog_multi);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 180, 181, 21));
        te_mul_from = new QTextEdit(Dialog_multi);
        te_mul_from->setObjectName(QStringLiteral("te_mul_from"));
        te_mul_from->setGeometry(QRect(270, 120, 191, 41));
        te_mul_len = new QTextEdit(Dialog_multi);
        te_mul_len->setObjectName(QStringLiteral("te_mul_len"));
        te_mul_len->setGeometry(QRect(270, 180, 191, 41));
        btn_mul_start = new QPushButton(Dialog_multi);
        btn_mul_start->setObjectName(QStringLiteral("btn_mul_start"));
        btn_mul_start->setGeometry(QRect(70, 270, 111, 31));

        retranslateUi(Dialog_multi);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_multi, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_multi, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_multi);
    } // setupUi

    void retranslateUi(QDialog *Dialog_multi)
    {
        Dialog_multi->setWindowTitle(QApplication::translate("Dialog_multi", "Capture a single packet", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("Dialog_multi", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt; font-weight:600;\">Capture a single packet</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog_multi", "Capture a packet from:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog_multi", "The packet length is: ", Q_NULLPTR));
        btn_mul_start->setText(QApplication::translate("Dialog_multi", "Start now!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_multi: public Ui_Dialog_multi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_MULTI_H
