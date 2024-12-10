/******************************************************************************

Samira ima kutiju punu perli za pravljenje narukvica. One na sebi imaju napisan dvocifren broj.

Samira će nasumično uzimati perle i od njih 15 napraviti narukvicu.

Ono što Samiru zanima jeste koliko puta joj se slučajno desilo da je broj koji je napisan 
na perlici djeljiv sa pozicijom perlice u nizu na narukvici. Samira je te slučajeve zvala dobro uparenim brojevima.

Zamolila je starijeg brata da napiše program koji bi za nju provjeravao koliko puta se desila ta slučajnost. 
Naravno ona je bratu redom čitala brojčane vrijednosti koje je on unosio u program. 
Program je na kraju unosa na ekran ispisivao poruku o dobro broju dobro uparenih brojeva.

Brat je napisao program i Samira je bila jako zadovoljna.

Napišite i vi program koji rješava navedeni problem i budite zadovoljni sa dodatnim 
bodovima na testu. Koristite nizove, petlje, blok odluke i operator ostatak pri cjelobrojnom dijeljenju.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
int niz[15],N=0;
   
cout<<"Unesite broj perle "<<endl;

for(int i=0;i<16;i++){
do{
cin>>niz[i];
}
while(niz[i]<9 || niz[i]>100);

if(niz[i]%(i+1)==0) {N++;}
}
cout<<"Broj uparenih perli je "<<N<<endl;

return 0;
}



