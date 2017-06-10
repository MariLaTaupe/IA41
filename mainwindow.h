#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QPixmap>
#include "nouvellepartie.h"
#include "choixpions.h"
#include "Jeu.h"


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

    int nbPionsLabel3;
    int pionsLabel3[5];

    int nbPionsLabel4;
    int pionsLabel4[5];

    int nbPionsLabel5;
    int pionsLabel5[5];

    int nbPionsLabel6;
    int pionsLabel6[5];

    int nbPionsLabel7;
    int pionsLabel7[5];

    int nbPionsLabel8;
    int pionsLabel8[5];

    int nbPionsLabel9;
    int pionsLabel9[5];

    int nbPionsLabel10;
    int pionsLabel10[5];
};

void letsPlay(const Position2D& firstStack,  const Position2D& secondStack, int n, Color c);

#endif // MAINWINDOW_H
