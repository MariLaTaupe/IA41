#include<iostream>
#include<vector>
#include<stack>

#include"Pion.cpp"

using namespace std;

class Jeu{
private :
    //array<array<stack<Pion>, 3>, 3> _board;
    vector<stack<Pion> > _board;

public:
    Jeu()
    {
        int i=0;
        //on initialize le vecteur des piles
        for(i=0; i<39; i++)
        {
           stack<Pion> s;
           if(i==0 || i==1 || i==2)
           {

               s.push(Pion(WHITE, Position2D(i, 0)));
               s.push(Pion(WHITE, Position2D(i, 0)));
           }
           if(i==6 || i==7 || i==8)
           {
               s.push(Pion(BLACK, Position2D(i%3, 3)));
               s.push(Pion(BLACK, Position2D(i%3, 3)));
           }

            _board.push_back(s);
        }

    }
    Jeu(const Jeu& j)
    {
        this->_board=j.getBoard();
    }
    ~Jeu(){};
    Jeu& operator=(const Jeu& j)
    {
        this->_board=j.getBoard();
        return *this;
    }

    vector<stack<Pion> > getBoard() const;

    void printGame();


};
