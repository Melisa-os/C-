/******************************************************************************
Napisati program koji učitava 10 cijelih brojeva i onda saopštava kvadrate
unsesenih brojeva.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  int niz[10];
  cout << "Unesi 10 cijelih brojeva :";
  for (int i = 0; i < 10; i++)
    cin >> niz[i];
  for (int s = 0; s < 10; s++)
    cout << niz[s] * niz[s] << " ";

  return 0;
}
