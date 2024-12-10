/******************************************************************************
  4. Napisi program koji broji koliko je brojeva, u intervalu izmedju unesenih
  brojeva, dijeljivo sa 3.
ULAZ: 2, 12 IZLAZ: U intervalu od 2 do 11 brojeva dijeljivih sa tri ima 4
ULAZ: -7, 2 IZLAZ: U intervalu od -6 do 2 brojeva dijeljivih sa tri ima 3

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{    int a,b,i,broj;
     cout<<"Unesi manji prvi broj : ";
    cin>>a;
    cout<<"Unesi veći drugi broj : ";
    cin>>b;
    broj==0;
    for (i=a;i<=b;i++)  if (i%3==0) broj=broj+1;
    cout<<"Brojeva djeljivih sa tri ima "<<broj<<endl;

   

    return 0;
}
