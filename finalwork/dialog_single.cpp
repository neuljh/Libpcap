#include "dialog_single.h"
#include "ui_dialog_single.h"
#include"libpcap2_2.cpp"
#include<string>
#include <QString>
using namespace std;

Dialog_single::Dialog_single(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_single)
{
    ui->setupUi(this);
}

Dialog_single::~Dialog_single()
{
    delete ui;
}

void Dialog_single::on_btn_single_start_clicked()
{
    QString number_string=ui->pte_single_num->toPlainText();
    int number=number_string.toInt();
    libpcap2_2::number=number;

//    cout<<number<<endl;

    libpcap2_2_cpp  lpcap2_2;
    lpcap2_2.solution();

    ui->te_single_res->setText(libpcap2_2::res.c_str());
}
