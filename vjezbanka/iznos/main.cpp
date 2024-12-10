/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int
main ()
{
  int a, pocetak;
pocetak:cout << "Unesi iznosi : ";
  cin >> a;
  if (a <= 2000 && a % 10 == 0)
    {
      int b, c, d, e;
      b = a / 100;
      c = (a - b * 100) / 50;
      d = (a - b * 100 - c * 50) / 20;
      e = (a - b * 100 - c * 50 - d * 20) / 10;

      cout << "Bankomat isplacuje: " << b << " x 100 KM " << c << " x 50 KM "
	<< d << " x 20 KM " << e << "x10 KM " << endl;
    }
  else
    cout << "Nije ispravno uneseno!";
  goto pocetak;
  return 0;
}
