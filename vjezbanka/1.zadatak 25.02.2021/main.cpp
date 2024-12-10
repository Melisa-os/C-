/*****************************************************************************
 Napisati program koji odabire iz niza od 10 brojeva 
 samo parne brojeve i ispisuje ih na ekran.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  int brojac;
  cout << "Parni brojevi u ovom nizu su:" << endl;
  int niz[11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  {
    for (brojac = 0; brojac <= 10; brojac += 2)
      cout << brojac << " ";
  }

  return 0;
}

