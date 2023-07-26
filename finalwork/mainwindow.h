#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_get_base_infor_clicked();

    void on_btn_single_clicked();

    void on_btn_multiple_clicked();

    void on_btn_ethernet_clicked();

    void on_btn_arp_clicked();

    void on_btn_all_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
