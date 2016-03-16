#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
    int i,count=0;
   for(i=0;i<5;i++)
   {
       int n;
       cin>>n;
       if(n % 2 == 0)
          count++;
   }
printf("%d valores pares\n",count);
return 0;
}
