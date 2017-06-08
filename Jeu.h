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
    bool autorizedMove(const Position2D &stack1, const Position2D &stack2, int n, Color playerColor);
    //bool autorizedMove(stack<Pion> &stack1, stack<Pion> &stack2, int n, Color playerColor);
    bool isItEnd();
    void printGame();


};
