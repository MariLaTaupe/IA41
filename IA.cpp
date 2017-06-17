//
// Created by Anne-Sophie on 10/06/2017.
//

#include "IA.h"


/**
 * Fonction destinee a une evaluation complete du jeu lors d'une heuristique min-max complete.
 * @param j : jeu à evaluer
 * @param c : couleur du joueur incarne par l'IA
 * @return : 0 si la partie n'est pas finie, -1 si elle est perdu par l'IA, 1 si elle est gagnee par l'IA
 */
/**int evaluate1(Jeu& j, Color c)
{
    vector<stack<Pion> >* board = j.getBoard();
    int i=0;
    if(j.isItEnd())
    {
        while(board[0][i].empty())
        {
            i++;
        }
        if(board[0][i].top().getColor()==c)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return 0;
    }
}*/

/**
 * Fonction destinee a une evaluation du jeu lors d'un minmax avec profondeur donnee.
 * @param j : jeu à evaluer
 * @param c : couleur du joueur incarne par l'IA
 * @return : le nombre de pile possedees par l'IA (dont le premier pion est de sa couleur)
 * moins le nombre de pile possedees par l'adversaire.
 */
int evaluate2(Jeu& j, Color c)
{
    vector<stack<Pion> >* board = j.getBoard();
    int black=0, white=0, eval;
    for(int i=0; i<9; i++)
    {
        if(!board[0][i].empty())
        {
            if(board[0][i].top().getColor()==WHITE)
            {
                white++;
            }
            else
            {
                black++;
            }
        }
    }
    if(c==WHITE)
    {
        if(black==0)
        {
            white++;
        }
        eval=white-black;
    }
    else
    {
        if(white==0)
        {
            black++;
        }
        eval=black-white;
    }
    board=NULL;
    return eval;
}


Action MinMax(Jeu j, Color c, int length)
{
    Jeu j2(j);
    Position2D first_stack;
    Position2D second_stack;
    Action a(first_stack, second_stack, 0, c);
    int best_value=MaxValue(j ,c, length);
    cout << "\nbest value : " << best_value;
    for(int i=0; i<9; i++)
    {
        if(!j.getBoard()[0][i].empty())
        {
            for(int k=1; k<4; k++)
            {
                for(int l=0; l<9; l++)
                {
                    if(l!=i)
                    {
                        cout << "\n i : " << i << " l : " << l << " n : " << k;
                        *(j2.getBoard())=*(j.getBoard());
                        first_stack.setX(i%3);
                        first_stack.setY(i/3);
                        second_stack.setX(l%3);
                        second_stack.setY(l/3);
                        if(j.autorizedMove(first_stack, second_stack, k, c))
                        {
                            cout << "\nMouvement autorise";
                            j2.moveStack(j2.getBoard()[0][i], j2.getBoard()[0][l], k);
                            j2.printGame();
                            cout << "\n eval : " << evaluate2(j2, c);
                            if(evaluate2(j2, c)==best_value)
                            {
                                cout << "\nbest_value trouvee !";
                                a.getFirstStack().setX(i%3);
                                a.getFirstStack().setY(i/3);
                                a.getSecondStack().setX(l%3);
                                a.getSecondStack().setY(l/3);
                                a.setN(k);
                                a.SetPlayer(c);
                                cout << "\n action : ";
                                a.getFirstStack().printCoordinates();
                                a.getSecondStack().printCoordinates();
                                cout << " n: " << a.getN();
                                return a;
                            }
                        }
                    }
                }
            }
        }
    }
    return a;
}


int MaxValue(Jeu j, Color c, int length)
{
    Jeu j2(j);
    Position2D first_stack;
    Position2D second_stack;
    int value=-10000;
    if(j.isItEnd() || length==0)
    {
        return evaluate2(j, c);
    }
    for(int i=0; i<9; i++)
    {
        if(!j.getBoard()[0][i].empty())
        {
            for(int l=1; l<4; l++)
            {
                for(int k=0; k<9; k++)
                {
                    if(k!=i)
                    {
                        *(j2.getBoard())=*(j.getBoard());
                        first_stack.setX(i%3);
                        first_stack.setY(i/3);
                        second_stack.setX(k%3);
                        second_stack.setY(k/3);
                        if(j.autorizedMove(first_stack, second_stack, l, c))
                        {
                            j2.moveStack(j2.getBoard()[0][i], j2.getBoard()[0][k], l);
                            cout << "\n";
                            j2.printGame();
                            cout << "\n MinValue : " << MinValue(j2, c, length-1) << " ItIsEnd : " << j2.isItEnd();
                            value=max(value, MinValue(j2, c, length-1));
                            cout << "\nvalue : " << value;
                        }
                    }
                }
            }
        }
    }
    return value;
}

int MinValue(Jeu j, Color c, int length)
{
    Jeu j2(j);
    Position2D first_stack;
    Position2D second_stack;
    int value=10000;
    if(j.isItEnd() || length==0)
    {
        cout << "\nJe suis dans la boucle ";
        return evaluate2(j, c);
    }
    for(int i=0; i<9; i++)
    {
        if(!j.getBoard()[0][i].empty())
        {
            for(int l=1; l<4; l++)
            {
                for(int k=0; k<9; k++)
                {
                    if(k!=i)
                    {
                        *(j2.getBoard())=*(j.getBoard());
                        first_stack.setX(i%3);
                        first_stack.setY(i/3);
                        second_stack.setX(k%3);
                        second_stack.setY(k/3);
                        if(j.autorizedMove(first_stack, second_stack, l, c))
                        {
                            j2.moveStack(j2.getBoard()[0][i], j2.getBoard()[0][k], l);
                            value=min(value, MaxValue(j2, c, length-1));
                        }
                    }
                }
            }
        }
    }
    return value;
}
