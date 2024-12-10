/******************************************************************************
4. Napisi program koji broji koliko u unesenom tekstu ima samoglasnika, a koliko suglasnika.
ULAZ: Ana voli Milovana. IZLAZ: Tekst ima 8 samoglasnika i 7 suglasnika
ULAZ: Ja imam 12 godina IZLAZ: Teks ima 6 samoglasnika i 6 suglasnika

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
int main()
{ 
    string rec,r[100];
    int d,i,sam,sug;
    cout<<"Unesi neki tekst: "<<endl;
    getline (cin,rec);
    d=rec.size(),
    sam=0;
    sug=0;
    for (i=0;i<d;i++)
    if (rec[i]=='a' || rec[i]=='A' 
    || rec[i]=='e' || rec[i]=='E'
    || rec[i]=='i' || rec[i]=='I'
    || rec[i]=='o' || rec[i]=='O'
    || rec[i]=='u' || rec[i]=='U') sam++;
   bool
  else if (((rec='a' && rec='z')||(rec='A' && rec='Z')&& !sam)) sug++;
    cout <<"Broj samoglasnika je "<<sam<<endl;
    cout<<"Broj suglasnika je "<<sug<<endl;
    return 0;}