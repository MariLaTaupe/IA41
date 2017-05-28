#include<iostream>

#include"Pion.h"

Pion& Pion::operator=(const Pion& p)
{
    _color=p._color;
    _position=p._position;
    return *this;
}

Color Pion::getColor()
{
    return _color;
}

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

Position2D& Pion::getPosition()
{
    return _position;
}

void Pion::setPosition(const Position2D& p)
{
    _position=p;
}

