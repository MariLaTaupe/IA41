/*
 *  Created by P. Daudre-Treuil and A.S Berre on 06/2017
 */

#include<iostream>
#include"Position2D.h"

using namespace std;

/**
 * Couleurs que peut utiliser un joueur de Pogo. L'implementation des fonction se trouve dans le fichier "Pion.cpp"
 */
enum Color{WHITE, BLACK};

/**
 * Classe pour les pions du jeu Pogo
 */
class Pion {

private:

    /*Couleur du pion*/
	Color _color;

public:
    Pion(Color c): _color(c){}
    Pion(const Pion& p) : _color(p._color){}
    ~Pion(){}
    Pion& operator=(const Pion& p);
    Color getColor();
    string getColorS();
};
