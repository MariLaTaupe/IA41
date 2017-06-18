#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QPixmap>
#include <QLabel>

#include "nouvellepartie.h"
//#include "Jeu.h"
#include "IA.h"
//#include "Action.h"


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
    void on_pushButton_ok_clicked();
    void on_comboBox_depart_currentIndexChanged(const QString &arg1); // Cette fonction et la suivante permettent de toujours proposé la case d'arrivée
    void on_comboBox_pions_currentIndexChanged(const QString &arg1); // en fonction de la case de départ et du nombre de pions sélectionnés

public slots:
    void displayLabel(); // fonction raffrechissant l'affichage
    void letsPlay(const Position2D &firstStack, const Position2D &secondStack, int n, Color c); // fonction lancant l'ia
    void changeBoard(int labelDepart, int labelArrivee, int nbPions); // c'est trois fonctions se succédent pour changer la position des pions
    void changeBoard(int depart[5], int labelArrivee, int nbPions); // en fonction des cases de départ et d'arrivée et du nombre de pions
    void changeBoard(int depart[5], int arrivee[5], int nbPions);
    void iaPlay();

private:
    Ui::MainWindow *ui;
    Jeu jeu;
    int joueur1;
    int joueur2;
    Color color;

    QString c1;
    QString c2;
    QString c3;
    QString c4;
    QString c5;
    QString c6;
    QString c7;
    QString c8;
    QString c9;

    int pionsLabel2[5]; // la représentation des cases
    int pionsLabel3[5];
    int pionsLabel4[5];
    int pionsLabel5[5];
    int pionsLabel6[5];
    int pionsLabel7[5];
    int pionsLabel8[5];
    int pionsLabel9[5];
    int pionsLabel10[5];
};

#endif // MAINWINDOW_H
