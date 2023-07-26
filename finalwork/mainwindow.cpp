#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "libpcap1.cpp"

#include"dialog_single.h"
#include"dialog_multi.h"
#include"dialog_ethernet.h"
#include"dialog_arp.h"

#include"dialog_all.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_get_base_infor_clicked()
{
    libpcap1_cpp lpcap1;

    lpcap1.get_ip_address();
    ui->te_net_ip->setText(libpcap1::net_ip_string);

    lpcap1.get_mask_address();
    ui->te_net_mask->setText(libpcap1::net_mask_string);

    ui->te_net_interface->setText(libpcap1::net_interface);
}

void MainWindow::on_btn_single_clicked()
{
    Dialog_single* dlg=new Dialog_single();
    dlg->show();
}

void MainWindow::on_btn_multiple_clicked()
{
    Dialog_multi* dlg=new Dialog_multi();
    dlg->show();
}

void MainWindow::on_btn_ethernet_clicked()
{
    Dialog_ethernet* dlg=new Dialog_ethernet();
    dlg->show();
}

void MainWindow::on_btn_arp_clicked()
{
    Dialog_arp* dlg=new Dialog_arp();
    dlg->show();
}

void MainWindow::on_btn_all_clicked()
{
    Dialog_all* dlg=new Dialog_all();
    dlg->show();
}
