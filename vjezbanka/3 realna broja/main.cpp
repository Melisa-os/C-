/******************************************************************************
Učitati 3 pozitivna različita realna broja.
Izračunati razliku najvećeg i najmanjeg, 
pa tu razliku podijeliti sa srednjim od ta 3 broja. 
Konačni rezultat štampati na ekran.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{   float a, b, c;
poc: cout  <<  "Unesite 3 pozitivna razlicita realna broja ";
     cin >> a >>b >>c;
    if (a==b || b==c || a==c || a<=0 || b<=0 || c<=0) goto poc;
    if (a < b && b < c) cout  << (c-a)/b  << endl;
    if (a < c && c < b) cout  << (b-a)/c  << endl;
    if (b < a && a < c) cout  << (c-b)/a  << endl;
    if (b < c && c < a) cout  << (a-b)/c  << endl;   
    if (c < a && a < b) cout  << (b-c)/a  << endl;
    if (c < b && b < a) cout  << (a-c)/b  << endl; 
    
    return 0;
}