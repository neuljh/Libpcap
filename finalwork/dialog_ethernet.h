#ifndef DIALOG_ETHERNET_H
#define DIALOG_ETHERNET_H

#include <QDialog>

namespace Ui {
class Dialog_ethernet;
}

class Dialog_ethernet : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_ethernet(QWidget *parent = nullptr);
    ~Dialog_ethernet();

private slots:
    void on_btn_start_clicked();

private:
    Ui::Dialog_ethernet *ui;
};

#endif // DIALOG_ETHERNET_H
