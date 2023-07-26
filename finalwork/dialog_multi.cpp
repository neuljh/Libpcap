#include "dialog_multi.h"
#include "ui_dialog_multi.h"

#include"libpcap2_1.cpp"

Dialog_multi::Dialog_multi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_multi)
{
    ui->setupUi(this);
}

Dialog_multi::~Dialog_multi()
{
    delete ui;
}

void Dialog_multi::on_btn_mul_start_clicked()
{
    libpcap2_1_cpp lpcap2_1;
    lpcap2_1.solution();

    ui->te_mul_from->setText(libpcap2_1::net_interface.c_str());
    ui->te_mul_len->setText(to_string(libpcap2_1::length).c_str());
}
