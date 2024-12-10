/******************************************************************************
Napisati program gdje korisnik treba da unese dva broja,zatim osabrati operator 
(+,-,*,/) i ispisati na ekran.
*******************************************************************************/

#include<iostream>
using namespace std;
int
main ()
{
  int a, b;
  char znak;

  cout << "Unesite a: ";
  cin >> a;
  cout << "Unesite b: ";
  cin >> b;
  cout << "Unesite operator: ";
  cin >> znak;
  if (znak == '+')
    cout << "Zbir brojeva je " << a + b << endl;
  else if (znak == '-')
    cout << "Razlika brojeva je " << a - b << endl;
  else if (znak == '*')
    cout << "Proizvod brojeva je " << a * b << endl;
  else
    cout << "Kolicnik brojeva je " << a / b << endl;

  return 0;
}


