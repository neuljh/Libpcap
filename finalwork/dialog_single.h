#ifndef DIALOG_SINGLE_H
#define DIALOG_SINGLE_H

#include <QDialog>

namespace Ui {
class Dialog_single;
}

class Dialog_single : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_single(QWidget *parent = nullptr);
    ~Dialog_single();

private slots:
    void on_btn_single_start_clicked();

private:
    Ui::Dialog_single *ui;
};

#endif // DIALOG_SINGLE_H
