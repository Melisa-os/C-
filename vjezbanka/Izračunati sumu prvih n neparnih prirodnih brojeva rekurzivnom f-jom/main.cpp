/******************************************************************************
 Izračunati sumu prvih n neparnih prirodnih brojeva rekurzivnom f-jom.

*******************************************************************************/

#include <iostream>

using namespace std;
long long
suman (short n1)
{
  if (n1 == 1)
    return 1;
  else
    return n1 + suman (n1 - 2);
}

int
main ()
{
  short n;
  cout << "Unesi prirodan broj  ";
  cin >> n;
  cout << "Suma prvih " << n << "  neparnih prirodnih brojeva  " << suman (2 *
									   n -
									   1)
    << endl;
  return 0;
}
