/******************************************************************************
NapiE!ite program koji traE>i da se sa tastature unesu prirodni brojevi n1 i n2, a koji De zatim ispisati
tabelu sa dvije kolone, od kojih prva kolona sadrE>i prirodne brojeve od n1 do n2 ukljuD
ivo, a druga
kolona sumu svih djelilaca odgovarajuDih brojeva iz prve kolone. Na primjer, ukoliko je u prvoj koloni
broj 10, u drugoj koloni treba da bude broj 18, jer djelioci broja 10 glase 1, 2, 5 i 10, a njihova suma je
1 + 2 + 5 + 10 = 18). Tablicu formatirajte po vlastitom izboru, ali tako da ispisani brojevi budu lijepo
poravnati uz desnu ivicu.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  int n;
  cout << "Unesi prirodan broj n: ";
  while (cin >> n, n <= 0)
    {
      cout << "Unesi prirodan broj n: ";
      cin.clear ();
      cin.ignore (10000, '\n');
    }
  int prost;
  int k (0);
  for (int i = 2; i < 12345123; i++)
    {
      int br (0);
      for (int j = 2; j < i; j++)
	if (i % j == 0 && i != 2)
	  br++;
      if (br == 0)
	{
	  prost = i;
	  k++;
	}
      if (k == n)
	break;
    }
  cout << prost;

  return 0;
}
