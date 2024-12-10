/******************************************************************************

Zadatak 1.
Napisati program koji odabire iz niza od 10 brojeva samo pozitivne
brojeve i ispisuje ih na ekran.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
   int niz[10]={78,56,87,-98,120,112,-123,56,89,0};
   
    
    for(int i=0;i<10;i++) {
         if(niz[i]>=0) { cout<<niz[i]<<","; }
          }
    
   

    return 0;
}
