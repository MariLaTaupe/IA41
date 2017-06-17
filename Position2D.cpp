#include<iostream>

#include"Position2D.h"

Position2D& Position2D::operator=(const Position2D& p)
{
	this->_x = p.getX();
	this->_y = p.getY();
	return *this;
}

int Position2D::getX() const
{
    return _x;
}

int Position2D::getY() const
{
    return _y;
}

void Position2D::setX(int new_x)
{
    this->_x=new_x;
}

void Position2D::setY(int new_y)
{
    this->_y=new_y;
}

void Position2D::printCoordinates() const
{
    std::cout << '(' << this->getX() << ';' << this->getY() << ')';
}





