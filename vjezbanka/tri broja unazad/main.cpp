/******************************************************************************

Pošto je svaki dan prilično isti Elma je odlučila napisati program koji makar nešto mijenja. 
Odlučila je da kada unese neki tekst taj 
program za nju sva slova promješa i to tako da ih pomakne za 3 mjesta u abecedi, i onda tako izmješan tekst ispiše na ekran.

Naravno da bi Elma bila sigurna da je promjenjeni tekst moguće vratiti u prvobitno
stanje, napisala je nekoliko linija koda koje su to i činile i nakon njih je ponovo ispisala tekst u izvornom obliku.

Npr. Ako bi Elma unijela "A,B,C Su slova" nakon mješanja bi pisalo: "D,E,F zx zoryd"

Napišite i vi program koji radi isto. Koristite se varijablama tipa string. Radite u oblasti engleskog alfabeta.

Primjetite da je program pomjerao samo slova za tri mjesta, i vodite računa da će se
x,y i z pomaknuti redom na a,b i c (dakle alfabet je kao u krug zapisan). 
Možete koristiti ugrađene funkcije za provjeru da li je posmatrani simbol slovo ili nije.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string tekst;
   cout<<"unesite neku recenicu: ";
   getline(cin,tekst);
for(int i=0;i<tekst.length();i++)
{
if(isalpha(tekst[i]))
{
if(tekst[i]=='z') tekst[i]='c';
else if(tekst[i]=='y') tekst[i]='b';
else if(tekst[i]=='x') tekst[i]='a';
else if(tekst[i]=='Z') tekst[i]='C';
else if(tekst[i]=='Y') tekst[i]='B';
else if(tekst[i]=='X') tekst[i]='A';
else tekst[i]+=3;
}
}
cout<<"promjenjeni tekst je: "<<tekst;
    return 0;
}




