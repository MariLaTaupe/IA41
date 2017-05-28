#include<iostream>

#include"Position2D.cpp"

using namespace std;

enum Color{WHITE, BLACK};

class Pion {

private:
	Color _color;
	Position2D _position;

public:
    Pion(Color c, const Position2D& p): _color(c), _position(p){}
    Pion(const Pion& p) : _color(p._color), _position(p._position){}
    ~Pion(){}
    Pion& operator=(const Pion& p);
    Color getColor();
    Position2D& getPosition();
    void setPosition(const Position2D& p);
    string getColorS();
};
