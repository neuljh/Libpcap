#ifndef DIALOG_MULTI_H
#define DIALOG_MULTI_H

#include <QDialog>

namespace Ui {
class Dialog_multi;
}

class Dialog_multi : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_multi(QWidget *parent = nullptr);
    ~Dialog_multi();

private slots:
    void on_btn_mul_start_clicked();

private:
    Ui::Dialog_multi *ui;
};

#endif // DIALOG_MULTI_H
