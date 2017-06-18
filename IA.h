/*
 *  Created by P. Daudre-Treuil and A.S Berre on 06/2017
 */


/**
 * Fonctions associees a l'IA du jeu Pogo. L'implementation des fonctions est disponible dans le fichier "IA.cpp"
 */

#include "Jeu.h"

#ifndef IA41_IA_H
#define IA41_IA_H

int evaluate2(Jeu& j, Color c);
Action MinMax(Jeu j, Color c, int length);
int MaxValue(Jeu j, Color c, int length);
int MinValue(Jeu j, Color c, int length);


#endif //IA41_IA_H
