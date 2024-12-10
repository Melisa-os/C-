/******************************************************************************
napiše program koji sabira na sumu brojeve od 1 do 20. 
Ako korisnik programa unese 0 moguće je prekinuti sabiranje na sumu 
i prije nego saberete sve brojeve od 1 do 20

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int sum,brojevi;
    sum=0;
    cout<<"Unesi brojeve od 1 do 20: ";
    cin>>brojevi;
    cout<<"Suma brojeva od 1 do 20 je: ";
    for(int i=1;i<20;i++) 
    {sum=sum+i;cout<<sum<<endl;
    if(brojevi==0) cout<<"kraj"<<endl;}
    return 0;
}
