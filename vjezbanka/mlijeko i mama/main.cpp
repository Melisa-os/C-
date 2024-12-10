/*1.Mlada majka vodi evidenciju o prehrani bebe u prvim mjesecima života.
Svaki dan unosi količinu mlijeka u mililitrima, na kraju sedmice želi znati 
prosječnu količinu mlijeka koju je njena beba konzumirala u toku te sedmice. 
Također na kraju mjeseca želi znati prosječnu količinu mlijeka koju je beba 
konzumirala u toku mjeseca.  Mama će 6 mjeseci voditi evidenciju o prehrani dojenčeta.
Napišite program koji će za nju vršiti proračun i obavještavati je o prosječnim 
vrijednostima na sedmičnom, mjesečnom i polugodišnjem nivou.
*******************************************************************************/
#include <iostream>
using namespace std;
int
main ()
{
  int dmil, ssuma = 0, msuma = 0;
  double smil[24], mmil[6], sedmice = 0;
  int j = 0, m = 0, pola_godine = 0;

 do{
  
    for(int i=1;i<=7;i++){
        cout<<"Unesi dnevni unos mlijeka u mil: ";
        cin>>dmil;
        ssuma+=dmil;
    }
    smil[j]=ssuma/7.0;
    cout<<"Za sedmicu redni broj: "<<j+1<<" konzumirano je: "<<smil[j]<<" milijeka."<<endl;
    sedmice+=smil[j]; 
    j++;
    if(j%4==0) {
        mmil[m]+=sedmice/4;
        cout<<"Za mjesec redni broj: "<<m+1<<" konzumirano je: "<<mmil[m]<<" milijeka."<<endl;
        sedmice=0; 
        m++;
    }
    
} while(j<24);
   
   for(int n=0;n<6;n++) pola_godine+=mmil[n];
   
   cout<<"Za pola godine potrošnja mlijeka je prosječno bila: "<<pola_godine/6<<endl;
   

    return 0;



}



