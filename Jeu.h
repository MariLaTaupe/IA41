#include<iostream>
#include<vector>
#include<stack>

#include"Pion.h"

using namespace std;

class Jeu{
private :
    //plateau de Jeu.
    vector<stack<Pion> > _board;

public:

    Jeu();
    Jeu(Jeu& j);
    ~Jeu(){};
    Jeu& operator=(Jeu& j);
    vector<stack<Pion>> * getBoard();
    bool moveStack(stack<Pion> &stack1, stack<Pion> &stack2, int n);
    bool isItEnd();
    void printGame();


};
