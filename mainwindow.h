#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QPixmap>
#include "nouvellepartie.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_label_2_clicked();
    void on_label_3_clicked();
    void on_label_4_clicked();
    void on_label_5_clicked();
    void on_label_6_clicked();
    void on_label_7_clicked();
    void on_label_8_clicked();
    void on_label_9_clicked();
    void on_label_10_clicked();

public slots:
    int displayLabel2();
    int displayLabel3();
    int displayLabel4();
    int displayLabel5();
    int displayLabel6();
    int displayLabel7();
    int displayLabel8();
    int displayLabel9();
    int displayLabel10();

private:
    Ui::MainWindow *ui;

    int nbPionsLabel2;
    int pionsLabel2[5];

    int pionLabel3;
    int pionLabel4;
    int pionLabel5;
    int pionLabel6;
    int pionLabel7;
    int pionLabel8;
    int pionLabel9;
    int pionLabel10;
};

#endif // MAINWINDOW_H
