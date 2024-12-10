/******************************************************************************
Od unesenog nizza od 10 brojeva odrediti jeli niz opadajući ili rastući

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int niz[10];
 bool jeste = true; 
 cout<<"Unesi brojeve: ";
 for(int i=0; i<10; i++)
 cin>>niz[i];

 
 for(int i=0; i<9; i++)
 if(niz[i]<=niz[i+1]) 
 jeste = false;

 if(jeste == true)
 cout<<"jeste opadajuci"<<endl;
 else
 cout<<"nije opadajuci"<<endl; 


    return 0;
}

