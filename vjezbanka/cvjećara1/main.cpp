/******************************************************************************
 U prodavnici "Kod Merse" stigla je naruđba proljetnog cvijeća.
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
#include<string>
using namespace std;

int main()
{  string narudzba;
   float iznos;
   cout<<"Unesi narudžbu : ";
   cin>>narudzba;
   int d=narudzba.length();
   for (int i =0;i<d;i++)
   switch(narudzba[i]){
       case 'A': iznos+=0.5; break;
       case 'B': iznos+=1; break;
       case 'C': iznos+=2; break;
       default : cout<<"Nepredviđeno";}
    cout<<"Iznos je : "<<iznos;
    return 0;
}
