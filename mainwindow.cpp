#include <iostream>
#include <time.h> //Ne pas oublier d'inclure le fichier time.h

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "nouvellepartie.h"
#include "ui_nouvellepartie.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    nbPionsLabel2 = 1; // Case en haut à gauche
    pionsLabel2[0] = -1;
    pionsLabel2[1] = -1;
    pionsLabel2[2] = -1;
    pionsLabel2[3] = -1;
    pionsLabel2[4] = -1;
    displayLabel2();

    nbPionsLabel3 = 1; // Case en haut à droite
    pionsLabel3[0] = -1;
    pionsLabel3[1] = -1;
    pionsLabel3[2] = -1;
    pionsLabel3[3] = -1;
    pionsLabel3[4] = -1;
    displayLabel3();

    nbPionsLabel4 = 1; // Case en haut au millieu
    pionsLabel4[0] = -1;
    pionsLabel4[1] = -1;
    pionsLabel4[2] = -1;
    pionsLabel4[3] = -1;
    pionsLabel4[4] = -1;
    displayLabel4();

    nbPionsLabel5 = 1; // Case en bas à droite
    pionsLabel5[0] = -1;
    pionsLabel5[1] = -1;
    pionsLabel5[2] = -1;
    pionsLabel5[3] = -1;
    pionsLabel5[4] = -1;
    displayLabel5();

    nbPionsLabel6 = 1; // Case en bas au millieu
    pionsLabel6[0] = -1;
    pionsLabel6[1] = -1;
    pionsLabel6[2] = -1;
    pionsLabel6[3] = -1;
    pionsLabel6[4] = -1;
    displayLabel6();

    nbPionsLabel7 = 1; // Case en bas à gauche
    pionsLabel7[0] = -1;
    pionsLabel7[1] = -1;
    pionsLabel7[2] = -1;
    pionsLabel7[3] = -1;
    pionsLabel7[4] = -1;
    displayLabel7();

    nbPionsLabel8 = 1; // Case au millieu à gauche
    pionsLabel8[0] = -1;
    pionsLabel8[1] = -1;
    pionsLabel8[2] = -1;
    pionsLabel8[3] = -1;
    pionsLabel8[4] = -1;
    displayLabel8();

    nbPionsLabel9 = 1; // Case centrale
    pionsLabel9[0] = -1;
    pionsLabel9[1] = -1;
    pionsLabel9[2] = -1;
    pionsLabel9[3] = -1;
    pionsLabel9[4] = -1;
    displayLabel9();

    nbPionsLabel10 = 1; // Case au millieu à droite
    pionsLabel10[0] = -1;
    pionsLabel10[1] = -1;
    pionsLabel10[2] = -1;
    pionsLabel10[3] = -1;
    pionsLabel10[4] = -1;
    displayLabel10();

}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::displayLabel2(){ // Case en haut à gauche
    int wid,hei;
    wid = ui->label_2->geometry().width();
    hei = ui->label_2->geometry().height();

    srand(time(NULL)); // initialisation de rand

    QPixmap pixmap(wid,hei);
    pixmap.fill(QColor("white"));
    int i=0;
    QPainter painter(&pixmap);

    if(nbPionsLabel2<6 && nbPionsLabel2>0){
        for(i=0;i<nbPionsLabel2;++i){
            if (pionsLabel2[i] == -1){
                int al = rand()%201;
                if(al < 101){
                    pionsLabel2[i] = 0;
                }else{
                    pionsLabel2[i] = 1;
                }
            }

            if(pionsLabel2[i] == 1){
                painter.setBrush(QBrush(Qt::red));
            }else{
                painter.setBrush(QBrush(Qt::blue));
            }

            painter.drawEllipse( 60, 130 - 25*i, 80, 50);
        }

        ui->label_2->setPixmap(pixmap);
        nbPionsLabel2++;
    }

    return 0;
}

int MainWindow::displayLabel3(){ // Case en haut à droite
    int wid,hei;
    wid = ui->label_3->geometry().width();
    hei = ui->label_3->geometry().height();

    srand(time(NULL)); // initialisation de rand

    QPixmap pixmap(wid,hei);
    pixmap.fill(QColor("white"));
    int i=0;
    QPainter painter(&pixmap);

    if(nbPionsLabel3<6 && nbPionsLabel3>0){
        for(i=0;i<nbPionsLabel3;++i){
            if (pionsLabel3[i] == -1){
                int al = rand()%201;
                if(al < 101){
                    pionsLabel3[i] = 0;
                }else{
                    pionsLabel3[i] = 1;
                }
            }

            if(pionsLabel3[i] == 1){
                painter.setBrush(QBrush(Qt::red));
            }else{
                painter.setBrush(QBrush(Qt::blue));
            }

            painter.drawEllipse( 60, 130 - 25*i, 80, 50);
        }

        ui->label_3->setPixmap(pixmap);
        nbPionsLabel3++;
    }

    return 0;
}

