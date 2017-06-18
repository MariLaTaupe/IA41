/*
 *  Created by P. Daudre-Treuil and A.S Berre on 06/2017
 */

#include<iostream>
#include<vector>
#include<stack>

#include"Action.h"

using namespace std;

/*
 * Classe pour le jeu en lui même (plateau, piles de pions et regles)
 * L'implementation des fonction est disponibles dans le fichier "Jeu.cpp"
 */

class Jeu{
private :

    /*plateau de Jeu*/
    vector<stack<Pion> > _board;

public:

    Jeu();
    Jeu(Jeu& j);
    ~Jeu(){};
    Jeu& operator=(Jeu& j);
    vector<stack<Pion>> * getBoard();
    bool moveStack(stack<Pion> &stack1, stack<Pion> &stack2, int n);
    bool autorizedMove(const Position2D &stack1, const Position2D &stack2, int n, Color playerColor);
    bool isItEnd();
    void printGame();


};
