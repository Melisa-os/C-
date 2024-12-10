/******************************************************************************
5. Napisi program koji ucitava neki tekst, pa ga zatim ispisuje unazad.
ULAZ: Ana voli Milovana IZLAZ: Tekst ispisan unazad je: anavoliM ilov anA
ULAZ: programiranje IZLAZ: Tekst ispisan unazad je: ejnarimargorp

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
   int br,i;
    string tex;
    cout<<"Unesi neki tekst: "<<endl;
    getline (cin,tex);
    cout<<"Text ispisan unazad je:"<<endl;
    br=tex.size();
    for (i=br-1;i>=0;i--)
    {cout<<tex[i];}
    
    return 0;
}