int MainWindow::displayLabel4(){ // Case en haut au millieu
    int wid,hei;
    wid = ui->label_4->geometry().width();
    hei = ui->label_4->geometry().height();

    srand(time(NULL)); // initialisation de rand

    QPixmap pixmap(wid,hei);
    pixmap.fill(QColor("white"));
    int i=0;
    QPainter painter(&pixmap);

    if(nbPionsLabel4<6 && nbPionsLabel4>0){
        for(i=0;i<nbPionsLabel4;++i){
            if (pionsLabel4[i] == -1){
                int al = rand()%201;
                if(al < 101){
                    pionsLabel4[i] = 0;
                }else{
                    pionsLabel4[i] = 1;
                }
            }

            if(pionsLabel4[i] == 1){
                painter.setBrush(QBrush(Qt::red));
            }else{
                painter.setBrush(QBrush(Qt::blue));
            }

            painter.drawEllipse( 60, 130 - 25*i, 80, 50);
        }

        ui->label_4->setPixmap(pixmap);
        nbPionsLabel4++;
    }

    return 0;
}

int MainWindow::displayLabel5(){ // Case en bas à droite
    int wid,hei;
    wid = ui->label_5->geometry().width();
    hei = ui->label_5->geometry().height();

    srand(time(NULL)); // initialisation de rand

    QPixmap pixmap(wid,hei);
    pixmap.fill(QColor("white"));
    int i=0;
    QPainter painter(&pixmap);

    if(nbPionsLabel5<6 && nbPionsLabel5>0){
        for(i=0;i<nbPionsLabel5;++i){
            if (pionsLabel5[i] == -1){
                int al = rand()%201;
                if(al < 101){
                    pionsLabel5[i] = 0;
                }else{
                    pionsLabel5[i] = 1;
                }
            }

            if(pionsLabel5[i] == 1){
                painter.setBrush(QBrush(Qt::red));
            }else{
                painter.setBrush(QBrush(Qt::blue));
            }

            painter.drawEllipse( 60, 130 - 25*i, 80, 50);
        }

        ui->label_5->setPixmap(pixmap);
        nbPionsLabel5++;
    }

    return 0;
}

int MainWindow::displayLabel6(){ // Case en bas au millieu
    int wid,hei;
    wid = ui->label_6->geometry().width();
    hei = ui->label_6->geometry().height();

    srand(time(NULL)); // initialisation de rand

    QPixmap pixmap(wid,hei);
    pixmap.fill(QColor("white"));
    int i=0;
    QPainter painter(&pixmap);

    if(nbPionsLabel6<6 && nbPionsLabel6>0){
        for(i=0;i<nbPionsLabel6;++i){
            if (pionsLabel6[i] == -1){
                int al = rand()%201;
                if(al < 101){
                    pionsLabel6[i] = 0;
                }else{
                    pionsLabel6[i] = 1;
                }
            }

            if(pionsLabel6[i] == 1){
                painter.setBrush(QBrush(Qt::red));
            }else{
                painter.setBrush(QBrush(Qt::blue));
            }

            painter.drawEllipse( 60, 130 - 25*i, 80, 50);
        }

        ui->label_6->setPixmap(pixmap);
        nbPionsLabel6++;
    }

    return 0;
}

int MainWindow::displayLabel7(){ // Case en bas à gauche
    int wid,hei;
    wid = ui->label_7->geometry().width();
    hei = ui->label_7->geometry().height();

    srand(time(NULL)); // initialisation de rand

    QPixmap pixmap(wid,hei);
    pixmap.fill(QColor("white"));
    int i=0;
    QPainter painter(&pixmap);

    if(nbPionsLabel7<6 && nbPionsLabel7>0){
        for(i=0;i<nbPionsLabel7;++i){
            if (pionsLabel7[i] == -1){
                int al = rand()%201;
                if(al < 101){
                    pionsLabel7[i] = 0;
                }else{
                    pionsLabel7[i] = 1;
                }
            }

            if(pionsLabel7[i] == 1){
                painter.setBrush(QBrush(Qt::red));
            }else{
                painter.setBrush(QBrush(Qt::blue));
            }

            painter.drawEllipse( 60, 130 - 25*i, 80, 50);
        }

        ui->label_7->setPixmap(pixmap);
        nbPionsLabel7++;
    }

    return 0;
}

