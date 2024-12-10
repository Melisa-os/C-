/******************************************************************************
1. Napisi program koji ispisuje N elemenata unesenog niza.
ULAZ: N=5, niz: 3 2 3 5 7 2 3 1 IZLAZ: Clanovi niza su: 3 2 3 5 7
ULAZ: N=4, niz: -1 3 -4 10 IZLAZ: Clanovi niza su: -1 3 -4 10

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{ int N,niz[N],i;
    cout<<"Unesi broj elemenata niza :";
    cin>>N;
    cout<<"Unesi elemente niza : ";
    for (i=0;i<N;i++)
    cin>>niz[i];
    cout<<"Elementi  niza su: ";
    for (i=0;i<N;i++)
    {cout<<niz[i]<<" ";}
    

    return 0;
}
