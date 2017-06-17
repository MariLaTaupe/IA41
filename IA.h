//
// Created by Anne-Sophie on 10/06/2017.
//

#include "Jeu.h"

#ifndef IA41_IA_H
#define IA41_IA_H

int evaluate2(Jeu& j, Color c);
Action MinMax(Jeu j, Color c, int length);
int MaxValue(Jeu j, Color c, int length);
int MinValue(Jeu j, Color c, int length);


#endif //IA41_IA_H
