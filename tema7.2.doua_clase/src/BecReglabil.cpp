#include "BecReglabil.h"
#include "Candelabru.h"

BecReglabil::BecReglabil()
{
    //ctor
}

BecReglabil::~BecReglabil()
{
    //dtor
}
void BecReglabil::SetputereMaxima(unsigned short putmax){putereMaxima=putmax;}
void BecReglabil::SetputereCurenta(unsigned short putcurenta){putereCurenta=putcurenta;}
unsigned short BecReglabil:: GetputereMaxima(){return putereMaxima;}
unsigned short BecReglabil::GetputereCurenta(){return putereCurenta;}

void BecReglabil::Aprinde()
         {
             aprins=true;
             putereCurenta=putereMaxima;
         }
void BecReglabil::Stinge()
         {
             aprins=false;
             putereCurenta=0;
         }
void BecReglabil::MaresteLumina(short n)
         {
             putereCurenta+=n;
             if (putereCurenta>putereMaxima)
                    putereCurenta=putereMaxima;
              aprins=true;
         }
void BecReglabil::ReduceLumina(short m)
         {
             if (putereCurenta<=m) {putereCurenta=0;
                 aprins=false;}
                else putereCurenta-=m;

         }
void BecReglabil::StareaBec()
         {
             if (aprins) cout<<"Becul e aprins!"<<endl;
               else cout<<"Becul e stins!"<<endl;
         }
