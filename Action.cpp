/*
 *  Created by P. Daudre-Treuil and A.S Berre on 06/2017
 */

#include "Action.h"

/**
 * Fonctions associees a une action sur le jeu Pogo. Les entetes des fonctions sont disponibles dans le fichier
 * "Action.h"
 */


/**
 * Constructeur avec parametres.
 * @param p1 : coordonnees de la pile de depart
 * @param p2 : coordonnees de la pile d'arrivee
 * @param n : nombre de pions a deplacer
 * @param c : couleur du joueur qui effectue le mouvement
 */
Action::Action(Position2D p1, Position2D p2, int n, Color c)
{
    this->_firstStack=p1;
    this->_secondStack=p2;
    this->_n=n;
    this->_player=c;
}

/**
 * Constructeur de recopie
 */
Action::Action(Action& a)
{
    this->_firstStack=a.getFirstStack();
    this->_secondStack=a.getSecondStack();
    this->_n=a.getN();
    this->_player=a.getPlayer();

}

/**
 * Operateur d'affection.
 */
Action &Action::operator=(const Action &a)
{
    return *this;
}

/**
 * @return : la pile de depart
 */
Position2D &Action::getFirstStack()
{
    return this->_firstStack;
}

/**
 * @return : la pile d'arrivee
 */
Position2D &Action::getSecondStack()
{
    return this->_secondStack;
}

/**
 * @return : le nombre de pion deplaces lors du coup
 */
int Action::getN() {
    return this->_n;
}

/**
 * @param new_n : nouvelle valeur a affecter au nombre de pions deplaces
 */
void Action::setN(int new_n)
{
    this->_n=new_n;
}

/**
 * @return : la couleur du joueur qui effectue le mouvement
 */
Color Action::getPlayer()
{
    return this->_player;
}

/**
 * @param new_color : nouvelle couleur du joueur
 */
void Action::SetPlayer(Color new_color)
{
    this->_player=new_color;
}

