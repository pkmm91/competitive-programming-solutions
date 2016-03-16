#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cstdio>
using namespace std;
int main()
{
   int n,a,b;
   scanf("%d",&n);
   while(n--)
   {
       scanf("%d %d",&a,&b);
       int a1[a],b1[b],count=0;
       for(int i =0; i< a; i++)
           scanf("%d",&a1[i]);
       for(int i =0; i< b; i++)
           scanf("%d",&b1[i]);
       int c=0, d =0;
       std::sort(a1,a1+a);
       std::sort(b1,b1+b);
       while(c < a && d < b)
       {

        if(a1[c] == b1[d]) {
            count++;
            c++;
            d++;
        }
        else if(a1[c] > b1[d])
            d++;
        else
            c++;
       }
       printf("%d\n",count);
   }
   return 0;
}
