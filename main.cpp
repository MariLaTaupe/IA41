#include "mainwindow.h"
#include "nouvellepartie.h"

#include <QApplication>
#include<iostream>

#include "letsPLay.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();
    NouvellePartie n;
    n.show();

    return a.exec();

    /**Position2D p(2, 3);
    p.printCoordinates();
    Jeu jeu;
    jeu.printGame();
    vector<stack<Pion> >* board = jeu.getBoard();
    stack<Pion> s;
    Pion pion(BLACK, Position2D(7, 3));
    Pion pion2(BLACK, Position2D(7, 3));

    jeu.getBoard()[0][1].push(pion);
    jeu.getBoard()[0][0].push(pion2);
    cout << "\n";
    jeu.printGame();
    cout << "\n";
    //cout << jeu.moveStack(board[0][8], board[0][2], 1);
    jeu.printGame();
    jeu.isItEnd();
    Position2D p1(1, 0);
    Position2D p2(0, 1);
    cout << "\n" << jeu.autorizedMove(p1, p2, 2, WHITE);
    return 0;*/
}
