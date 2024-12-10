/*4. Napisati program koji ispisuje sve članove nekog niza cijelih brojeva koji su neparni.*/
#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cout << "Unesite broj clanova niza: ";
    cin >> n;
    int a[n]; 
    cout<<"Unos elemenata niza : "<<endl;
     for (i=0;i<n;i++)
    cin >> a[i];
    
    cout << "Neparni članovi niza  :" << endl;
    for (int i=0; i< n; i++)
    if (a[i]%2!=0)
      {  cout<< a[i] << endl;
    }


    return 0;
}