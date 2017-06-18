#include <QApplication>
#include<iostream>
#include <cstdio>

#include "mainwindow.h"
#include "nouvellepartie.h"


using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    NouvellePartie n;
    n.show();
    return a.exec();

}
