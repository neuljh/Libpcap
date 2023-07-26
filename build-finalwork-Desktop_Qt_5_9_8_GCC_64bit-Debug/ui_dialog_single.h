/********************************************************************************
** Form generated from reading UI file 'dialog_single.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SINGLE_H
#define UI_DIALOG_SINGLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_single
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QTextEdit *textEdit;
    QPlainTextEdit *pte_single_num;
    QLabel *label_2;
    QScrollArea *single_scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextEdit *te_single_res;
    QPushButton *btn_single_start;

    void setupUi(QDialog *Dialog_single)
    {
        if (Dialog_single->objectName().isEmpty())
            Dialog_single->setObjectName(QStringLiteral("Dialog_single"));
        Dialog_single->resize(666, 459);
        buttonBox = new QDialogButtonBox(Dialog_single);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(280, 420, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Dialog_single);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 90, 331, 51));
        textEdit = new QTextEdit(Dialog_single);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 10, 671, 61));
        pte_single_num = new QPlainTextEdit(Dialog_single);
        pte_single_num->setObjectName(QStringLiteral("pte_single_num"));
        pte_single_num->setGeometry(QRect(370, 100, 91, 41));
        label_2 = new QLabel(Dialog_single);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 170, 121, 21));
        single_scrollArea = new QScrollArea(Dialog_single);
        single_scrollArea->setObjectName(QStringLiteral("single_scrollArea"));
        single_scrollArea->setGeometry(QRect(30, 210, 591, 191));
        single_scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 589, 189));
        te_single_res = new QTextEdit(scrollAreaWidgetContents);
        te_single_res->setObjectName(QStringLiteral("te_single_res"));
        te_single_res->setGeometry(QRect(0, 0, 591, 191));
        single_scrollArea->setWidget(scrollAreaWidgetContents);
        btn_single_start = new QPushButton(Dialog_single);
        btn_single_start->setObjectName(QStringLiteral("btn_single_start"));
        btn_single_start->setGeometry(QRect(490, 100, 111, 41));

        retranslateUi(Dialog_single);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_single, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_single, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_single);
    } // setupUi

    void retranslateUi(QDialog *Dialog_single)
    {
        Dialog_single->setWindowTitle(QApplication::translate("Dialog_single", "Capture a multiple packet", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog_single", "Please enter the number of packets to capture: ", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("Dialog_single", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt; font-weight:600;\">Capture a multiple packet</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog_single", "Capture results:", Q_NULLPTR));
        btn_single_start->setText(QApplication::translate("Dialog_single", "Start now!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_single: public Ui_Dialog_single {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SINGLE_H
