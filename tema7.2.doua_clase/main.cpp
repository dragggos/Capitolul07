#include <iostream>
#include "Candelabru.h"
#include "BecReglabil.h"

using namespace std;

int main()
{
    Candelabru cand3,cand5;
    cand3.ConfigureazaCandelabru(3);
    cand5.ConfigureazaCandelabru(5);
    cout<<(cand3.StareCandelabru()?" ":"Nu ")<<"este aprins"<<endl;
    cout<<(cand5.StareCandelabru()?" ":"Nu ")<<"este aprins"<<endl;
    cand3.AprindeLumina();
    cand5.AprindeLumina();
    cout<<(cand3.StareCandelabru()?" ":"Nu ")<<"este aprins"<<endl;
    cout<<(cand5.StareCandelabru()?" ":"Nu ")<<"este aprins"<<endl;
    cand3.StingeLumina();
    cand5.StingeLumina();
    cout<<(cand3.StareCandelabru()?" ":"Nu este ")<<"aprins"<<endl;
    cout<<(cand5.StareCandelabru()?" ":"Nu este ")<<"aprins"<<endl;
    cand3.MaresteLumina(150);
    cand5.MaresteLumina(150);
    cout<<(cand3.StareCandelabru()?" ":"Nu este ")<<"aprins"<<endl;
    cout<<(cand5.StareCandelabru()?" ":"Nu este ")<<"aprins"<<endl;
    cand3.ReduceLumina(75);
    cand5.ReduceLumina(75);
    cout<<(cand3.StareCandelabru()?" ":"Nu este ")<<"aprins"<<endl;
    cout<<(cand5.StareCandelabru()?" ":"Nu este ")<<"aprins"<<endl;
    cand3.ReduceLumina(30);
    cand5.ReduceLumina(30);
    cout<<(cand3.StareCandelabru()?" ":"Nu este ")<<"aprins"<<endl;
    cout<<(cand5.StareCandelabru()?" ":"Nu este ")<<"aprins"<<endl;
    cout<<"Putere maxima a cand3 este: "<<cand3.PutereMaximaCandelabru()<<endl;
    cout<<"Putere maxima a cand5 este: "<<cand5.PutereMaximaCandelabru()<<endl;
    return 0;
}
