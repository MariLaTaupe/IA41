//
// Created by Anne-Sophie on 11/06/2017.
//

#include <iostream>
#include <stack>
#include "Pion.h"

using namespace std;

class Action {
private:
    stack<Pion> _firstStack;
    stack<Pion> _secondStack;
    int _n;
    Color _player;

public:
    Action(stack<Pion> p1, stack<Pion> p2, int n, Color c);
    Action(const Action& a);
    ~Action(){};
    Action& operator=(const Action& a);
    stack<Pion>& getFirstStack();
    stack<Pion>& getSecondStack();
    int getN();
    void setN(int new_n);
    Color getPlayer();
    void SetPlayer(Color new_color);
};

