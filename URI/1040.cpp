#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int findFirst(int *array, int d, int l, int h)
{
 while( l <= h)
 {
  int m = (l+h)/2;
  if( array[m] == d )
  {
   if( m > 0 && array[m] == array[m-1])
   {
    h= m-1;
   }
   else
    return m;
  }
  else if ( array[m] < d)
  {
   l = m+1;
  }
  else
  {
   h = m-1;
  }
 }
 return -1;
}
int main()
{
    int n,q,i,j=1,k=1;
    while(1)
    {
        scanf("%d %d",&n,&q);
        int arr[n],query[q];
        if(n + q == 0) break;
        else
        {
        for(i=0;i< n;i++)
               scanf("%d\n",&arr[i]);
        std::sort(arr,arr + n);
        for(j=0;j<q;j++)
                scanf("%d\n",&query[j]);
        printf("CASE# %d:\n",k);
        for(j=0;j<q;j++)
        {
                int p = findFirst(arr,query[j],0,n-1);
                (p == -1) ? printf("%d not found\n",query[j]) : printf("%d found at %d\n",query[j],p+1) ;
        }
        k++;
        }
       }
    return 0;
}
