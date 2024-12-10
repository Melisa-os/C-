/******************************************************************************
6. Napisati program u koji ucitava 10 brojeva, pa u jedan red ispisuje prane, 
a u drugi neparne.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
 int niz[10];

 cout<<"Unesi brojeve: "<<endl;
 for(int i=0; i<10; i++)
 cin>>niz[i];

 for(int i=0; i<10; i++)
 {
 
 if(niz[i]%2==0)
 cout<<niz[i]<<" ";
 }
 cout<<endl; 
 for(int i=0; i<10; i++)
 {
 
 if(niz[i]%2!=0)
 cout<<niz[i]<<" ";
 }

 cout<<endl; 

    return 0;
}
