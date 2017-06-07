//
// Created by Anne-Sophie on 05/06/2017.
//

#include <iostream>

#include "letsPLay.h"

/** Remarques sur le plateau de jeu **/
/**
 * Le plateau de jeu fonctionne suivant deux axes, x oriente de gauche à droite, et y de haut en bas.
 * Il s'agit en théorie d'un tableau de 3*3 piles de pions, represente en realite par un tableau horizontal de 9 cases.
 * Pour la case (2, 3), on prendra donc la case 3*3+2 soit la case 8.
 */

void letsPlay()
{
    Jeu jeu;
    int n; //nombre de pions à bouger
    Position2D firstStack;  //Position de la pile de depart (X et Y)
    Position2D secondStack; //Position de la pile d'arrivee (X et Y)
    vector<stack<Pion> >* board = jeu.getBoard();   //Recuperation du plateau de jeu
    while(!jeu.isItEnd())
    {
        /**
         * Actions joueur 1 :
         * //acquisition coup joueur 1
         * while(!jeu.autorizedMove(firstStack, secondStack, n, WHITE))
         * {
         *      //acquisition coup joueur 1
         * }
         * jeu.moveStack(board[0][3*firstStack.getY()+firstStack.getX()], board[0][3*secondStack.getY()+secondStack.getX()], n);
         */
        if(!jeu.isItEnd())
        {
            /**Action joueur 2 :
             * //acquisition coup joueur 2
             * while(!jeu.autorizedMove(firstStack, secondStack, n, BLACK))
             * {
             *      //acquisition coup joueur 2
             * }
             * jeu.moveStack(board[0][3*firstStack.getY()+firstStack.getX()], board[0][3*secondStack.getY()+secondStack.getX()], n);
             */
        }
    }
}

