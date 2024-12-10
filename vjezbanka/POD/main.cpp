/******************************************************************************

Napisi program koji, za unesenu stranicu kvadrata, racuna i 
ispisuje povrsinu, obim i duzinu dijagonale tog kvadrata.
ULAZ: a=5          IZLAZ: Povrsina kvadrata je 25. Obim je 20. Duzina dijagonale je 7.07107
ULAZ: a=10          IZLAZ: Povrsina kvadrata je 100. Obim je 40. Duzina dijagonale je 14.1421
*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a,P,O,d;
    cout<<"Unesi stranicu kvadrata: ";
    cin>>a;
    P=a*a;
    O=4*a;
    d=a*sqrt(2);
    cout<<"Površina kvadrata je "<<P<<". Obim je "<<O<<". Duzina dijagonale je: "<<d;
    return 0;
}


