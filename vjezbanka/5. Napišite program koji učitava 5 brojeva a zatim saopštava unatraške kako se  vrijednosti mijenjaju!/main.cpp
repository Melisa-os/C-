/******************************************************************************
5. Napišite program koji učitava 5 brojeva a zatim saopštava unatraške kako se 
vrijednosti mijenjaju!

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{  int niz[5];

 cout<<"Unesi brojeve: "<<endl;
 for(int i=0; i<5; i++)
 cin>>niz[i];

 for(int i=4; i>0; i--) 
 {
 if(niz[i]<niz[i-1])
 cout<<"raste ";
 else if(niz[i]==niz[i-1])
 cout<<"isto ";
 else
 cout<<"pada ";
 } 

    return 0;
}
