/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{  int suma=0, k, m;
    cin >>k >>m;
    
    for (int i=k+1;i < m;i++)
        if (i%2==0) suma=suma+i;
    cout << suma << endl;

    return 0;
}



