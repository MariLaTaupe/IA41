#include <iostream>
#include <time.h> //Ne pas oublier d'inclure le fichier time.h

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "nouvellepartie.h"
#include "ui_nouvellepartie.h"
#include "choixpions.h"
#include "ui_choixpions.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) // TODO : initialiser à partir du modèle
{
    ui->setupUi(this);

    nbPionsLabel2 = 1; // Case en haut à gauche
    pionsLabel2[0] = -1;
    pionsLabel2[1] = -1;
    pionsLabel2[2] = -1;
    pionsLabel2[3] = -1;
    pionsLabel2[4] = -1;
    displayLabel2(true,0);

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

    joueur1 = 1; // 1 = humain, 2,3,4 ... = ia
    joueur2 = 2;
    color=WHITE;

    c1 = "A1";
    c2 = "A2";
    c3 = "A3";
    c4 = "B1";
    c5 = "B2";
    c6 = "B3";
    c7 = "C1";
    c8 = "C2";
    c9 = "C3";

}

MainWindow::~MainWindow()
{
    delete ui;
}

// TODO : display en fonction du modèle

int MainWindow::displayLabel2(bool sens, int nbPions){ // Case en haut à gauche

    if(sens){
        nbPionsLabel2 = nbPionsLabel2 + nbPions;
    }else{
        nbPionsLabel2 = nbPionsLabel2 - nbPions;
    }

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

// TODO : envoyer au modèle

void MainWindow::on_label_2_clicked() // Case en haut à gauche
{
    ChoixPions *c = new ChoixPions(0, 2);
    QObject::connect(c,SIGNAL(retourWindow(int nbPions, int caseArrivee)),this,SLOT(onChoixPions2(int nbPions, int caseArrivee)));
    c->show();

    //displayLabel2();
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

void MainWindow::onChoixPions2(int nbPions, int caseArrivee)
{
    Position2D depart(1,1);
    Position2D arrivee;
    switch(caseArrivee){
    case 4:
        arrivee = Position2D(1,2);
        break;
    case 3:
        arrivee = Position2D(1,3);
        break;
    case 8:
        arrivee = Position2D(2,1);
        break;
    case 9:
        arrivee = Position2D(2,2);
        break;
    case 10:
       arrivee = Position2D(2,3);
        break;
    case 5:
        arrivee = Position2D(3,1);
        break;
    case 6:
        arrivee = Position2D(3,2);
        break;
    case 7:
        arrivee = Position2D(3,3);
        break;
    default:
        arrivee = Position2D(3,1);
        break;
    }
    letsPlay(depart, arrivee, nbPions, color);
}

void MainWindow::on_pushButton_ok_clicked()
{
    bool ok;
    int caseDepart, nbPions, caseArrivee;
    QString caseDepartString, caseArriveeString;

    nbPions = ui->comboBox_pions->currentText().toInt(&ok, 10);

    caseDepartString = ui->comboBox_depart->currentText();
    if(caseDepartString == "A1"){
        caseDepart = 2;
    }else if(caseDepartString == "A2") {
        caseDepart = 4;
    }else if(caseDepartString == "A3") {
        caseDepart = 3;
    }else if(caseDepartString == "B1") {
        caseDepart = 8;
    }else if(caseDepartString == "B2") {
        caseDepart = 9;
    }else if(caseDepartString == "B3") {
        caseDepart = 10;
    }else if(caseDepartString == "C1") {
        caseDepart = 7;
    }else if(caseDepartString == "C2") {
        caseDepart = 6;
    }else if(caseDepartString == "C3") {
        caseDepart = 5;
    }

    caseArriveeString = ui->comboBox_arrivee->currentText();
    if(caseArriveeString == "A1"){
        caseArrivee = 2;
    }else if (caseArriveeString == "A2") {
        caseArrivee = 4;
    }else if (caseArriveeString == "A3") {
        caseArrivee = 3;
    }else if (caseArriveeString == "B1") {
        caseArrivee = 8;
    }else if (caseArriveeString == "B2") {
        caseArrivee = 9;
    }else if (caseArriveeString == "B3") {
        caseArrivee = 10;
    }else if (caseArriveeString == "C1") {
        caseArrivee = 7;
    }else if (caseArriveeString == "C2") {
        caseArrivee = 6;
    }else if (caseArriveeString == "C3") {
        caseArrivee = 5;
    }
}

void MainWindow::on_comboBox_depart_currentIndexChanged(const QString &arg1)
{
    QStringList cb;
    bool ok1, ok2;

    switch(ui->comboBox_depart->currentText().toInt(&ok1, 10)){
    case 1:
        switch (ui->comboBox_pions->currentText().toInt(&ok2, 10)) {
        case 1:
            ui->comboBox_arrivee->clear();
            cb << c2 << c4;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 2:
            ui->comboBox_arrivee->clear();
            cb << c3 << c5 << c7;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 3:
            ui->comboBox_arrivee->clear();
            cb << c6 << c8;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        default:
            break;
        }
        break;
    case 2:
        switch (ui->comboBox_pions->currentText().toInt(&ok2, 10)) {
        case 1:
            ui->comboBox_arrivee->clear();
            cb << c1 << c3 << c5;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 2:
            ui->comboBox_arrivee->clear();
            cb << c4 << c6 << c8;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 3:
            ui->comboBox_arrivee->clear();
            cb << c7 << c9;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        default:
            break;
        }
        break;
    case 3:
        switch (ui->comboBox_pions->currentText().toInt(&ok2, 10)) {
        case 1:
            ui->comboBox_arrivee->clear();
            cb << c2 << c6;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 2:
            ui->comboBox_arrivee->clear();
            cb << c1 << c5 << c9;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 3:
            ui->comboBox_arrivee->clear();
            cb << c4 << c8;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        default:
            break;
        }
        break;
    case 4:
        switch (ui->comboBox_pions->currentText().toInt(&ok2, 10)) {
        case 1:
            ui->comboBox_arrivee->clear();
            cb << c1 << c5 << c7;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 2:
            ui->comboBox_arrivee->clear();
            cb << c2 << c6 << c8;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 3:
            ui->comboBox_arrivee->clear();
            cb << c3 << c9;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        default:
            break;
        }
        break;
    case 5:
        switch (ui->comboBox_pions->currentText().toInt(&ok2, 10)) {
        case 1:
            ui->comboBox_arrivee->clear();
            cb << c2 << c4 << c6 << c8;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 2:
            ui->comboBox_arrivee->clear();
            cb << c1 << c3 << c7 << c9;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 3:
            ui->comboBox_arrivee->clear();
            cb << c2 << c4 << c6 << c8;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        default:
            break;
        }
        break;
    case 6:
        switch (ui->comboBox_pions->currentText().toInt(&ok2, 10)) {
        case 1:
            ui->comboBox_arrivee->clear();
            cb << c3 << c5 << c9;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 2:
            ui->comboBox_arrivee->clear();
            cb << c2 << c4 << c8;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 3:
            ui->comboBox_arrivee->clear();
            cb << c1 << c7;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        default:
            break;
        }
        break;
    case 7:
        switch (ui->comboBox_pions->currentText().toInt(&ok2, 10)) {
        case 1:
            ui->comboBox_arrivee->clear();
            cb << c4 << c8;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 2:
            ui->comboBox_arrivee->clear();
            cb << c1 << c5 << c9;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 3:
            ui->comboBox_arrivee->clear();
            cb << c2 << c6;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        default:
            break;
        }
        break;
    case 8:
        switch (ui->comboBox_pions->currentText().toInt(&ok2, 10)) {
        case 1:
            ui->comboBox_arrivee->clear();
            cb << c5 << c7 << c9;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 2:
            ui->comboBox_arrivee->clear();
            cb << c2 << c4 << c6;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 3:
            ui->comboBox_arrivee->clear();
            cb << c1 << c3;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        default:
            break;
        }
        break;
    case 9:
        switch (ui->comboBox_pions->currentText().toInt(&ok2, 10)) {
        case 1:
            ui->comboBox_arrivee->clear();
            cb << c6 << c8;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 2:
            ui->comboBox_arrivee->clear();
            cb << c3 << c5 << c7;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 3:
            ui->comboBox_arrivee->clear();
            cb << c2 << c4;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }
}

void MainWindow::on_comboBox_pions_currentIndexChanged(const QString &arg1)
{
    QStringList cb;
    bool ok1, ok2;

    switch(ui->comboBox_depart->currentText().toInt(&ok1, 10)){
    case 1:
        switch (ui->comboBox_pions->currentText().toInt(&ok2, 10)) {
        case 1:
            ui->comboBox_arrivee->clear();
            cb << c2 << c4;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 2:
            ui->comboBox_arrivee->clear();
            cb << c3 << c5 << c7;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 3:
            ui->comboBox_arrivee->clear();
            cb << c6 << c8;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 4:
            ui->comboBox_arrivee->clear();
            cb << c9;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        default:
            break;
        }
        break;
    case 2:
        switch (ui->comboBox_pions->currentText().toInt(&ok2, 10)) {
        case 1:
            ui->comboBox_arrivee->clear();
            cb << c1 << c3 << c5;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 2:
            ui->comboBox_arrivee->clear();
            cb << c4 << c6 << c8;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 3:
            ui->comboBox_arrivee->clear();
            cb << c7 << c9;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        default:
            break;
        }
        break;
    case 3:
        switch (ui->comboBox_pions->currentText().toInt(&ok2, 10)) {
        case 1:
            ui->comboBox_arrivee->clear();
            cb << c2 << c6;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 2:
            ui->comboBox_arrivee->clear();
            cb << c1 << c5 << c9;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 3:
            ui->comboBox_arrivee->clear();
            cb << c4 << c8;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        default:
            break;
        }
        break;
    case 4:
        switch (ui->comboBox_pions->currentText().toInt(&ok2, 10)) {
        case 1:
            ui->comboBox_arrivee->clear();
            cb << c1 << c5 << c7;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 2:
            ui->comboBox_arrivee->clear();
            cb << c2 << c6 << c8;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 3:
            ui->comboBox_arrivee->clear();
            cb << c3 << c9;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        default:
            break;
        }
        break;
    case 5:
        switch (ui->comboBox_pions->currentText().toInt(&ok2, 10)) {
        case 1:
            ui->comboBox_arrivee->clear();
            cb << c2 << c4 << c6 << c8;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 2:
            ui->comboBox_arrivee->clear();
            cb << c1 << c3 << c7 << c9;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 3:
            ui->comboBox_arrivee->clear();
            cb << c2 << c4 << c6 << c8;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        default:
            break;
        }
        break;
    case 6:
        switch (ui->comboBox_pions->currentText().toInt(&ok2, 10)) {
        case 1:
            ui->comboBox_arrivee->clear();
            cb << c3 << c5 << c9;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 2:
            ui->comboBox_arrivee->clear();
            cb << c2 << c4 << c8;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 3:
            ui->comboBox_arrivee->clear();
            cb << c1 << c7;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        default:
            break;
        }
        break;
    case 7:
        switch (ui->comboBox_pions->currentText().toInt(&ok2, 10)) {
        case 1:
            ui->comboBox_arrivee->clear();
            cb << c4 << c8;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 2:
            ui->comboBox_arrivee->clear();
            cb << c1 << c5 << c9;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 3:
            ui->comboBox_arrivee->clear();
            cb << c2 << c6;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        default:
            break;
        }
        break;
    case 8:
        switch (ui->comboBox_pions->currentText().toInt(&ok2, 10)) {
        case 1:
            ui->comboBox_arrivee->clear();
            cb << c5 << c7 << c9;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 2:
            ui->comboBox_arrivee->clear();
            cb << c2 << c4 << c6;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 3:
            ui->comboBox_arrivee->clear();
            cb << c1 << c3;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        default:
            break;
        }
        break;
    case 9:
        switch (ui->comboBox_pions->currentText().toInt(&ok2, 10)) {
        case 1:
            ui->comboBox_arrivee->clear();
            cb << c6 << c8;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 2:
            ui->comboBox_arrivee->clear();
            cb << c3 << c5 << c7;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
        case 3:
            ui->comboBox_arrivee->clear();
            cb << c2 << c4;
            ui->comboBox_arrivee->insertItems(0,cb);
            break;
     }
    default:
        break;
    }
}

/** Remarques sur le plateau de jeu **/
/**
 * Le plateau de jeu fonctionne suivant deux axes, x oriente de gauche à droite, et y de haut en bas.
 * Il s'agit en théorie d'un tableau de 3*3 piles de pions, represente en realite par un tableau horizontal de 9 cases.
 * Les case sont indicees sur chaque axe de 0 à 2.
 * Pour la case (2, 3), on prendra donc la case 3*2+2 soit la case 8.
 */

void letsPlay(const Position2D& firstStack,  const Position2D& secondStack, int n, Color c)
{
    Jeu jeu;
    /**int n; //nombre de pions à bouger
    Position2D firstStack;  //Position de la pile de depart (X et Y)
    Position2D secondStack; //Position de la pile d'arrivee (X et Y)**/

    vector<stack<Pion> >* board = jeu.getBoard();   //Recuperation du plateau de jeu
    if(!jeu.isItEnd())
    {
        /* Action joueur */
        if(jeu.autorizedMove(firstStack, secondStack, n, c))
        {
            jeu.moveStack(board[0][3*firstStack.getY()+firstStack.getX()], board[0][3*secondStack.getY()+secondStack.getX()], n);
        }
        if(jeu.isItEnd())
        {
            if(c==WHITE)
            {
                //Le joueur 1 a gagne
            }
            else
            {
                //Le joueur 2 a gagne
            }
            //Affichage resultats
        }
    }
    else
    fprintf(stderr, "\nERREUR : Le jeu est fini mais le joueur suivant peut quand même rejouer");

}
