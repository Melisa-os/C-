/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*Napisati program koji korisniku omogućava da unese neki broj između 1 i 10,
a zatim provjerava i ispisuje na ekran sve one brojeve koji su djeljivi sa tim brojem, 
a nalaze se u intervalu od 1 do 18.*/

#include <iostream>

using namespace std;
int
main ()
{
x:int broj, i;
  cout << "Unesi broj u između 1 i 10: " << endl;
  cin >> broj;
  if (broj > 10)
    {
      goto x;
    }
  for (i = 1; i <= 18; i++)
    if (i % broj == 0)
      cout << i << endl;
      else ( i>=11 or i<=0) ;
      cout<<"Ponovi unos broja"<< endl;
  return 0;
}
