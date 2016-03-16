#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
   int n;
   while(1)
   {
   std::cin>>n;
   int i,c1=0,c2=0,a[n],b[n];
   if (n == 0) break;
   else
      for (i =0 ;i < n ; i++)
      {
        std::cin>>a[i]>>b[i];
        if (a[i] > b[i])
        {
           c1++;
        }
        else if (a[i] < b[i])
        {
            c2++;
        }
      }
    printf("%d %d\n",c1,c2);
   }
    return 0;
}
