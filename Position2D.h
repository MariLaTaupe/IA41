/*
 *  Created by P. Daudre-Treuil and A.S Berre on 06/2017
 */

#include<iostream>

/*
 * Classe destinee a stocker une position sur une carte en 2D. Ses composantes sont entieres
 * L'implementation des fonctions est disponible dans le fichier "Position2D.cpp"
 */
class Position2D
{
private :

    /*Abscisse entiere de la position*/
	int _x;

    /*Ordonnee entiere de la position*/
	int _y;

public :
	Position2D() : _x(), _y(){}
	Position2D(const Position2D& p) : _x(p._x), _y(p._y){}
	Position2D(int _newX, int _newY) : _x(_newX), _y(_newY){}
	~Position2D(){}
	Position2D& operator=(const Position2D& p);
	int getX() const;
	int getY() const;
	void setX(int new_x);
	void setY(int new_y);
	void printCoordinates() const;
};
