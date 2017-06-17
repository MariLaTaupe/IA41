//
// Created by Anne-Sophie on 11/06/2017.
//

#include <iostream>
#include <stack>
#include "Pion.h"

using namespace std;

class Action {
private:
    Position2D _firstStack;
    Position2D _secondStack;
    int _n;
    Color _player;

public:
    Action(Position2D p1, Position2D p2, int n, Color c);
    Action(const Action& a);
    ~Action(){};
    Action& operator=(const Action& a);
    Position2D& getFirstStack();
    Position2D& getSecondStack();
    int getN();
    void setN(int new_n);
    Color getPlayer();
    void SetPlayer(Color new_color);
};

