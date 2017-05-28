#include "mainwindow.h"
#include <QApplication>
#include<iostream>

//#include"Jeu.cpp"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    /**Position2D p(2, 3);
    p.printCoordinates();
    Jeu jeu;
    jeu.printGame();*/
    return a.exec();
    //return 0;
}
