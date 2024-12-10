/******************************************************************************
 Nadopuniti prethodni zadatak tako da korisnik može upotrebom ovog programa 
 izračunati prosječnu ocjenu. Ispisati prosječnu ocjenu na ekran. U zavisnosti 
 od toga koja je decimalna vrijednost u pitanju odrediti čime učenik prolazi.
 Za te potrebe uvesti novu varijablu prolaz i iskoristiti je na sljedeči način.
 NPR. ako je pro varijabla u kojoj je prosjek provjeravate da li je taj broj
 imeđu 2.5 i 3.4, pa provjeravate je li imeđu 3.5 i 4.4, pa je li veće ili 
 jednako 4.5 . Ako je npr pro=3.23 onda ste zadovoljili uslov da je između 2.5
 i 3.4 u tom slučaju pridružite varijabli prolaz vrijednost 3. Tako biste da je 
 prosjek 3.5 trebali varijabli prolaz pridružiti vrijednost 4. Koristiti naredbu
 switch koja će testirati moguće vrijednosti varijable prolaz i na ekran ispisivati
 čime je učenik prošao. Npr za prolaz=4 ona bi trebala ispisati na ekran: Imate vrlo dobar uspjeh. *
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i, broj, uk=0;

    for (i=1; i<=5; i++)
    {
        printf ("\nUčitaj %d. cijeli broj: ", i);
        scanf ("%d", &broj);
        uk=uk+broj;
     }
     printf ("\nAritmetička sredina je %.2f", uk/5.0);

    return 0;
}
