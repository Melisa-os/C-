/******************************************************************************
2. Napisi program koji ucitava, a zatim ispisuje uneseni tekst.
ULAZ: Ana voli Milovana. IZLAZ: Uneseni tekst je: Ana voli Milovana.
ULAZ: Ja sam ucenik osnovne skole. IZLAZ: Uneseni tekst je: Ja sam ucenik osnovne skole.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{   char str[100];
    cout<<"Unesi tekst : ";
    cin.get(str,100);
    cout<<"Unijeli ste : "<<str<<endl;
    return 0;
}
