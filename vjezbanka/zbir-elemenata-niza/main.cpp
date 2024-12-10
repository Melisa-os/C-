/******************************************************************************
4. Napiši program koji ispisuje zbir svih elemenata u unesenom nizu.
ULAZ: N=5; niz: 5 4 3 2 1 IZLAZ: Zbir elemenata niza je 15
ULAZ: N=4; niz: 5, -6, 12, -11 IZLAZ: Zbir elemenata niza je 0

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{  int N,n[N],i,broj,zbir;
cout<<"Unesi broj elemenata niza : ";
    cin>>N;
    cout<<"Unesi elemente niza : ";
    cin>>n[N];
    zbir=0;
    for (i=0;i<N;i++)
    {
        cin>>broj;
        zbir=zbir+broj;
    }
    cout<<"Zbir brojeva u nizu je: "<<zbir<<endl;

    return 0;
}
