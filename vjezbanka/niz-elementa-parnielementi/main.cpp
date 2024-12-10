/******************************************************************************
2. Napisi program koji, za uneseni broj clanova niza N, ucitava toliko clanova 
niza, a zatim ispisuje i broji parne brojeve u tom nizu.
ULAZ: N=7, niz: 3 2 4 3 5 1 6 IZLAZ: Parni brojevi u nizu su: 2 4 6. Parnih brojeva u nizu ima 3
ULAZ: N=4, niz: 2 2 4 2 IZLAZ: Parni brojevi u nizu su: 2 2 4 2. Parnih brojeva u nizu ima 4

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{   int N,niz[N],i,bun;
    cout<<"Unesi broj elemenata niza : ";
    cin>>N;
    cout<<"Unesi elemente niza : ";
    for (i=0;i<N;i++)
    cin>>niz[i];
    cout<<"Parni brojevi u nizu su: ";
    bun=0;
    for (i=0;i<N;i++)
    if (niz[i]%2==0)
    {cout<<niz[i]<<" ";
    bun=bun+1;}
    cout<<"Parnih brojeva u nizu ima "<<bun<<endl;
    
    return 0;
}
