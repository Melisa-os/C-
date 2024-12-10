/******************************************************************************
1. Napisi program koji ispisuje sve brojeve od 1 do nekog unesenog broja.
ULAZ: 5 IZLAZ: Brojevi od 1 do 5 su: 1 2 3 4 5
ULAZ: 9 IZLAZ: Brojevi od 1 do 5 su: 1 2 3 4 5 6 7 8 9

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{   int x,i;
    cout<<"Unesi jedan broj :";
    cin>>x;
    cout<<"Brojevi od 1 do broja "<<x<<" su : ";
    for (i=1;i<=x;i++) 
    cout<<i<<" ";
    
    return 0;
}
