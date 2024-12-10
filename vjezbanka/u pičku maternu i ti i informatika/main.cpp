/******************************************************************************
4. Napisi program koji broji koliko u unesenom tekstu ima samoglasnika, a koliko
suglasnika.
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
    || rec[i]=='u' || rec[i]=='U'
    || rec[i]=='y' || rec[i]=='Y') sam++;
    else if (rec[i]=='a' || rec[i]=='A' 
    || rec[i]=='b' || rec[i]=='B'
    || rec[i]=='c' || rec[i]=='C'
    || rec[i]=='d' || rec[i]=='D' 
    || rec[i]=='f' || rec[i]=='F'
    || rec[i]=='g' || rec[i]=='G'
    || rec[i]=='h' || rec[i]=='H'
    || rec[i]=='j' || rec[i]=='J'
    || rec[i]=='k' || rec[i]=='K' 
    || rec[i]=='l' || rec[i]=='L'
    || rec[i]=='m' || rec[i]=='M'
    || rec[i]=='n' || rec[i]=='N'
    || rec[i]=='p' || rec[i]=='P'
    || rec[i]=='q' || rec[i]=='Q' 
    || rec[i]=='r' || rec[i]=='R'
    || rec[i]=='s' || rec[i]=='S'
    || rec[i]=='t' || rec[i]=='T'
    || rec[i]=='v' || rec[i]=='V' 
    || rec[i]=='w' || rec[i]=='W'
    || rec[i]=='x' || rec[i]=='X'
    || rec[i]=='z' || rec[i]=='Z') sug++;
    cout <<"Broj samoglasnika je "<<sam<<endl;
    cout<<"Broj suglasnika je "<<sug<<endl;
    
    return 0;
}