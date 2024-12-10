/******************************************************************************
 Izračunati proizvod svih jednocifrenih brojeva i od njega oduzeti sumu 
 svih trocifrenih brojeva.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{  int suma=0, pro=1;
    for (int i=2;i<10;i++)
        pro=pro*i;
    for (int i=100;i<1000;i++)
        suma=suma+i;
    cout << pro-suma<< endl; 

    return 0;
}
