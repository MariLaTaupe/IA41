//
// Created by Anne-Sophie on 11/06/2017.
//

#include "Action.h"

Action::Action(Position2D p1, Position2D p2, int n, Color c)
{
    this->_firstStack=p1;
    this->_secondStack=p2;
    this->_n=n;
    this->_player=c;
}

Action::Action(const Action& a)
{}

Action &Action::operator=(const Action &a) {
    return *this;
}

Position2D &Action::getFirstStack() {
    return this->_firstStack;
}

Position2D &Action::getSecondStack() {
    return this->_secondStack;
}

int Action::getN() {
    return this->_n;
}

void Action::setN(int new_n) {
    this->_n=new_n;
}

Color Action::getPlayer() {
    return this->_player;
}

void Action::SetPlayer(Color new_color) {
    this->_player=new_color;
}

