/******************************************************************************
1. Napisi program koji ucitava neku rijec, pa ju zatim ispisuje. 
Ako se unese vise rijeci, program treba da ispise samo prvu rijec.
ULAZ: Mirza IZLAZ: Unesena rijec je: Mirza
ULAZ: Mirza Mekic IZLAZ: Unesena rijec je: Mirza Mekic

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{    char str[100];
    cout<<"Unesi tekst :";
    cin>>str;
    cout<<"Unijeli ste :"<<str<<endl;

    return 0;
}
