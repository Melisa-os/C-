/******************************************************************************
Učitati 4 cijela broja.
Ako je bar jedan od njih pozitivan izračunati im proizvod i štampati ga. 
Ako je bar jedan od njih negativan izračunati im zbir i štampati ga.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{  int a, b, c, d;
    cout  <<  "Unesite 4 cijela broja ";
    cin >> a >>b >>c >>d;
    if (a > 0 || b > 0 || c > 0 || d > 0) cout  <<  a*b*c*d  << endl;
    if (a < 0 || b < 0 || c < 0 || d < 0) cout  <<  a+b+c+d  << endl;
    if (a==0 && b==0 && c==0 && d==0) cout  << "Svi brojevi su nule! "  << endl;
    return 0;
}
