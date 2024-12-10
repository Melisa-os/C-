/******************************************************************************
4.2. VJEŽBA
Napisi program koji, za tri unesena cijela broja, ispisuje koji je od njih najmanji.
ULAZ: 3, 2, 4 IZLAZ: Najmanji od tri unesena broja je 2
ULAZ: 2, 3, -6 IZLAZ: Najmanji od tri unesena broja je -6


*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Unesite tri broja: ";
    cin>>a>>b>>c;
    if ((a<b) && (a<c)) { cout<<"Najmanji od tri unesena broja je :"<<a;}
    else if  ((b<a) && (b<c)) { cout<<"Najmanji od tri unesena broja je :"<<b;}
    else { cout<<"Najmanji od tri unesena broja je :"<<c;}
    
    return 0;
}
