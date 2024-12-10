/******************************************************************************
3. Napisi program koji ispisuje sve brojeve u intervalu izmedju dva 
unesena broja. Prvo se unosi manji broj, pa zatim veci broj.
ULAZ: 5, 11 IZLAZ: Brojevi od 5 do 11 su: 5 6 7 8 9 10 11
ULAZ: -6, 2 IZLAZ: Brojevi od -6 do 2 su: -6 -5 -4 -3 -2 -1 0 1 2

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{    int a,b,i;
      cout<<"Unesi manji prvi broj : ";
    cin>>a;
    cout<<"Unesi veći drugi broj : ";
    cin>>b;
    cout<<"Brojevi od "<<a<<" do "<<b<<" su: ";
    for (i=a;i<=b;i++) cout<<i<<" ";
   

    return 0;
}
