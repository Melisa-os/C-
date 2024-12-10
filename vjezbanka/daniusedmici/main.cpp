/******************************************************************************
2.2. VJEŽBA
Napisi program koji, za uneseni redni broj dana u sedmici, 
ispisuje koji je to dan. Ako uneseni broj nije u intervalu od 1 do 7, 
program treba da ispise “Greska! Morate unijeti neki broj u intervalu od 1
do 7! “ i da ponovi unos.
ULAZ: 3 IZLAZ: Srijeda
ULAZ: 9 IZLAZ: Greska! Morate unijeti neki broj u intervalu od 1 do 7!
Unesite broj nekog dana u sedmici…

*******************************************************************************/
#include <iostream>
using namespace std;
int
main ()
{
   int n;
   cout<<"Unesite redni broj nekog dana u sedmici: ";
    cin>>n;
        switch(n) { case 1: cout<<"Ponedjeljak"<<endl;
    break;
    case 2: cout<<"Utorak"<<endl;
    break;
    case 3: cout<<"Srijeda"<<endl;
    break;
    case 4: cout<<"Cetvrtak"<<endl;
    break;
    case 5: cout<<"Petak"<<endl;
    break;
    case 6: cout<<"Subota"<<endl;
    break;
    case 7: cout<<"Nedjelja"<<endl;
    break;
    default:
    cout<<"Greska! Morate unijeti brojeve od 1 do 7!"<<endl;}
    
  return 0;
}
