/******************************************************************************
3. Promjeniti predhodni primjer tako da korisnik može unositi ocjene neprestano 
sve dok ne unese nulu. Unesene vrijednosti treba sabirati na jednu sumu. 
Napomena: I dalje treba voditi računa o tome da kada unese broj koji nije 
ocjena da taj broj ne dodaje na sumu. *
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
     int i,a,b, uk=0;

    for (i=1; i<=5; i++)
    cout<<"Unesi dvije ocjene"<<endl;
    cin>>a>>b;
for (a && b >1.5)
if (a<0 && b<0) cout<<"Jedan od brojeva nije ocjena"<<endl;
 else   cout <<  "zbir: "<<a+b<<endl;
    return 0;
    return 0;
}
