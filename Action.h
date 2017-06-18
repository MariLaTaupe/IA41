/*
 *  Created by P. Daudre-Treuil and A.S Berre on 06/2017
 */

#include <iostream>
#include <stack>
#include "Pion.h"

using namespace std;

/*
 * Classe correspondant a un coup effectue par un joueur sur le jeu du Pogo
 * Les implementations correspondantes se trouvent dans le fichiers "Action.cpp"
 */
class Action {
private:

    /*Coordonnees de la pile de "depart", elle correspond a la pile d'ou sont deplaces les pions*/
    Position2D _firstStack;

    /*Coordonnees de la pile "d'arrivee", elle correspond a la pile ou sont deposes les pions*/
    Position2D _secondStack;

    /*Nombre de pions deplaces, vaut 1, 2, ou 3*/
    int _n;

    /*Couleur du joueur qui effectue le mouvement*/
    Color _player;

public:

    Action(Position2D p1, Position2D p2, int n, Color c);
    Action(Action& a);
    ~Action(){};
    Action& operator=(const Action& a);
    Position2D& getFirstStack();
    Position2D& getSecondStack();
    int getN();
    void setN(int new_n);
    Color getPlayer();
    void SetPlayer(Color new_color);
};

