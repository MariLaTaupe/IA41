/*
 *  Created by P. Daudre-Treuil and A.S Berre on 06/2017
 */

#include "IA.h"

/**
 * Fonctions associees a l'IA du jeu Pogo. Les entetes des fonctions sont disponibles dans le fichier "IA.h"
 */

/**
 * Fonction destinee a une evaluation du jeu lors d'un minmax avec profondeur donnee.
 * @param j : jeu à evaluer
 * @param c : couleur du joueur incarne par l'IA
 * @return : le nombre de pile possedees par l'IA (dont le premier pion est de sa couleur) moins le nombre de pile
 * possedees par l'adversaire.
 */
int evaluate2(Jeu& j, Color c)
{
    /*On recupere le plateau de jeu*/
    vector<stack<Pion> >* board = j.getBoard();

    /*On initialise des compteurs pour les pions blanc, noir ainsi qu'un variable eval pour retourner l'evaluation
     * calculee*/
    int black=0, white=0, eval;

    /*
     * On inspecte toutes les piles
     */
    for(int i=0; i<9; i++)
    {
        if(!board[0][i].empty())    /*Si elles ne sont pas vides*/
        {
            /*
             * En fonction de la couleur du pion du dessus de la pile (joueur qui possede la pile) on incremente le
             * compteur correspondant (white or black)
             */
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

    /*
     * Si on abouti a une victoire, on incremente de 1 le compteur de la couleur du joueur, et eval prend la difference
     * entre le nombre de pile possede par le joueur et le nombre de piles possedees par l'adversaire
     * (compteur_joueur-compteur_adversaire)
     */
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
    return eval;    /*On retourne la valeur de l'evaluation effectuee*/
}


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
Action MinMax(Jeu j, Color c, int length)
{
    /*On cree une copie du jeu en cours pour pouvoir ensuite faire differents test sans modifier le jeu d'origine*/
    Jeu j2(j);

    /*Sert a stocker les coordonnees de la pile de depart pour les differents test effectues*/
    Position2D first_stack;

    /*Sert a stocker les coordonnees de la pile d'arrivee pour les differents test effectues*/
    Position2D second_stack;

    /*Action a retourner, initialisee pour ne pas modifier le jeu en cas d'erreur et d'echec de la fonction*/
    Action a(first_stack, second_stack, 0, c);

    //On determine la valeur d'evaluation associee a au meilleur coup sur le jeu en cours en appelant l'heuristique
    // MinMax
    int best_value=MaxValue(j ,c, length);

    /*
     * On balaye toutes les solutions possibles jusqu'a trouver celle qui correspond a la valeur best_value determinee
     * plus tot
     */
    for(int i=0; i<9; i++)  /*Pour toutes les piles "de depart" du plateau*/
    {
        if(!j.getBoard()[0][i].empty())     /*Si elles ne sont pas vides*/
        {
            for(int k=1; k<4; k++)      /*Pour toutes les combinaisons de pions pouvant être deplacees (1, 2 ou 3)*/
            {
                for(int l=0; l<9; l++)  /*Et enfin pour toutes les cases possibles "d'arrivee"*/
                {
                    if(l!=i)    /*Si la case d'arrivee est bien differente de la case de depart*/
                    {
                        *(j2.getBoard())=*(j.getBoard());   /*On s'assure que la disposition des pieces soit la meme
                        pour j2 et j (j2 etant amenee a etre modifiee a chaque iteration)*/

                        /*
                         * On stocke les coordonnees des piles de depart et d'arrivee du coup determine a cette iteration
                         */
                        first_stack.setX(i%3);
                        first_stack.setY(i/3);
                        second_stack.setX(l%3);
                        second_stack.setY(l/3);

                        if(j.autorizedMove(first_stack, second_stack, k, c)) /*Si le mouvement est valide*/
                        {
                            j2.moveStack(j2.getBoard()[0][i], j2.getBoard()[0][l], k); /*On l'effectue sur le jeu j2*/

                            /*
                             * Puis on evalue ce coup et on compare la valeur resultante a la best_value precedemment
                             * trouvee
                             */
                            if(evaluate2(j2, c)==best_value)
                            {
                                /*
                                 * Si elles correspondent, alors il s'agit du mouvement que l'on doit retourner, on
                                 * affecte donc a a les caracteritique du coup trouve
                                 */
                                a.getFirstStack().setX(i%3);
                                a.getFirstStack().setY(i/3);
                                a.getSecondStack().setX(l%3);
                                a.getSecondStack().setY(l/3);
                                a.setN(k);
                                a.SetPlayer(c);
                                return a; /*Et on le retourne*/
                            }
                        }
                    }
                }
            }
        }
    }
    return a; /*Securite en cas d'echec de la fonction */
}


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
int MaxValue(Jeu j, Color c, int length)
{
    /*On cree une copie du jeu en cours pour pouvoir ensuite faire differents test sans modifier le jeu d'origine*/
    Jeu j2(j);

    /*Sert a stocker les coordonnees de la pile de depart pour les differents test effectues*/
    Position2D first_stack;

    /*Sert a stocker les coordonnees de la pile d'arrivee pour les differents test effectues*/
    Position2D second_stack;

    /*On initialise la valeur a retourner a une valeur de depart tres basse (en theorie - l'infini, toutefois dans ce
     * cas-ci, -10000 suffit amplement)*/
    int value=-10000;

    /*Si la partie est finie ou si l'on a atteind la profondeur maximale de l'heuristique, on retourne juste une
     * evaluation du jeu tel que reçu*/
    if(j.isItEnd() || length==0)
    {
        return evaluate2(j, c);
    }

    /*
     * Sinon on balaye toutes les coups possible, jusqu'a trouver celui avec l'evaluation la plus haute, donc le
     * "meilleur coup"
     */
    for(int i=0; i<9; i++)  /*Pour toutes les piles "de depart" du plateau*/
    {
        if(!j.getBoard()[0][i].empty())     /*Si elles ne sont pas vides*/
        {
            for(int l=1; l<4; l++)      /*Pour toutes les combinaisons de pions pouvant être deplacees (1, 2 ou 3)*/
            {
                for(int k=0; k<9; k++)   /*Et enfin pour toutes les cases possible "d'arrivees"*/
                {
                    if(k!=i)    /*Si la case d'arrivee est bien differente de la case de depart*/
                    {
                        *(j2.getBoard())=*(j.getBoard());   /*On s'assure que la disposition des pieces soit la meme
                        pour j2 et j (j2 etant amenee a etre modifiee a chaque iteration)*/

                        /*
                         * On stocke les coordonnees des piles de depart et d'arrivee du coup determine a cette iteration
                         */
                        first_stack.setX(i%3);
                        first_stack.setY(i/3);
                        second_stack.setX(k%3);
                        second_stack.setY(k/3);

                        if(j.autorizedMove(first_stack, second_stack, l, c))    /*Si le mouvement est valide*/
                        {
                            j2.moveStack(j2.getBoard()[0][i], j2.getBoard()[0][k], l);  /*On l'effectue sur le jeu j2*/
                            value=max(value, MinValue(j2, c, length-1));    /*On affecte a value le maximum entre sa
                             * valeur et celle retournee par la fonction MinValue appilquee a j2*/
                        }
                    }
                }
            }
        }
    }
    return value;   /*On retourne la meilleure evaluation trouvee*/
}


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
int MinValue(Jeu j, Color c, int length)
{
    /*On cree une copie du jeu en cours pour pouvoir ensuite faire differents test sans modifier le jeu d'origine*/
    Jeu j2(j);

    /*Sert a stocker les coordonnees de la pile de depart pour les differents test effectues*/
    Position2D first_stack;

    /*Sert a stocker les coordonnees de la pile d'arrivee pour les differents test effectues*/
    Position2D second_stack;

    /*On initialise la valeur a retourner a une valeur de depart tres haute (en theorie + l'infini, toutefois dans ce
     * cas-ci, +10000 suffit amplement)*/
    int value=10000;

    /*Si la partie est finie ou si l'on a atteind la profondeur maximale de l'heuristique, on retourne juste une
     * evaluation du jeu tel que reçu*/
    if(j.isItEnd() || length==0)
    {
        return evaluate2(j, c);
    }

    /*
     * Sinon on balaye toutes les coups possible, jusqu'a trouver celui avec l'evaluation la plus basse, donc le
     * "pire coup"
     */
    for(int i=0; i<9; i++)      /*Pour toutes les piles "de depart" du plateau*/
    {
        if(!j.getBoard()[0][i].empty())     /*Si elles ne sont pas vides*/
        {
            for(int l=1; l<4; l++)      /*Pour toutes les combinaisons de pions pouvant être deplacees (1, 2 ou 3)*/
            {
                for(int k=0; k<9; k++)      /*Et enfin pour toutes les cases possible "d'arrivees"*/
                {
                    if(k!=i)    /*Si la case d'arrivee est bien differente de la case de depart*/
                    {
                        *(j2.getBoard())=*(j.getBoard());   /*On s'assure que la disposition des pieces soit la meme
                        pour j2 et j (j2 etant amenee a etre modifiee a chaque iteration)*/

                        /*
                         * On stocke les coordonnees des piles de depart et d'arrivee du coup determine a cette iteration
                         */
                        first_stack.setX(i%3);
                        first_stack.setY(i/3);
                        second_stack.setX(k%3);
                        second_stack.setY(k/3);

                        if(j.autorizedMove(first_stack, second_stack, l, c))    /*Si le mouvement est valide*/
                        {
                            j2.moveStack(j2.getBoard()[0][i], j2.getBoard()[0][k], l);  /*On l'effectue sur le jeu j2*/
                            value=min(value, MaxValue(j2, c, length-1));    /*On affecte a value le minimum entre sa
                             * valeur et celle retournee par la fonction MinValue appilquee a j2*/
                        }
                    }
                }
            }
        }
    }
    return value;   /*On retourne la pire evaluation trouvee*/
}
