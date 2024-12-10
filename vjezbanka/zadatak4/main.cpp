/******************************************************************************
Kada korisnik unese broj osvojenih bodova,program izbacuje koju je ocjenu dobio.

*******************************************************************************/

#include <iostream>
using namespace std;
int
main ()
{
  int br;
  cout << "Unesite broj bodova na testu: ";
  cin >> br;
  if (br >= 1 && br <= 30)
    cout << "ocjena je nedovoljan 1" << endl;
  else if (br >= 31 && br <= 50)
    cout << "ocjena je dovoljan 2" << endl;
  else if (br >= 51 && br <= 69)
    cout << "ocjena je dobar 3 " << endl;
  else if (br >= 70 && br <= 89)
    cout << "ocjena je vrlo dobar 4" << endl;
  else if (br >= 90 && br <= 100)
    cout << "ocjena je odlican 5" << endl;
  switch (br)
    {
    case 1:
      cout << "nedovoljan" << endl;
      break;
    case 2:
      cout << "dovoljan" << endl;
      break;
    case 3:
      cout << "dobar" << endl;
      break;
    case 4:
      cout << "vrlo dobar" << endl;
      break;
    case 5:
      cout << "odlican" << endl;
      break;
    }
  return 0;
}

