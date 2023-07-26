#include "dialog_all.h"
#include "ui_dialog_all.h"

#include"libpcap9.cpp"


int Dialog_all::index=0;

Dialog_all::Dialog_all(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_all)
{
    ui->setupUi(this);
}

Dialog_all::~Dialog_all()
{
    delete ui;
}

void Dialog_all::on_pushButton_clicked()
{
    QString number_string=ui->number->toPlainText();
    int number;
    if(number_string==""){
        number=1;
    }else{
        number=number_string.toInt();
    }
     libpcap9::number=number;

     libpcap9_cpp pcap9;
     pcap9.solution();

     ui->type_id->setText(libpcap9::ethernet_type[Dialog_all::index].c_str());
     ui->mac_source->setText(libpcap9::mac_source[Dialog_all::index].c_str());
     ui->mac_des->setText(libpcap9::mac_des[Dialog_all::index].c_str());

     ui->arp_ht->setText(to_string(libpcap9::hardware_type[Dialog_all::index]).c_str());
     ui->arp_pt->setText(to_string(libpcap9::protocol_type[Dialog_all::index]).c_str());
     ui->arp_hl->setText(to_string(libpcap9::hardware_length[Dialog_all::index]).c_str());
     ui->arp_pl->setText(to_string(libpcap9::protocol_length[Dialog_all::index]).c_str());
     ui->arp_operation->setText(to_string(libpcap9::operation_code[Dialog_all::index]).c_str());
     ui->eth_source->setText(libpcap9::eth_source[Dialog_all::index].c_str());
     ui->ip_source->setText(libpcap9::ip_source[Dialog_all::index].c_str());
     ui->eth_des->setText(libpcap9::eth_des[Dialog_all::index].c_str());
     ui->ip_des->setText(libpcap9::ip_des[Dialog_all::index].c_str());

     ui->ip_version->setText(to_string(libpcap9::ip_version[Dialog_all::index]).c_str());
     ui->ip_offset->setText(to_string(libpcap9::ip_offset[Dialog_all::index]).c_str());
     ui->ip_hl->setText(to_string(libpcap9::ip_header_length[Dialog_all::index]).c_str());
     ui->ip_ttl->setText(to_string(libpcap9::ip_ttl[Dialog_all::index]).c_str());
     ui->ip_tl->setText(to_string(libpcap9::ip_total_length[Dialog_all::index]).c_str());
     ui->ip_tos->setText(to_string(libpcap9::ip_tos[Dialog_all::index]).c_str());
     ui->ip_id->setText(to_string(libpcap9::ip_id[Dialog_all::index]).c_str());
     ui->ip_protocol->setText(to_string(libpcap9::ip_protocol[Dialog_all::index]).c_str());
     ui->ip_hc->setText(to_string(libpcap9::ip_checksum[Dialog_all::index]).c_str());
     ui->ip_source_address->setText(libpcap9::ip_source_address[Dialog_all::index].c_str());
     ui->ip_des_address->setText(libpcap9::ip_des_adddress[Dialog_all::index].c_str());

     ui->tcp_source_port->setText(to_string(libpcap9::tcp_source_port[Dialog_all::index]).c_str());
     ui->tcp_hl->setText(to_string(libpcap9::tcp_header_length[Dialog_all::index]).c_str());
     ui->tcp_des_port->setText(to_string(libpcap9::tcp_des_port[Dialog_all::index]).c_str());
     ui->tcp_reserved->setText(to_string(libpcap9::tcp_reserved[Dialog_all::index]).c_str());
     ui->tcp_seq_num->setText(to_string(libpcap9::tcp_seq_num[Dialog_all::index]).c_str());
     ui->tcp_flags->setText(libpcap9::tcp_flags[Dialog_all::index].c_str());
     ui->tcp_ack_num->setText(to_string(libpcap9::tcp_ack_num[Dialog_all::index]).c_str());
     ui->tcp_win_size->setText(to_string(libpcap9::tcp_win_size[Dialog_all::index]).c_str());
     ui->tcp_checksum->setText(to_string(libpcap9::tcp_checksum[Dialog_all::index]).c_str());
     ui->tcp_u_pointer->setText(to_string(libpcap9::tcp_u_pointer[Dialog_all::index]).c_str());
     ui->tcp_protocol->setText(libpcap9::tcp_protocol[Dialog_all::index].c_str());

     ui->udp_source_port->setText(to_string(libpcap9::udp_source_port[Dialog_all::index]).c_str());
     ui->udp_des_port->setText(to_string(libpcap9::udp_des_port[Dialog_all::index]).c_str());
     ui->udp_length->setText(to_string(libpcap9::udp_length[Dialog_all::index]).c_str());
     ui->udp_checksum->setText(to_string(libpcap9::udp_checksum[Dialog_all::index]).c_str());
     ui->udp_service->setText(libpcap9::udp_service[Dialog_all::index].c_str());

     ui->icmp_type->setText(to_string(libpcap9::icmp_type[Dialog_all::index]).c_str());
     ui->icmp_code->setText(to_string(libpcap9::icmp_code[Dialog_all::index]).c_str());
     ui->icmp_checksum->setText(to_string(libpcap9::icmp_checksum[Dialog_all::index]).c_str());
     ui->icmp_id->setText(to_string(libpcap9::icmp_id[Dialog_all::index]).c_str());
     ui->icmp_seq_num->setText(to_string(libpcap9::icmp_seq_num[Dialog_all::index]).c_str());
     ui->icmp_protocol->setText(libpcap9::icmp_protocol[Dialog_all::index].c_str());

     string str="The "+to_string(Dialog_all::index+1)+" packet is captured(Total: "+to_string(libpcap9::number)+" )";
     ui->order->setText(str.c_str());
}

