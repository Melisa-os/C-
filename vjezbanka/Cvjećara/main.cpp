/******************************************************************************
2. U prodavnici "Kod Merse" stigla je naruđba proljetnog cvijeća.
Prodavačica ima spisak na kome se nalaze tri slova A, B i C. 
Svako od ta tri slova predstavlja cijenu cvijeća. Prodavačica je jako ljuta jer
je dobavljač umjesto da napiše cijene u zbiru samo pisao tip cvijeta, a kasnije 
joj rekao da je cijena cvijeta tipa A =0.5KM , tipa B=1KM i tipa C=2KM. Prodavačica
mora izračunati koliko novca dati dobavljaču a pred sobom ima sljedeći spisak: 
AAAABBCAABBBBBAAAACCCCAAAABBBA.
Pomozite joj da ne pogubi živce i sa njima posao i napišite program koji će za
nju izračunati koju sumu novca dati dobavljaču.
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{   
    float A=0.5,B=1,C=2;
    float  nit[]={A,A,A,A,B,B,C,A,A,B,B,B,B,B,A,A,A,A,C,C,C,C,A,A,A,A,B,B,B,A};
    int m=30;
    float suma=0;
    for(int i=0;i<m;i++) { suma+=nit[i];}
    cout<<"Ukupno treba da se plati " <<suma<<" KM.";
    
    return 0;
}

