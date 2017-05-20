#include "mainwindow.h"
#include "nouvellepartie.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    NouvellePartie n;
    n.show();

    return a.exec();
}
