#include<iostream>

class Position2D
{
private :
	int _x;
	int _y;

public :
	Position2D() : _x(), _y(){}
	Position2D(const Position2D& p) : _x(p._x), _y(p._y){}
	Position2D(int _newX, int _newY) : _x(_newX), _y(_newY){}
	~Position2D(){}
	Position2D& operator=(const Position2D& p);
	int getX() const;
	int getY() const;
	void printCoordinates() const;
};
