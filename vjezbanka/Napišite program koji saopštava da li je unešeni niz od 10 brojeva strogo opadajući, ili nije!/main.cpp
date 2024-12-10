/******************************************************************************
Napišite program koji saopštava da li je unešeni niz od 10 brojeva strogo opadajući, ili nije!

8,5,4,4,0 - ne
7,3,0,-1 - da
3,4,5 - strogo rastući
3,4,4,4,5,6,8 - rastući
8,5,2,9

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{

int niz[]={10,8,9,5,3,3,0,-1,-5,-8};
bool control(false);

for(int i =0; i<9; i++){
if(niz[i]<=niz[i+1]) { control=true; break; }
}

if(control) cout<<"Ovo nije opadajući niz.";
else cout<<"Ovo jeste opadajući niz.";

    return 0;
}

