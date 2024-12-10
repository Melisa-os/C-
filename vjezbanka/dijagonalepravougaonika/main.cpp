/******************************************************************************
Napisi program koji, za unesene stranice dva pravougaonika, ispisuje koji 
pravougaonik ima vecu dijagonalu.
ULAZ: a1=5, b1=1, a2=3, b2=4 IZLAZ: Vecu dijagonalu ima prvi pravougaonik
ULAZ: a1=7, b1=7, a2=8, b2=6 IZLAZ: Vecu dijagonalu ima drugi pravougaonik

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{   float a1,b1,d1,a2,b2,d2;
        
    cout<<"Unesi dvije stranice prvog pravougaonika :";
    cin>>a1>>b1;
    cout<<"Unesi dvije stranice dtugog pravougaonika :";
    cin>>a2>>b2;
    d1=sqrt((a1*a1)+(b1*b1));
    d2=sqrt((a2*a2)+(b2*b2));
   if (d1>d2)
    {cout<<"Veću dijagonalu ima prvi pravougaonik"<<endl;}
    else 
    {cout<<"Veću dijagonalu ima drugi pravougaonik"<<endl;}

    return 0;
}
