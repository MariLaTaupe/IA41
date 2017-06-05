//#include "mainwindow.h"
//#include <QApplication>
#include<iostream>

//#include"Jeu.cpp"
#include"Jeu.h"

using namespace std;

int main(int argc, char *argv[])
{
    /*QApplication a(argc, argv);
    MainWindow w;
    w.show();*/

    Position2D p(2, 3);
    p.printCoordinates();
    Jeu jeu;
    jeu.printGame();
    //return a.exec();
    stack<Pion> s;
    Pion pion(BLACK, Position2D(7, 3));
    Pion pion2(BLACK, Position2D(7, 3));
    vector<stack<Pion> >* board = jeu.getBoard();
    jeu.getBoard()[0][1].push(pion);
    jeu.getBoard()[0][0].push(pion2);
    cout << "\n";
    jeu.printGame();
    cout << "\n";
    //cout << jeu.moveStack(board[0][8], board[0][2], 1);
    jeu.printGame();
    jeu.isItEnd();
    return 0;
}
