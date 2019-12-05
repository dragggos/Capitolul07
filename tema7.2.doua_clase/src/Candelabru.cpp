#include "Candelabru.h"
#include "BecReglabil.h"


Candelabru::Candelabru()
{
    //ctor
}

Candelabru::~Candelabru()
{
    //dtor
}
void Candelabru::SetnrBecuri(unsigned short nrbec){nrBecuri=nrbec;}

unsigned short Candelabru::GetnrBecuri(){return nrBecuri;}

void Candelabru::ConfigureazaCandelabru(unsigned short n)
{
    nrBecuri=n;
    listabecuri=new BecReglabil[nrBecuri];
    for (int i=0; i<nrBecuri; i++)
      {
        listabecuri[i].SetputereMaxima(100);
        listabecuri[i].SetputereCurenta(0);
      }
}

void Candelabru::AprindeLumina()
{
    for (int i=0; i<nrBecuri;i++)
       listabecuri[i].Aprinde();

}

void Candelabru::StingeLumina()
{
    for (int i=0; i<nrBecuri;i++)
       listabecuri[i].Stinge();
}

void Candelabru::MaresteLumina(unsigned short n)
{
    for (int i=0; i<nrBecuri; i++)
        listabecuri[i].MaresteLumina(n);
}
void Candelabru::ReduceLumina(unsigned short n)
{
    for (int i=0; i<nrBecuri; i++)
        listabecuri[i].ReduceLumina(n);
}
unsigned short Candelabru::PutereMaximaCandelabru()
{
    int suma=0;
    for (int i=0;i<nrBecuri;i++)
        suma=suma+listabecuri[i].GetputereMaxima();
    return suma;
}

bool Candelabru::StareCandelabru()
{
  for (int i=0;i<nrBecuri;i++)
        if (listabecuri[i].GetputereCurenta()>0)
               return true;
  return false;
}
