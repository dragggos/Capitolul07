#include "BecReglabil.h"

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
             putereCurenta-=m;
             if (putereCurenta<0)
                     putereCurenta=0;
                 else if (putereCurenta==0)
                               aprins=false;

         }
void BecReglabil::StareaBec()
         {
             if (aprins) cout<<"Becul e aprins!"<<endl;
               else cout<<"Becul e stins!"<<endl;
         }
