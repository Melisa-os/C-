/******************************************************************************
5.2. VJEE=BA
Napisi program koji, kada se unese trocifren broj, ispisuje najveci 
trocifreni broj sastavljen od istih cifara. Ako uneseni broj nije trocifren,
program ispisuje b Greska! Morate unijeti trocifren broj! b  i vraca vas na unos.
ULAZ: 102 IZLAZ: Najveci broj sastavljen od istih cifara je 210
ULAZ: 65 IZLAZ: Greska! Morate unijeti trocifren broj! Unesite neki trocifren brojb &

*******************************************************************************/
#include <iostream>
using namespace std;

int
main ()
{
  int n, a, b, c, n2;
pocetak:cout << "Unesi neki trocifren broj... ";
  cin >> n;
  if ((n < 100) || (n > 999))
    {
      cout << "Greska! Morate unijeti trocifren broj! " << endl;
      goto pocetak;
    }
  a = n / 100;
  b = (n % 100) / 10;
  c = n % 10;
  if (c > b)
    swap (c, b);
  if (c > a)
    swap (c, a);
  if (b > a)
    swap (b, a);
  n2 = 100 * a + 10 * b + c;
  cout << "Najveci broj sastavljen od istih cifara je " << n2 << endl;

  return 0;
}
