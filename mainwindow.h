#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
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

public slots:
    int displayLabel2();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
