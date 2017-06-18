/*
 *  Created by P. Daudre-Treuil and A.S Berre on 06/2017
 */

#include<iostream>
#include"Pion.h"

/*Fonctions associees aux pions du jeu Pogo. Les entetes des fonctions se trouvent dans le fichier "Pion.h"*/

/**
 * Operateur d'affectation
 */
Pion& Pion::operator=(const Pion& p)
{
    _color=p._color;
    return *this;
}

/**
 * @return : La couleur du Pion
 */
Color Pion::getColor()
{
    return _color;
}

/**
 * @return : La couleur du pion sous forme de chaine de caractere (pour l'affichage en console)
 */
string Pion::getColorS()
{
    string s;
    if(_color==WHITE)
    {
        s="White";
    }
    else
    {
        s="Black";
    }
    return s;
}

