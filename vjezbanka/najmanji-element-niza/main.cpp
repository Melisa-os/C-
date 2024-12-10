/******************************************************************************
3. Napisi program koji ispisuje najmanji od N unesenih clanova nekog niza.
ULAZ: N=5, niz: 3 4 1 2 5 IZLAZ: Najmanji broj u nizu je 1
ULAZ: N=4, niz: -3 3 1 0 -5 1 IZLAZ: Najmanji broj u nizu je -3

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{  int N,niz[N], i, min;
    cout<<"Unesi broj elemenata niza : ";
    cin>>N;
    cout<<"Unesi elemente niza : ";
    for (i=0;i<N;i++)
    {cin>>niz[i];}
    min=niz[0];
    for (i=0;i<N;i++)
    if (niz[i]<min)
    {min=niz[i];}
    cout<<"Najmanji elemenat niza je "<<min<<endl;

    return 0;
}
