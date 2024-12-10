/******************************************************************************
9. Napišite program koji učitava 10 brojeva a zatim saopštava kumulativnu sumu brojeva niza.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{  int niz[10];
 int suma = 0;
 cout<<"Unesi brojeve: "<<endl;
 for(int i=0; i<10; i++)
 cin>>niz[i];

 for(int i=0; i<10; i++)
 {
 suma = suma + niz[i];
 cout<<suma<<" ";
 }

 cout<<endl;

    return 0;
}
