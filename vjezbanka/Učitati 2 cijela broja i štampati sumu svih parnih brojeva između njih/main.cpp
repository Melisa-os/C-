/******************************************************************************
 Učitati 2 cijela broja i štampati sumu svih parnih brojeva između njih.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{  int suma=0, a, b;
    cin >>a >>b;
    if (a>b) swap(a,b);
    for (int i=a+1;i < b;i++)
        if (i%2==0) suma=suma+i;
    cout << suma << endl;

    return 0;
}
