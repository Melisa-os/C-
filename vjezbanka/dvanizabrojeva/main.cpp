/******************************************************************************
Napisati program koji omogucava unos dva niza od po 5 elemenata od kojih kreira 
treci niz tako sto iz prvog niza u njega pohrani svih pet elemenata, a iz drugog 
niza pohrani samo parne elemente.
Napisati na ekran elemente tog treceg novokreiranog niza kao i broj elemenata 
tog niza.
*******************************************************************************/
#include <iostream>

using namespace std;

int
main ()
{

  int skupA[5] = { 78, 56, 87, 98, 120 };
  int skupB[5] = { 112, 123, 56, 89, 10 };

cout << "Prvi niz brojeva je: ";
for (int skup:skupA)
    {
      cout << skup << " ";
    }
  cout << endl;

  cout << "Drugi niz brojeva je: ";
for (int skup:skupB)
    {
      cout << skup << " ";
    }
  cout << endl;

 cout << "Parni brojevi iz drugog niza: ";
for (int parni:skupB)
    {
      if (parni % 2 == 0)
	cout << parni << "  ";
    }
  cout << endl;


  cout << "Komplet prikaz: ";
for (int skup:skupA)
    {
      cout << skup << " ";
    }
for (int parni:skupB)
    {
      if (parni % 2 == 0)
	cout << parni << "  ";
    }


  return 0;

}