void Dialog_all::on_btn_next_clicked()
{
    Dialog_all::index++;
    if(Dialog_all::index==libpcap9::number){
        Dialog_all::index=0;
    }

    string str="The "+to_string(Dialog_all::index+1)+" packet is captured(Total: "+to_string(libpcap9::number)+" )";
    ui->order->setText(str.c_str());

    ui->type_id->setText(libpcap9::ethernet_type[Dialog_all::index].c_str());
    ui->mac_source->setText(libpcap9::mac_source[Dialog_all::index].c_str());
    ui->mac_des->setText(libpcap9::mac_des[Dialog_all::index].c_str());

    ui->arp_ht->setText(to_string(libpcap9::hardware_type[Dialog_all::index]).c_str());
    ui->arp_pt->setText(to_string(libpcap9::protocol_type[Dialog_all::index]).c_str());
    ui->arp_hl->setText(to_string(libpcap9::hardware_length[Dialog_all::index]).c_str());
    ui->arp_pl->setText(to_string(libpcap9::protocol_length[Dialog_all::index]).c_str());
    ui->arp_operation->setText(to_string(libpcap9::operation_code[Dialog_all::index]).c_str());
    ui->eth_source->setText(libpcap9::eth_source[Dialog_all::index].c_str());
    ui->ip_source->setText(libpcap9::ip_source[Dialog_all::index].c_str());
    ui->eth_des->setText(libpcap9::eth_des[Dialog_all::index].c_str());
    ui->ip_des->setText(libpcap9::ip_des[Dialog_all::index].c_str());

    ui->ip_version->setText(to_string(libpcap9::ip_version[Dialog_all::index]).c_str());
    ui->ip_offset->setText(to_string(libpcap9::ip_offset[Dialog_all::index]).c_str());
    ui->ip_hl->setText(to_string(libpcap9::ip_header_length[Dialog_all::index]).c_str());
    ui->ip_ttl->setText(to_string(libpcap9::ip_ttl[Dialog_all::index]).c_str());
    ui->ip_tl->setText(to_string(libpcap9::ip_total_length[Dialog_all::index]).c_str());
    ui->ip_tos->setText(to_string(libpcap9::ip_tos[Dialog_all::index]).c_str());
    ui->ip_id->setText(to_string(libpcap9::ip_id[Dialog_all::index]).c_str());
    ui->ip_protocol->setText(to_string(libpcap9::ip_protocol[Dialog_all::index]).c_str());
    ui->ip_hc->setText(to_string(libpcap9::ip_checksum[Dialog_all::index]).c_str());
    ui->ip_source_address->setText(libpcap9::ip_source_address[Dialog_all::index].c_str());
    ui->ip_des_address->setText(libpcap9::ip_des_adddress[Dialog_all::index].c_str());

    ui->tcp_source_port->setText(to_string(libpcap9::tcp_source_port[Dialog_all::index]).c_str());
    ui->tcp_hl->setText(to_string(libpcap9::tcp_header_length[Dialog_all::index]).c_str());
    ui->tcp_des_port->setText(to_string(libpcap9::tcp_des_port[Dialog_all::index]).c_str());
    ui->tcp_reserved->setText(to_string(libpcap9::tcp_reserved[Dialog_all::index]).c_str());
    ui->tcp_seq_num->setText(to_string(libpcap9::tcp_seq_num[Dialog_all::index]).c_str());
    ui->tcp_flags->setText(libpcap9::tcp_flags[Dialog_all::index].c_str());
    ui->tcp_ack_num->setText(to_string(libpcap9::tcp_ack_num[Dialog_all::index]).c_str());
    ui->tcp_win_size->setText(to_string(libpcap9::tcp_win_size[Dialog_all::index]).c_str());
    ui->tcp_checksum->setText(to_string(libpcap9::tcp_checksum[Dialog_all::index]).c_str());
    ui->tcp_u_pointer->setText(to_string(libpcap9::tcp_u_pointer[Dialog_all::index]).c_str());
    ui->tcp_protocol->setText(libpcap9::tcp_protocol[Dialog_all::index].c_str());

    ui->udp_source_port->setText(to_string(libpcap9::udp_source_port[Dialog_all::index]).c_str());
    ui->udp_des_port->setText(to_string(libpcap9::udp_des_port[Dialog_all::index]).c_str());
    ui->udp_length->setText(to_string(libpcap9::udp_length[Dialog_all::index]).c_str());
    ui->udp_checksum->setText(to_string(libpcap9::udp_checksum[Dialog_all::index]).c_str());
    ui->udp_service->setText(libpcap9::udp_service[Dialog_all::index].c_str());

    ui->icmp_type->setText(to_string(libpcap9::icmp_type[Dialog_all::index]).c_str());
    ui->icmp_code->setText(to_string(libpcap9::icmp_code[Dialog_all::index]).c_str());
    ui->icmp_checksum->setText(to_string(libpcap9::icmp_checksum[Dialog_all::index]).c_str());
    ui->icmp_id->setText(to_string(libpcap9::icmp_id[Dialog_all::index]).c_str());
    ui->icmp_seq_num->setText(to_string(libpcap9::icmp_seq_num[Dialog_all::index]).c_str());
    ui->icmp_protocol->setText(libpcap9::icmp_protocol[Dialog_all::index].c_str());
}
