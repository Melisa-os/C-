/******************************************************************************
Napisati program koji učitava 7 brojeva a zatim unatraške ispisuje njihovu 
parnost.
******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  int niz[7];
  cout << "Unesi 7 cijelih brojeva :" << endl;
  for (int i = 0; i < 7; i++)
    cin >> niz[i];
  for (int s = 6; s >= 0; s--)
    {
      if (niz[s] % 2 == 0)
	cout << "paran,";
      else
	cout << "neparan,";
    }
  cout << endl;
  return 0;
}
