#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
   while(1)
   {
       int r1,r2,x1,x2,y1,y2,d,a,b;
       cin>>r1>>x1>>y1>>r2>>x2>>y2;
       if(cin.eof()) break;
       else
        a = abs(x2-x1);
        b = abs(y2-y1);
        d = sqrt ( ((a*a) + (b*b)) );
        //cout<<d<<endl;
        if( r1 > abs(d-r2))
              printf("RICO\n");
        else
              printf("MORTO\n");
   }

   return 0;
}
