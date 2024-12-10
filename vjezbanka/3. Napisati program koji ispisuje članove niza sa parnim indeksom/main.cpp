/******************************************************************************
 3. Napisati program koji ispisuje članove niza sa parnim indeksom.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{   int n;
    cout << "Unesite broj clanova niza:";
    cin >> n;
    int a[n];
    cout << "Unesite clanove:";
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << "Clanovi niza sa parnim indeksom su:" << endl;
    for (int i=0; i<n; i++){
        if(i%2==0)
            cout << a[i] << endl;
    }

    return 0;
}
