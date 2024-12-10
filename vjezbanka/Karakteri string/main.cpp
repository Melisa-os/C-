/********
3. Napisi program koji ucitava neki tekst, pa zatim ispisuje koliko uneseni 
tekst ima karaktera, racunajuci razmake, tacke, zareze…
ULAZ: Ana voli Milovana IZLAZ: Tekst ima 17 karaktera
ULAZ: Ja imam 12 godina. IZLAZ: Tekst ima 18 karaktera

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{    string tekst;
    cout<<"Unesi neki tekst: "<<endl;
    getline (cin,tekst);
    cout<<"Uneseni tekst ima ukupno "<<tekst.size()<<" karaktera "<<endl;

    return 0;
}
