/*
 *  Created by P. Daudre-Treuil and A.S Berre on 06/2017
 */

#include<iostream>
#include"Position2D.h"

/**
 * Fonctions associees a une position en 2D. Les entetes des fonctions sont disponibles dans le fichier "Position2D.h"
 */

/**
 * Operateur d'affection.
 */
Position2D& Position2D::operator=(const Position2D& p)
{
	this->_x = p.getX();
	this->_y = p.getY();
	return *this;
}

/**
 * Permet de recuperer l'abscisse de la position
 * @return : l'abscisse x de la position
 */
int Position2D::getX() const
{
    return _x;
}

/**
 * Permet de recuperer l'ordonne de la position
 * @return  : l'ordonne y de la position
 */
int Position2D::getY() const
{
    return _y;
}

/**
 * Permet de changer la composante x de la position
 * @param new_x : nouvelle abscisse x
 */
void Position2D::setX(int new_x)
{
    this->_x=new_x;
}

/**
 * Permet de changer la composante y de la position
 * @param new_y : nouvelle ordonnee y
 */
void Position2D::setY(int new_y)
{
    this->_y=new_y;
}

/**
 * Permet d'afficher les coordonnees de la position au format (x;y)
 */
void Position2D::printCoordinates() const
{
    std::cout << '(' << this->getX() << ';' << this->getY() << ')';
}





