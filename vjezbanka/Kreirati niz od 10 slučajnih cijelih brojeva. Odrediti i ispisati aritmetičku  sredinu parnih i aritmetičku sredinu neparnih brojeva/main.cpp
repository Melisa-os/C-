/******************************************************************************
Kreirati niz od 10 slučajnih cijelih brojeva. Odrediti i ispisati aritmetičku 
sredinu parnih i aritmetičku sredinu neparnih brojeva
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{  int x[10];
    int sump=0, sumn=0, brp=0, brn=0;
    srand(time(NULL));
    rand();
    for (int i=0; i<10;i++) 
        {x[i]=rand();
         if (x[i]%2==0) {sump=sump+x[i]; brp++;}
            else {sumn=sumn+x[i]; brn++;}
         cout << x[i] << "  ";
        }
    if (brp!=0) cout << endl << "Aritmeticka sredina parnih " << (float)sump/brp << endl;
       else cout << endl << "Nema parnih brojeva"; 
    if (brn!=0) cout << endl << "Aritmeticka sredina neparnih " << (float)sumn/brn << endl;
         else cout << endl << "Nema neparnih brojeva";

    return 0;
}
