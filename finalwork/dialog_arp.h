#ifndef DIALOG_ARP_H
#define DIALOG_ARP_H

#include <QDialog>

namespace Ui {
class Dialog_arp;
}

class Dialog_arp : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_arp(QWidget *parent = nullptr);
    ~Dialog_arp();

    static int index;

private slots:
    void on_btn_start_clicked();

    void on_btn_next_clicked();

private:
    Ui::Dialog_arp *ui;
};

#endif // DIALOG_ARP_H
