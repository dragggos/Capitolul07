#ifndef BECREGLABIL_H
#define BECREGLABIL_H
#include <iostream>
using namespace std;

class BecReglabil
{
    private:
        unsigned short putereMaxima;
        unsigned short putereCurenta;
        bool aprins;

    public:
        void SetputereMaxima(unsigned short putmax);
        void SetputereCurenta(unsigned short putcurenta);
        unsigned short GetputereMaxima();
        unsigned short GetputereCurenta();
        void Aprinde();
        void Stinge();
        void MaresteLumina (short n);
        void ReduceLumina (short m);
        void StareaBec();
        BecReglabil();
        virtual ~BecReglabil();

    protected:



};

#endif // BECREGLABIL_H
