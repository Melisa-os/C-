/******************************************************************************
Izračunati sumu svih dvocifrenih prirodnih bojeva.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{    int suma=0;
    for (int i=10;i<100;i++)
        suma=suma+i;
    cout << suma<< endl;

    return 0;
}
