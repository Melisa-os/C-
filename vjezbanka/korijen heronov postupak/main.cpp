/******************************************************************************
Još je Heronu prije 2000 godina bio poznat sljedeći postupak (algoritam) za računanje kvadratnog
korijena proizvoljnog broja x: formira se niz brojeva a0, a1, a2 itd. po sljedećem pravilu:
a0 = 1; ak+1 = (ak + x /ak) / 2 za k > 0
Ovaj niz konvergira vrlo brzo ka korijenu iz x. U praksi je dovoljno izračunati samo nekoliko elemenata
ovog niza, jer se vrlo brzo elementi počinju praktično ponavljati (sa onolikom tačnošću koliku dopušta
realni tip podataka). Tada postupak možemo obustaviti, i posljednju izračunatu vrijednost ak proglasiti
traženim korijenom. Napišite funkciju “korijen” koja računa korijen svog argumenta Heronovim
postupkom. Za realizaciju funkcije ne koristiti nizove. Napisanu funkciju testirajte u glavnom programu
koji za argument unesen sa tastature ispisuje vrijednosti korijena korištenjem funkcije “korijen” kao i
korištenjem ugrađene funkcije “sqrt” (naravno, rezultati treba da budu isti).

*******************************************************************************/
#include <iostream>
#include <math.h>
using namespace std;
double korjen (int broj);
int
main ()
{
  int unos;
  double broj;
  cout << "Unesite broj iz kojeg zelite korjen izvaditi: ";
  cin >> unos;
  broj = korjen (unos);
  cout << broj << " " << sqrt (unos) << endl;
  return 0;
}

double
korjen (int broj)
{
  double korjeni = 1.0, prvi_clan;
  for (int i = 0; i <= broj; i++)
    {
      prvi_clan = korjeni;
      korjeni = (prvi_clan + double (broj) / prvi_clan) /2.;
    }
  return korjeni;
}
