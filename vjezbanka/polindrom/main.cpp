/******************************************************************************
Za neki broj kažemo da je palindroman ukoliko je jednak broju koji se dobije
čitanjem njegovih cifara u
obrnutom poretku. Na primjer, broj 6574756 je palindroman broj. Napisati program koji traži da se sa
tastature unese cijeli broj n, a zatim na ekran ispisuje da li je broj n palindroman ili nije.
Za realizacijuprograma ne koristiti nizove.
*******************************************************************************/
#include <iostream>
using namespace std;
int
main ()
{   int n, num, digit, rev = 0;

     cout << "Unesi pozitivan broj: ";
     cin >> num;

     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);


     if (n == rev)
         cout << " Broj je polindrom.";
     else
         cout << "Broj nije polindrom .";
         
         return 0;
}




