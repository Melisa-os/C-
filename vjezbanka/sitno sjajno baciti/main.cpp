/*Amra bi rado da posprema sobu i zabavlja mlađu sestru.
Zato je napravila program gdje njena sestra može voditi evidenciju kakve je objekte Amra našla u laticama.
Sve objekte je podjelila u tri vrste: sitno, sjajno i baciti.

Svaki put kad Amra sestri kaže jednu od ove tri riječi sestra unese broj
1, 2 ili 3 i na taj način unese u program informaciju da li je Amra našla nešto sitno, ili sjajno ili za baciti.
Na kraju će Amra pogađati koliko objekata kojeg tipa je pronašla, a sestra će joj pročitati rezultat izvršenja programa.

Nadamo se da će sestra lijepo unositi i da će Amra dobro pamtiti šta je našla u laticama jer će joj na kraju program
ispisati koliko je pogriješila za koju vrstu objekta.

NPR. Amra pronađe dugme i kaže sitno, sestra unese u program 1, Amra kaže sjajno sestra unese u program 2 itd.
Na kraju program tačno zna koliko je puta sestra unijela informaciju za sitno, koliko za sjajno , a koliko za baciti.

Onda sestra unosi broj koji označava Amrino pogađanje o broju
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int predmet,sitno=0,sjajno=0,baciti=0,i,pokusaj1,pokusaj2,pokusaj3;
    cout<<"Unesi broj 1 za sitan predmet, 2 za sjajan i 3 za baciti:"<<endl;
    cout<<"Kada vam nestane predmeta unesite 0:"<<endl;
    
    for(i=predmet;i!=0;i++){
    pocetak1:
    cin>>predmet;
    if(predmet==1) sitno=sitno+1;
    else if(predmet==2) sjajno=sjajno+1;
    else if(predmet==3) baciti=baciti+1;
    else if(predmet==0) goto pocetak2;
    else {cout<<"Neispravan unos unosite brojeve od 1 do 3! ";
    goto pocetak1;    
    }}
    
    pocetak2:
    cout<<"Amra pokusaj pogoditi koliko je bilo kojih stvari:";
    cin>>pokusaj1;
    cin>>pokusaj2;
    cin>>pokusaj3;
    
    if(pokusaj1==sitno){
        cout<<"Bravo uspjela si pogoditi za sitno!";
    }
    else if(pokusaj1<sitno){
        cout<<" Nisi pogodila za sitno, promasila si za: "<<sitno-pokusaj1;
    }
    else if (pokusaj1>sitno){
         cout<<" Nisi pogodila za sitno, promasila si za: "<<pokusaj1-sitno;
    }
    
    
     if(pokusaj2==sjajno){
        cout<<" Bravo uspjela si pogoditi za sjajno!";
    }
    else if(pokusaj2<sjajno){
        cout<<" Nisi pogodila za sjajno, promasila si za: "<<sjajno-pokusaj2;
    }
    else if(pokusaj2>sjajno){
         cout<<" Nisi pogodila za sjajno, promasila si za: "<<pokusaj2-sjajno;
    }
    
    
     if(pokusaj3==baciti){
        cout<<" Bravo uspjela si pogoditi za baciti!";
    }
    else if(pokusaj3<baciti){
        cout<<" Nisi pogodila za baciti, promasila si za: "<<baciti-pokusaj3;
    }
    else if(pokusaj3>baciti){
         cout<<" Nisi pogodila za baciti, promasila si za: "<<pokusaj3-baciti;
    }
    
    return 0;
}

   


