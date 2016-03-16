#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
   int t,n,i,j;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)

      {
      scanf("%d",&a[i]);
      }
   std::sort(a,a+n);
   int count = 0;
   std::set<int> S(a,a+n);
   for(set<int>::iterator it=S.begin();it!=S.end();it++)
   {
       for(j=0;j<n;j++)
       {
           if(*it == a[j])
            count++;
       }
      printf("%d aparece %d vez(es)\n",*it,count);
      count = 0;
   }
    return 0;
}
