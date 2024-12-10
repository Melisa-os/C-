/******************************************************************************
 Učitati rečenicu pa je rastaviti tako da svaka riječ ide u novi red.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{ string recenica;
    getline (cin, recenica);
    int d=recenica.size();
    for (int i=0; i < d;i++) 
        if (recenica [i]==' ' && recenica [i+1]!=' ') cout << endl;
           else cout << recenica [i];

    return 0;
}
