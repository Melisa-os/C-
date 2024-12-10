/******************************************************************************
Kažu da je težak put ka uspjehu, a uspjeh definišu na razne načine. Naročito je bitno znati da težina puta zavisi od motivacije, pa se često čini da je onima koji imaju uspjeh mnogo lakše nego onima koji ga nemaju. Zanemarujemo da težina zavisi od motivacije.

Kada je ovo shvatio Mirza je pristupio nastavi programiranja sa posebnom motivacionom energijom i iskodirao je kod koji mu je na osnovu unesenog podataka o broju sati provedenih u učenju programiranja na sedmičnom nivou ispisivao motivacione poruke.

Ako je unio manje od jednog sata ispisao bi “Možeš ti to puno bolje, znaš da je razmišljanje o problemu put ka rješenju.”

Ako je unio između jednog sata i dva sata ispisao bi “Nije loše, ipak znaj kuća se ne pavi jedan dan al se sruši za jedan dan. Površno učenje kratko traje.”

Ako je unio između dva sata i tri sata ispisao bi “Na dobrom si putu, svaki dan će ti biti lakše jer razumiješ da bez uloženog truda nema uspjeha.”

Ako je unio između tri sata i pet sata ispisao bi “Čestitam, već si se dobro zaigrao ova utakmica bi te mogla odvesti na prvenstvo.”

Ako je unio između pet sata i sedam sata ispisao bi “Ooo samo tako, svaki dan korak-dva i stići ćeš tamo gdje te tvoj cilj vodi.”

Ako je unio više od  sedam sata ispisao bi “ Nema ništa od prazne priče, ti to već znaš, zato te tvoji uspjesi svakoga dana vode na odredište koje si sebi postavio za cilj. ”

Navedeno realizirajte i vi uz pomoć switch-case naredbe. Voditi računa o ispravnosti unesenog broja. Možete koristiti naredbu goto.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{   int a;
pocetak: cout<<"Unesite koliko ste sati učili :";
    cin>>a;
    switch(a) {
     case 1:if (a<1) cout<<"Možeš ti to puno bolje"; break;
     case 2:if (a>1 && a<=2) cout<<"Nije loše,ipak znaj kuća se nepravi jedan dan"; break;
     case 3:if(a>2 && a<=3) cout<<"Na dobrom si putu"; break;
     case 4:if(a>3 && a<=5) cout<<"Čestitam, već si se dobro zaigrao"; break;
     case 5:if(a>5 && a<=7) cout<<"Ooo samo tako nastavi"; break;
     case 6:if(a>7) cout<<"Nema ništa od prazne priče, ti to već znaš, zato te tvoji uspjesi svakoga dana vode na odredište koje si sebi postavio za cilj.";break;
     default: goto  pocetak;
     
    }

    return 0;}








