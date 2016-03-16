#include <cstdio>
#include <cstdlib>
#include<iostream>
#include <cmath>
using namespace std;
int main ()
{
int r1, x1, y1, r2, x2 , y2, i, t;
int distanciax = 0, distanciay = 0, total = 0;
while (1)
{
cin>>r1>>x1>>y1>>r2>>x2>>y2;
if(cin.eof()) break;
else
{
distanciax = abs (x2-x1);
distanciay = abs (y2-y1);
total = sqrt (pow (distanciax, 2) + pow (distanciay, 2));
if (r2 <= abs (r1 - total) )
   printf ("RICO\n");
else
   printf ("MORTO\n");
}
 }
 return 0;
 }
