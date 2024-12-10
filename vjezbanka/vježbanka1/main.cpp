/******************************************************************************
1. Napisati program koji omogućava unos dvije ocjene i računa njihov zbir koji 
ispisuje na ekran. 

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{   int a,b,c;
    cout<<"Unesi prvu ocjenu : ";
    cin>>a;
    cout<<"Unesi drugu ocjenu : ";
    cin>>b;
    c=a+b;
    cout<<"Zbir ocjena je "<<c<< ".";

    return 0;
}
