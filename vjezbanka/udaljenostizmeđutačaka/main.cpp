/******************************************************************************
Napisi program koji za unesene koordinate, u pravouglom koordinatnom sistemu, 
nekih tacaka A(x1,y1) i B(x2,y2), izracunava i ispisuje udeljenost tih tacaka.
ULAZ: x1=3, y1=2, x2=-1, y2=-1          IZLAZ: Udaljenost tacaka A i B je 5
ULAZ: x1=3, y1=2, x2=2, y2=2          IZLAZ: Udaljenost tacaka A i B je 1
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    float x1,y1,x2,y2,d;
    cout<<"Unesi koordinate tacke A: "<<endl;
    cout<<"x1=";
    cin>>x1;
    cout<<"y1=";
    cin>>y1;
    cout<<"Unesi koordinate tacke B: "<<endl;;
    cout<<"x2=";
    cin>>x2;
    cout<<"y2=";
    cin>>y2;
    d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    cout<<"Udaljenost tacaka A i B je "<<d<<endl;
    return 0;
}