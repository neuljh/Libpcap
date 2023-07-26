#include "dialog_arp.h"
#include "ui_dialog_arp.h"

#include"libpcap4.cpp"

#include<iostream>
#include<string>
using namespace std;

int Dialog_arp::index=0;

Dialog_arp::Dialog_arp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_arp)
{
    ui->setupUi(this);
}

Dialog_arp::~Dialog_arp()
{
    delete ui;
}

void Dialog_arp::on_btn_start_clicked()
{
    QString number_string=ui->te_number->toPlainText();
    int number;
    if(number_string==""){
        number=1;
    }else{
        number=number_string.toInt();
    }
    libpcap4::number=number;

    libpcap4_cpp pcap4;
    pcap4.solution();

    ui->te_id->setText(libpcap4::ethernet_type[Dialog_arp::index].c_str());
    ui->te_mac_source->setText(libpcap4::mac_source[Dialog_arp::index].c_str());
    ui->te_mac_des->setText(libpcap4::mac_des[Dialog_arp::index].c_str());
    ui->te_ht->setText(to_string(libpcap4::hardware_type[Dialog_arp::index]).c_str());
    ui->te_pt->setText(to_string(libpcap4::protocol_type[Dialog_arp::index]).c_str());
    ui->te_hl->setText(to_string(libpcap4::hardware_length[Dialog_arp::index]).c_str());
    ui->te_pl->setText(to_string(libpcap4::protocol_length[Dialog_arp::index]).c_str());
    ui->te_operation->setText(to_string(libpcap4::operation_code[Dialog_arp::index]).c_str());
    ui->te_protocol->setText(libpcap4::protocol[Dialog_arp::index].c_str());
    ui->te_eth_source->setText(libpcap4::eth_source[Dialog_arp::index].c_str());
    ui->te_ip_source->setText(libpcap4::ip_source[Dialog_arp::index].c_str());
    ui->te_eth_des->setText(libpcap4::eth_des[Dialog_arp::index].c_str());
    ui->te_ip_des->setText(libpcap4::ip_des[Dialog_arp::index].c_str());

    string str="The "+to_string(Dialog_arp::index+1)+" ARP packet is captured(Total numbers: "+to_string(libpcap4::number)+")";
    ui->order->setText(str.c_str());
}

void Dialog_arp::on_btn_next_clicked()
{
    Dialog_arp::index++;
    if(Dialog_arp::index==libpcap4::number){
        Dialog_arp::index=0;
    }

    string str="The "+to_string(Dialog_arp::index+1)+" ARP packet is captured(Total numbers: "+to_string(libpcap4::number)+")";
    ui->order->setText(str.c_str());

    ui->te_id->setText(libpcap4::ethernet_type[Dialog_arp::index].c_str());
    ui->te_mac_source->setText(libpcap4::mac_source[Dialog_arp::index].c_str());
    ui->te_mac_des->setText(libpcap4::mac_des[Dialog_arp::index].c_str());
    ui->te_ht->setText(to_string(libpcap4::hardware_type[Dialog_arp::index]).c_str());
    ui->te_pt->setText(to_string(libpcap4::protocol_type[Dialog_arp::index]).c_str());
    ui->te_hl->setText(to_string(libpcap4::hardware_length[Dialog_arp::index]).c_str());
    ui->te_pl->setText(to_string(libpcap4::protocol_length[Dialog_arp::index]).c_str());
    ui->te_operation->setText(to_string(libpcap4::operation_code[Dialog_arp::index]).c_str());
    ui->te_protocol->setText(libpcap4::protocol[Dialog_arp::index].c_str());
    ui->te_eth_source->setText(libpcap4::eth_source[Dialog_arp::index].c_str());
    ui->te_ip_source->setText(libpcap4::ip_source[Dialog_arp::index].c_str());
    ui->te_eth_des->setText(libpcap4::eth_des[Dialog_arp::index].c_str());
    ui->te_ip_des->setText(libpcap4::ip_des[Dialog_arp::index].c_str());

}
