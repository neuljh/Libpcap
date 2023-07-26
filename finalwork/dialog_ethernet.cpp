#include "dialog_ethernet.h"
#include "ui_dialog_ethernet.h"

#include"libpcap3.cpp"

Dialog_ethernet::Dialog_ethernet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_ethernet)
{
    ui->setupUi(this);
}

Dialog_ethernet::~Dialog_ethernet()
{
    delete ui;
}

void Dialog_ethernet::on_btn_start_clicked()
{
    libpcap3_cpp pcap3;
    pcap3.solution();
    ui->te_from->setText(libpcap3::net_interface.c_str());
    ui->te_time->setText(libpcap3::time.c_str());
    ui->te_length->setText(to_string(libpcap3::length).c_str());
    ui->te_type->setText(to_string(libpcap3::ethernet_type).c_str());
    ui->te_ptotocol->setText(libpcap3::protocol.c_str());
    ui->te_mac_source->setText(libpcap3::mac_source.c_str());
    ui->te_mac_des->setText(libpcap3::mac_des.c_str());
}
