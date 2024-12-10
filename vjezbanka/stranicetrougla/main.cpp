/******************************************************************************
Napisi program koji, za unesene tri stranice trougla, izracunava
povrsinu tog trougla, pomocu Heronove formule.
ULAZ: a=6, b=8, c=10          IZLAZ: Povrsina trougla je 24.
ULAZ: a=5, b=5, c=6          IZLAZ: Povrsina trougla je 12.

*******************************************************************************/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a,b,c,s,P;
    cout<<"Unesi stranice trougla: ";
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    P=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Površina trougla je "<<P<<endl;
    
    return 0;
}
