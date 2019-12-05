#ifndef CANDELABRU_H
#define CANDELABRU_H
#include "BecReglabil.h"



class Candelabru
{
    public:
        void ConfigureazaCandelabru(unsigned short n);
        void SetnrBecuri(unsigned short x);
        unsigned short GetnrBecuri();
        void AprindeLumina();
        void StingeLumina();
        void MaresteLumina(unsigned short m);
        void ReduceLumina(unsigned short p);
        unsigned short PutereMaximaCandelabru();
        bool StareCandelabru();


        Candelabru();
        virtual ~Candelabru();

    protected:

    private:
        unsigned short nrBecuri;
        BecReglabil *listabecuri;

};

#endif // CANDELABRU_H