int MainWindow::displayLabel8(){ // Case au millieu à gauche
    int wid,hei;
    wid = ui->label_8->geometry().width();
    hei = ui->label_8->geometry().height();

    srand(time(NULL)); // initialisation de rand

    QPixmap pixmap(wid,hei);
    pixmap.fill(QColor("white"));
    int i=0;
    QPainter painter(&pixmap);

    if(nbPionsLabel8<6 && nbPionsLabel8>0){
        for(i=0;i<nbPionsLabel8;++i){
            if (pionsLabel8[i] == -1){
                int al = rand()%201;
                if(al < 101){
                    pionsLabel8[i] = 0;
                }else{
                    pionsLabel8[i] = 1;
                }
            }

            if(pionsLabel8[i] == 1){
                painter.setBrush(QBrush(Qt::red));
            }else{
                painter.setBrush(QBrush(Qt::blue));
            }

            painter.drawEllipse( 60, 130 - 25*i, 80, 50);
        }

        ui->label_8->setPixmap(pixmap);
        nbPionsLabel8++;
    }

    return 0;
}

int MainWindow::displayLabel9(){ // Case centrale
    int wid,hei;
    wid = ui->label_9->geometry().width();
    hei = ui->label_9->geometry().height();

    srand(time(NULL)); // initialisation de rand

    QPixmap pixmap(wid,hei);
    pixmap.fill(QColor("white"));
    int i=0;
    QPainter painter(&pixmap);

    if(nbPionsLabel9<6 && nbPionsLabel9>0){
        for(i=0;i<nbPionsLabel9;++i){
            if (pionsLabel9[i] == -1){
                int al = rand()%201;
                if(al < 101){
                    pionsLabel9[i] = 0;
                }else{
                    pionsLabel9[i] = 1;
                }
            }

            if(pionsLabel9[i] == 1){
                painter.setBrush(QBrush(Qt::red));
            }else{
                painter.setBrush(QBrush(Qt::blue));
            }

            painter.drawEllipse( 60, 130 - 25*i, 80, 50);
        }

        ui->label_9->setPixmap(pixmap);
        nbPionsLabel9++;
    }

    return 0;
}

int MainWindow::displayLabel10(){ // Case au millieu à droite
    int wid,hei;
    wid = ui->label_10->geometry().width();
    hei = ui->label_10->geometry().height();

    srand(time(NULL)); // initialisation de rand

    QPixmap pixmap(wid,hei);
    pixmap.fill(QColor("white"));
    int i=0;
    QPainter painter(&pixmap);

    if(nbPionsLabel10<6 && nbPionsLabel10>0){
        for(i=0;i<nbPionsLabel10;++i){
            if (pionsLabel10[i] == -1){
                int al = rand()%201;
                if(al < 101){
                    pionsLabel10[i] = 0;
                }else{
                    pionsLabel10[i] = 1;
                }
            }

            if(pionsLabel10[i] == 1){
                painter.setBrush(QBrush(Qt::red));
            }else{
                painter.setBrush(QBrush(Qt::blue));
            }

            painter.drawEllipse( 60, 130 - 25*i, 80, 50);
        }

        ui->label_10->setPixmap(pixmap);
        nbPionsLabel10++;
    }

    return 0;
}

void MainWindow::on_label_2_clicked() // Case en haut à gauche
{
    displayLabel2();
}

void MainWindow::on_label_3_clicked() // Case en haut à droite
{
    displayLabel3();
}

void MainWindow::on_label_4_clicked() // Case en haut au millieu
{
    displayLabel4();
}

void MainWindow::on_label_5_clicked() // Case en bas à droite
{
    displayLabel5();
}

void MainWindow::on_label_6_clicked() // Case en bas au millieu
{
    displayLabel6();
}

void MainWindow::on_label_7_clicked() // Case en bas à gauche
{
    displayLabel7();
}

void MainWindow::on_label_8_clicked() // Case au millieu à gauche
{
    displayLabel8();
}

void MainWindow::on_label_9_clicked() // Case centrale
{
    displayLabel9();
}

void MainWindow::on_label_10_clicked() // Case au millieu à droite
{
    displayLabel10();
}
