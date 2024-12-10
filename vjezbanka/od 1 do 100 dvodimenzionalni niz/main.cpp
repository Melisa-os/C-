/******************************************************************************
Ispisati prvih 100 brojeva u 10 redova i 10 kolona

*******************************************************************************/

#include <iostream>

using namespace std;
int B[10][10];
int
main ()
{
  
  int a;

  for (int i = 0; i < 10; i++)
    {
      for (int j = 0; j < 10; j++)
	{
	  int a = 10 * i + (j + 1);
	  B[i][j] = a;
	  cout << (" %2d ", a);

	}


      cout << endl;
    }


  return 0;
}

