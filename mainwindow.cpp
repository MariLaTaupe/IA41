#include <iostream>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "nouvellepartie.h"
#include "ui_nouvellepartie.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) // TODO : initialiser à partir du modèle
{
    ui->setupUi(this);

    jeu = new Jeu();

    pionsLabel2[0] = 1; // Case en haut à gauche
    pionsLabel2[1] = -1; // -1 : pas de pions
    pionsLabel2[2] = -1; // 1 : WHITE
    pionsLabel2[3] = -1; // 2 : BLACK
    pionsLabel2[4] = -1;

    pionsLabel3[0] = 1; // Case en haut à droite
    pionsLabel3[1] = -1;
    pionsLabel3[2] = -1;
    pionsLabel3[3] = -1;
    pionsLabel3[4] = -1;

    pionsLabel4[0] = 1; // Case en haut au millieu
    pionsLabel4[1] = -1;
    pionsLabel4[2] = -1;
    pionsLabel4[3] = -1;
    pionsLabel4[4] = -1;

    pionsLabel5[0] = 2; // Case en bas à droite
    pionsLabel5[1] = -1;
    pionsLabel5[2] = -1;
    pionsLabel5[3] = -1;
    pionsLabel5[4] = -1;

    pionsLabel6[0] = 2; // Case en bas au millieu
    pionsLabel6[1] = -1;
    pionsLabel6[2] = -1;
    pionsLabel6[3] = -1;
    pionsLabel6[4] = -1;

    pionsLabel7[0] = 2; // Case en bas à gauche
    pionsLabel7[1] = -1;
    pionsLabel7[2] = -1;
    pionsLabel7[3] = -1;
    pionsLabel7[4] = -1;

    pionsLabel8[0] = -1; // Case au millieu à gauche
    pionsLabel8[1] = -1;
    pionsLabel8[2] = -1;
    pionsLabel8[3] = -1;
    pionsLabel8[4] = -1;

    pionsLabel9[0] = -1; // Case centrale
    pionsLabel9[1] = -1;
    pionsLabel9[2] = -1;
    pionsLabel9[3] = -1;
    pionsLabel9[4] = -1;

    pionsLabel10[0] = -1; // Case au millieu à droite
    pionsLabel10[1] = -1;
    pionsLabel10[2] = -1;
    pionsLabel10[3] = -1;
    pionsLabel10[4] = -1;

    displayLabel();

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

void MainWindow::displayLabel(){

    int wid,hei;
    wid = ui->label_2->geometry().width();
    hei = ui->label_2->geometry().height();

    QPixmap pixmap2(wid,hei);
    pixmap2.fill(QColor("white"));
    QPainter painter2(&pixmap2);

    QPixmap pixmap3(wid,hei);
    pixmap3.fill(QColor("white"));
    QPainter painter3(&pixmap3);

    QPixmap pixmap4(wid,hei);
    pixmap4.fill(QColor("white"));
    QPainter painter4(&pixmap4);

    QPixmap pixmap5(wid,hei);
    pixmap5.fill(QColor("white"));
    QPainter painter5(&pixmap5);

    QPixmap pixmap6(wid,hei);
    pixmap6.fill(QColor("white"));
    QPainter painter6(&pixmap6);

    QPixmap pixmap7(wid,hei);
    pixmap7.fill(QColor("white"));
    QPainter painter7(&pixmap7);

    QPixmap pixmap8(wid,hei);
    pixmap8.fill(QColor("white"));
    QPainter painter8(&pixmap8);

    QPixmap pixmap9(wid,hei);
    pixmap9.fill(QColor("white"));
    QPainter painter9(&pixmap9);

    QPixmap pixmap10(wid,hei);
    pixmap10.fill(QColor("white"));
    QPainter painter10(&pixmap10);

    int i=0;

    for(i=0;i<4;++i){
        if(pionsLabel2[i] != -1){
            if(pionsLabel2[i] == 1){
                painter2.setBrush(QBrush(Qt::red));
            }else if(pionsLabel2[i] == 2){
                painter2.setBrush(QBrush(Qt::blue));
            }
            painter2.drawEllipse( 60, 130 - 25*i, 80, 50);
        }

        if(pionsLabel3[i] != -1){
            if(pionsLabel3[i] == 1){
                painter3.setBrush(QBrush(Qt::red));
            }else if(pionsLabel3[i] == 2){
                painter3.setBrush(QBrush(Qt::blue));
            }
            painter3.drawEllipse( 60, 130 - 25*i, 80, 50);
        }

        if(pionsLabel4[i] != -1){
            if(pionsLabel4[i] == 1){
                painter4.setBrush(QBrush(Qt::red));
            }else if(pionsLabel4[i] == 2){
                painter4.setBrush(QBrush(Qt::blue));
            }
            painter4.drawEllipse( 60, 130 - 25*i, 80, 50);
        }

        if(pionsLabel5[i] != -1){
            if(pionsLabel5[i] == 1){
                painter5.setBrush(QBrush(Qt::red));
            }else if(pionsLabel5[i] == 2){
                painter5.setBrush(QBrush(Qt::blue));
            }
            painter5.drawEllipse( 60, 130 - 25*i, 80, 50);
        }

        if(pionsLabel6[i] != -1){
            if(pionsLabel6[i] == 1){
                painter6.setBrush(QBrush(Qt::red));
            }else if(pionsLabel6[i] == 2){
                painter6.setBrush(QBrush(Qt::blue));
            }
            painter6.drawEllipse( 60, 130 - 25*i, 80, 50);
        }

        if(pionsLabel7[i] != -1){
            if(pionsLabel7[i] == 1){
                painter7.setBrush(QBrush(Qt::red));
            }else if(pionsLabel7[i] == 2){
                painter7.setBrush(QBrush(Qt::blue));
            }
            painter7.drawEllipse( 60, 130 - 25*i, 80, 50);
        }

        if(pionsLabel8[i] != -1){
            if(pionsLabel8[i] == 1){
                painter8.setBrush(QBrush(Qt::red));
            }else if(pionsLabel8[i] == 2){
                painter8.setBrush(QBrush(Qt::blue));
            }
            painter8.drawEllipse( 60, 130 - 25*i, 80, 50);
        }

        if(pionsLabel9[i] != -1){
            if(pionsLabel9[i] == 1){
                painter9.setBrush(QBrush(Qt::red));
            }else if(pionsLabel9[i] == 2){
                painter9.setBrush(QBrush(Qt::blue));
            }
            painter9.drawEllipse( 60, 130 - 25*i, 80, 50);
        }

        if(pionsLabel10[i] != -1){
            if(pionsLabel10[i] == 1){
                painter10.setBrush(QBrush(Qt::red));
            }else if(pionsLabel10[i] == 2){
                painter10.setBrush(QBrush(Qt::blue));
            }
            painter10.drawEllipse( 60, 130 - 25*i, 80, 50);
        }

    }

    ui->label_2->setPixmap(pixmap2);
    ui->label_3->setPixmap(pixmap3);
    ui->label_4->setPixmap(pixmap4);
    ui->label_5->setPixmap(pixmap5);
    ui->label_6->setPixmap(pixmap6);
    ui->label_7->setPixmap(pixmap7);
    ui->label_8->setPixmap(pixmap8);
    ui->label_9->setPixmap(pixmap9);
    ui->label_10->setPixmap(pixmap10);

}

void MainWindow::on_pushButton_ok_clicked()
{
    bool ok;
    int  nbPions;
    Position2D caseDepart, caseArrivee;
    QString caseDepartString, caseArriveeString;

    nbPions = ui->comboBox_pions->currentText().toInt(&ok, 10);

    caseDepartString = ui->comboBox_depart->currentText();
    if(caseDepartString == "A1"){
        caseDepart = Position2D(1,1);
    }else if(caseDepartString == "A2") {
        caseDepart = Position2D(1,2);
    }else if(caseDepartString == "A3") {
        caseDepart = Position2D(1,3);
    }else if(caseDepartString == "B1") {
        caseDepart = Position2D(2,1);
    }else if(caseDepartString == "B2") {
        caseDepart = Position2D(2,2);
    }else if(caseDepartString == "B3") {
        caseDepart = Position2D(2,3);
    }else if(caseDepartString == "C1") {
        caseDepart = Position2D(3,1);
    }else if(caseDepartString == "C2") {
        caseDepart = Position2D(3,2);
    }else if(caseDepartString == "C3") {
        caseDepart = Position2D(3,3);
    }

    caseArriveeString = ui->comboBox_arrivee->currentText();
    if(caseArriveeString == "A1"){
        caseArrivee = Position2D(1,1);
    }else if (caseArriveeString == "A2") {
        caseArrivee = Position2D(1,2);
    }else if (caseArriveeString == "A3") {
        caseArrivee = Position2D(1,3);
    }else if (caseArriveeString == "B1") {
        caseArrivee = Position2D(2,1);
    }else if (caseArriveeString == "B2") {
        caseArrivee = Position2D(2,2);
    }else if (caseArriveeString == "B3") {
        caseArrivee = Position2D(2,3);
    }else if (caseArriveeString == "C1") {
        caseArrivee = Position2D(3,1);
    }else if (caseArriveeString == "C2") {
        caseArrivee = Position2D(3,2);
    }else if (caseArriveeString == "C3") {
        caseArrivee = Position2D(3,3);
    }

    if(color == WHITE){
       if(joueur1 == 1){
           letsPlay(caseDepart, caseArrivee, nbPions, WHITE);
           color = BLACK;
       }else{
           //Rendre le layout vertical innacessible et faire jouer l'ia
       }
    }else{
        if(joueur2 == 1){
            letsPlay(caseDepart, caseArrivee, nbPions, BLACK);
            color = WHITE;
        }else{
            //Rendre le layout vertical innacessible et faire jouer l'ia
        }
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

void MainWindow::letsPlay(const Position2D& firstStack,  const Position2D& secondStack, int n, Color c)
{
    /**int n; //nombre de pions à bouger
    Position2D firstStack;  //Position de la pile de depart (X et Y)
    Position2D secondStack; //Position de la pile d'arrivee (X et Y)**/

    vector<stack<Pion> >* board = jeu->getBoard();   //Recuperation du plateau de jeu
    if(!jeu->isItEnd())
    {
        /* Action joueur */
        if(jeu->autorizedMove(firstStack, secondStack, n, c))
        {
            jeu->moveStack(board[0][3*firstStack.getY()+firstStack.getX()], board[0][3*secondStack.getY()+secondStack.getX()], n);
        }
        if(jeu->isItEnd())
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
