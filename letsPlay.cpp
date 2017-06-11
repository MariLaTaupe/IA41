//
// Created by Anne-Sophie on 05/06/2017.
//

#include <iostream>
#include <cstdio>

#include "letsPlay.h"

/** Remarques sur le plateau de jeu **/
/**
 * Le plateau de jeu fonctionne suivant deux axes, x oriente de gauche à droite, et y de haut en bas.
 * Il s'agit en théorie d'un tableau de 3*3 piles de pions, represente en realite par un tableau horizontal de 9 cases.
 * Les case sont indicees sur chaque axe de 0 à 2.
 * Pour la case (2, 3), on prendra donc la case 3*2+2 soit la case 8.
 */

void letsPlay(const Position2D& firstStack,  const Position2D& secondStack, int n, Color c)
{
    Jeu jeu;
    /**int n; //nombre de pions à bouger
    Position2D firstStack;  //Position de la pile de depart (X et Y)
    Position2D secondStack; //Position de la pile d'arrivee (X et Y)**/

    vector<stack<Pion> >* board = jeu.getBoard();   //Recuperation du plateau de jeu
    if(!jeu.isItEnd())
    {
        /* Action joueur */
        if(jeu.autorizedMove(firstStack, secondStack, n, c))
        {
            jeu.moveStack(board[0][3*firstStack.getY()+firstStack.getX()], board[0][3*secondStack.getY()+secondStack.getX()], n);
        }
        if(jeu.isItEnd())
        {
            if(c==WHITE)
            {
                //Le joueur 1 a gagne
            }
            else
            {
                //Le joueur 2 a gagne
            }
            //Affichage resultats
        }
    }
    else
    fprintf(stderr, "\nERREUR : Le jeu est fini mais le joueur suivant peut quand même rejouer");

}


