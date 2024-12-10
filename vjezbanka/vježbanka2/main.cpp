/******************************************************************************
2. Napisati program koji omogućava unos dvije ocjene i računa njihov zbir koji 
ispisuje na ekran.Zadatak korisniku omogućava provjeru da li su uneseni brojevi
ocjena, ne mogu biti negativni i ne smiju biti izvan segmenta [1,5]. Ukoliko 
neki od unesena dva broja nije bio ocjena obavjestiti korisnika programa o tome
odgovarajućom porukom. Ukoliko barem jedan od unosa ne bude ocjena, obavjestiti
korisnika da se neće moći računati prosjek.
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{   int a,b,i;
   pocetak: cout<<"Unesi prvu ocjenu : ";
    cin>>a;
    cout<<"Unesi drugu ocjenu : ";
    cin>>b;
    if  (a<0 || b <0)  {cout<<"Jedan unos nije ocjena,nemožeš računati prosjek";
       goto pocetak ;}
    else (i=1,i<=5,i++) ; cout<<"Zbir ocjena je "<<a+b;
   

    return 0;
}



