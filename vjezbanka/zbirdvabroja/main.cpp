/******************************************************************************
Napisi program koji, za dva unesena broja, racuna i ispisuje njihov zbir.
ULAZ: 5, 7          IZLAZ: Zbir brojeva je 12
ULAZ: -6, 2          IZLAZ : Zbir brojeva je -4

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
     int a,b,c;
    cout<<"unesi dva broja : ";
    cin>>a>>b;
    c=a+b;
    cout<<"Zbir brojeva je "<<c<<endl;


    return 0;
}
