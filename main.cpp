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
    vector<stack<Pion> >* board = jeu.getBoard();
    jeu.getBoard()[0][1].push(pion);
    cout << "\n";
    jeu.printGame();
    cout << "\n";
    cout << jeu.moveStack(board[0][2], board[0][3], 3);
    jeu.printGame();
    return 0;
}
