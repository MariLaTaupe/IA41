#include<iostream>
#include"Jeu.h"

/**
 * Constructeur par défaut.
 */
Jeu::Jeu()
{
    int i=0;
    //on initialize le vecteur des piles
    for(i=0; i<9; i++)
    {
        stack<Pion> s;
        //On place 2 pions blancs sur chaque case de la rangee du haut (case 0, 1, 2)
        if(i==0 || i==1 || i==2)
        {

            s.push(Pion(WHITE, Position2D(i, 0)));
            s.push(Pion(WHITE, Position2D(i, 0)));
        }
        //On place 2 pions noirs sur chaque case de la rangee du bas (case 6, 7, 8)
        if(i==6 || i==7 || i==8)
        {
            s.push(Pion(BLACK, Position2D(i%3, 3)));
            s.push(Pion(BLACK, Position2D(i%3, 3)));
        }

        _board.push_back(s);
    }

}

/**
 * Constructeur de recopie.
 * @param j : Objet "Jeu" à copier.
 */
Jeu::Jeu(Jeu& j)
{
vector<stack<Pion> >* board = j.getBoard();
this->_board=board[0];
delete(board);
}

/**
 * Operateur d'affection pour les objets "Jeu".
 * @param j : Objet à affecter.
 * @return  L'objet qui a re_u l'affectation.
 */
Jeu& Jeu::operator=(Jeu& j)
{
    vector<stack<Pion> >* board = j.getBoard();
    this->_board=j.getBoard()[0];
    delete(board);
    return *this;
}

/**
 * Getter pour la plateau de Jeu.
 * @return : un pointeur sur le vecteur representant le plateau.
 */
vector<stack<Pion>> * Jeu::getBoard()
{
    return &_board;
}

/**
 * Deplace les n pions du dessus de la pile stack1, sur une autre pile stack2.
 * @param stack1 : pile d'ou proviennent les n pion a déplacer.
 * @param stack2  : pile ou doivent etre deplaces les n pions.
 * @param n : nombre de pion a deplacer, normalement compris entre 1 et 3.
 * @return : vrai si le deplacement a pu etre effectue, faux sinon.
 */
bool Jeu::moveStack(stack<Pion> &stack1, stack<Pion> &stack2, int n)
{
    if(stack1.size()>=n)
    {
        stack<Pion> s; //Pile pour stocker les n pions à deplacer
        //On depile les n premiers pions de stack1 et on les empile dans s.
        for(int i=0; i<n; i++)
        {
            s.push((Pion &&) stack1.top());
            stack1.pop();
        }
        //On depile les n premiers pions de s et on les empile dans stack2.
        for(int i=0; i<n; i++)
        {
            stack2.push((Pion &&) s.top());
            s.pop();
        }
        return true; //On retourne vrai une fois les n pions deplaces.
    }
    else
    {
        return false;
    }
}

/**
 * Affiche l'état du plateau de jeu case par case en console (pile par pile).
 */
void Jeu::printGame()
{
    int i=0, j=0;
    for(i=0; i<9; i++)
    {
        if(!_board[i].empty())
        {
            cout << "\nA l'emplacement : " << i << " ";
            _board[i].top().getPosition().printCoordinates();
            cout << " Pion du dessus : " << this->_board[i].top().getColorS();
        }
        else
        {
            cout << "\nA l'emplacement : " << i << " ";
            cout << " vide";
        }
    }
}



