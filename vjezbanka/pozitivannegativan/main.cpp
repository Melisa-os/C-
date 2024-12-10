/******************************************************************************
Napisi program koji, za neki uneseni broj, ispituje i ispisuje da li je 
taj broj pozitivan, negativan ili je nula.
ULAZ: -6 IZLAZ: Broj je negativan
ULAZ: 0 IZLAZ: Broj je nula

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{   int x;
    cout<<"Unsi neki broj :";
    cin>>x;
   if (x>0) { cout<<"Broj je pozitivan";}
   else if (x==0) { cout<< "Broj je nula";}
   if (x<0) {cout<<"Broj je manji od nule";}
     

    return 0;
}
