/******************************************************************************
Izračunati prosjek ocjena ,sa 24 učenika u odjeljenju.(dvodimenzionalni niz)
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{  int ocene[3][8]={ {2,3,2,2,4,5,5,4},{2,5,2,5,4,5,5,4},{ 2,4,4,2,4,3,5,4}};
   int zbir=0;
   double prosjek;
    for (int i=0;i<3;i++) { 
        for(int j=0;j<8;j++) { zbir= zbir+ocene[i][j];
        cout<< ocene[i][j] ;}
        cout<<endl;}
       cout<<"prosjek : "<<endl;
       prosjek=zbir/(3.0*8.0) ;
       cout<<prosjek;
        
    return 0;
}

