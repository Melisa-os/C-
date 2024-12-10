/******************************************************************************
Zadatak 1
Prebrojati koliko ima reči u unetom stringu, tako što prebrojavamo razmake.
Npr. za string 'Joca voli sladoled', dobija se rezultat 3.
Podrazumeva se da u stringu nema vodećih, pratećih ili višestrukih razmaka.

*******************************************************************************/

#include <iostream>
#include<string>

using namespace std;

int main()
{   string a;
    int n;
    n=1;
    cout<<"Unesi rečenicu :";
    getline (cin,a);
    for(int i=1;i<a.length();i++){ if (a[i] == ' ')  n++;
    } ;
    cout<<n;

    return 0;
}

