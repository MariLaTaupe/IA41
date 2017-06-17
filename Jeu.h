/*
 *  Created by P. Daudre-Treuil and A.S Berre on 06/2017
 */

#include<iostream>
#include<vector>
#include<stack>

#include"Action.h"

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

    /**
     * Getter pour la plateau de Jeu.
     * @return : un pointeur sur le vecteur representant le plateau.
     */
    vector<stack<Pion>> * getBoard();

    /**
     * Deplace les n pions du dessus de la pile stack1, sur une autre pile stack2.
     * Ne verifie pas si le déplacement est autorisé, vérifie juste si on le nombre de pion à déplacer est correct.
     * @param stack1 : pile d'ou proviennent les n pion a déplacer.
     * @param stack2  : pile ou doivent etre deplaces les n pions.
     * @param n : nombre de pion a deplacer, normalement compris entre 1 et 3.
     * @return : vrai si le deplacement a pu etre effectue, faux sinon.
     */
    bool moveStack(stack<Pion> &stack1, stack<Pion> &stack2, int n);

    /**
     * Teste si un mouvement de pile est autorise.
     * @param stack1 pile sur laquelle on preleve des pion.
     * @param stack2 pile sur laquelle on depose des jetons
     * @param n nombre de pions a deplacer
     * @param playerColor couleur du joueur qui souhaite deplacer les pions
     * @return vrai si le mouvement est valide, faus sinon
     */
    bool autorizedMove(const Position2D &stack1, const Position2D &stack2, int n, Color playerColor);

    /**
     * Verifie si le jeu est termine ou non, et su oui, affiche le joueur gagnant
     * (Joueur 1 : pions blancs, Joueur 2 : pions noirs)
     * @return vrai si tout les pions superieurs ont la meme couleur
     */
    bool isItEnd();

    /**
     * Affiche l'état du plateau de jeu case par case en console (pile par pile).
     */
    void printGame();


};
