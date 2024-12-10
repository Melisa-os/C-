/******************************************************************************
Napisati program koji učitava 10  brojeva a zatim saopštava zbir susjednih brojeva.
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
  for (int s = 0; s < 9; s++)
    cout << niz[s] + niz[s + 1] << " ";


  return 0;
}
