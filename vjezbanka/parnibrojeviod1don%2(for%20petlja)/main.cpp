/******************************************************************************
2. Napisi program koji ispisuje sve parne brojeve od 1 do unesenog broja.
ULAZ: 15 IZLAZ: Parni brojevi od 1 do 15 su: 2 4 6 8 10 12 14
ULAZ: 6 IZLAZ: Parni brojevi od 1 do 6 su: 2 4 6


*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{    int a,i;
     cout<<"Unesi jedan broj : ";
     cin>>a;
     cout<<"Parni brojevi od 1 do "<<a<<" su :";
     for (i=1;i<=a;i++) if (i%2==0)
    {cout<<i<<" ";}
   

    return 0;
}
