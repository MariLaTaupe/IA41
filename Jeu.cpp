#include<iostream>
#include"Jeu.h"

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

vector<stack<Pion> > Jeu::getBoard() const
{
    return _board;
}
