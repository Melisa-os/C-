/******************************************************************************
5. Napisi program koji ucitava brojeve sve dok se ne unese nula, a zatim 
ispisuje koliko je brojeva uneseno (ne racunajuci nulu), i kolika je srednja
vrijednost tih brojeva (bez nule).
ULAZ: 3 4 2 5 1 5 0 IZLAZ: Brojeva je uneseno 6. Srednja vrijednost brojeva je 3.33
ULAZ: -3 3 2 -2 0 IZLAZ: Brojeva je uneseno 4. Srednja vrijednost brojeva je 0

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{float n,br,zb;
    cout<<"Unesi neki niz brojeva! Nakon posljednjeg broja unesi nulu... ";
    cin>>n;
    br=0;
    zb=n;
    while (n!=0)
    {cin>>n;
    br=br+1;
    zb=zb+n;}
    cout<<"Brojeva je uneseno "<<br<<endl;
    cout<<"Srednja vrijednost brojeva je "<<zb/br<<endl;
    

    return 0;
}

