/******************************************************************************
 Učitati rečenicu pa ispisati najdužu riječ koja se pojavljuje u rečenici.

*******************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

int
main ()
{    string recenica;
    getline(cin, recenica);
    int d= recenica.size(), max=0, p, k;
    int poc=0,kraj=0;
    for (int i=0; i < d-1; i++)
       {if (recenica[i]==' ' && recenica[i+1]!=' ') poc=i+1;
        if (recenica[i]!=' ' && recenica[i+1]==' ') kraj=i;
        if (i+1==d-1 && recenica[i+1]!=' ') kraj =i+1;
        if (kraj - poc > max) {max=kraj-poc; p=poc;k=kraj;}
        }
    for (int i=p;i<=k;i++)
        cout << recenica[i];
    cout << endl;
    
    return 0;
}
