/*
 *  Created by P. Daudre-Treuil and A.S Berre on 06/2017
 */

#include "Jeu.h"

#ifndef IA41_IA_H
#define IA41_IA_H

/**
 * Fonction destinee a une evaluation du jeu lors d'un minmax avec profondeur donnee.
 * @param j : jeu à evaluer
 * @param c : couleur du joueur incarne par l'IA
 * @return : le nombre de pile possedees par l'IA (dont le premier pion est de sa couleur) moins le nombre de pile
 * possedees par l'adversaire.
 */
int evaluate2(Jeu& j, Color c);

/**
 * Fonction basee sur l'heuristique "MinMax". Elle permet de determiner la meilleure action a effectuer pour un joueur
 * sur un jeu de Pogo donne. La case de laquelle est retiree un ou plusieurs pions est appelee case de depart, celle ou
 * les pions sont deposes d'arrivee"
 * @param j : jeu (plateau) sur lequel le joueur doit effectuer on action. La disposition des pieces est telle qu'au
 * moment ou le joueur doit agir
 * @param c : couleur du joueur qui a la main
 * @param length : profondeur a laquelle s'arrete l'heuristique
 * @return : la meilleure action a effectuer.
 */
Action MinMax(Jeu j, Color c, int length);

/**
 * Fonction MaxValue liee a l'heuristique MinMax. Elle est appelee par la fonction MinMax.
 * Elle determine le coup a effectuer sur un jeu donne afin d'obtenir la situation la plus favorable au joueur
 * (evaluation la plus grande)
 * @param j : jeu (plateau) sur lequel le joueur doit effectuer on action. La disposition des pieces est telle qu'au
 * moment ou le joueur doit agir
 * @param c : couleur du joueur qui a la main
 * @param length : profondeur a laquelle s'arrete l'heuristique
 * @return : la valeur d'evaluation de la meilleure action a effectuer.
 */
int MaxValue(Jeu j, Color c, int length);

/**
 * Fonction MinValue liee a l'heuristique MinMax. Elle est appelee par la fonction MaxValue.
 * Elle determine le coup a effectuer sur un jeu donne afin d'obtenir la situation la plus defavorable au joueur
 * (evaluation la plus petite)
 * @param j : jeu (plateau) sur lequel le joueur doit effectuer on action. La disposition des pieces est telle qu'au
 * moment ou le joueur doit agir
 * @param c : couleur du joueur qui a la main
 * @param length : profondeur a laquelle s'arrete l'heuristique
 * @return : la valeur d'evaluation de la plus mauvaise action a effectuer.
 */
int MinValue(Jeu j, Color c, int length);


#endif //IA41_IA_H
