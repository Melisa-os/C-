/******************************************************************************

Napisi program koji, za uneseni poluprecnik kruga, racuna i ispisuje obim 
i povrsinu tog kruga (π=3.14).
ULAZ: r=10          IZLAZ: Obim kruga je 62.8. Povrsina kruga je 314
ULAZ: r=5          IZLAZ: Obim kruga je 31.4. Povrsina kruga je 78.5

*******************************************************************************/
#include <iostream>
using namespace std;
int main ()
{
    double r,O,P;
    cout<<"Unesi poluprecnik kruga: ";     
    cin>>r;
    O=2*r*3.14;
    P=r*r*3.14;
    cout<<"Obim kruga je "<<O<<endl;
    cout <<"Povrsina kruga je "<<P<<endl;
    return 0;
}