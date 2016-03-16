#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main ()
{
   int qntd, a = 1;
   cin >> qntd;
   for (int x = 1; x <= qntd; x ++) {
         a = x;
         cout << (a) <<" ";
         cout << (a*a) <<" ";
         cout << (a*a*a) <<" ";
         cout << endl;
      }
     return 0;

      }

