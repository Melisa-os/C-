/******************************************************************************
NapiE!ite program koji traE>i da sa tastature unesemo podatke o dva vremenska trenutka, u satima,
minutama i sekundama, a koji raD
una i ispisuje vrijeme koje je proteklo izmeDu ta dva vremenska
trenutka, takoDer u satima, minutama i sekundama. Pretpostaviti da je drugi vremenski trenutak uvijek
nakon prvog. Na primjer, dijalog nakon pokretanja programa moE>e da izgleda poput sljedeDeg:
Unesi prvo vrijeme (h min s): 14 15 7
Unesi drugo vrijeme (h min s): 16 9 34
IzmeDu ova dva trenutka proteklo je 1h 54min 27s.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  int h1, m1, s1, h2, m2, s2;
  cout << "Unesite prvo vrijeme (h min s): ";
  cin >> h1 >> m1 >> s1;
  cout << "Unesite drugo vrijeme (h min s): ";
  cin >> h2 >> m2 >> s2;
  int t1 = s1 + m1 * 60 + h1 * 3600;
  int t2 = s2 + m2 * 60 + h2 * 3600;
  int t;
  (t1 < t2) ? t = t2 - t1 : t = t1 - t2;
  int h = t / 3600;
  int minu = ((double) t / 3600 - h) * 60;
  int s = t - h * 3600 - minu * 60;
  cout << "Izmedu ova dva trenutka proteklo je " << h << "h " << minu <<
    "min " << s << "s.\n";

  return 0;
}
