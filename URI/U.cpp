#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int binarysearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;

        if (arr[mid] == x)  return mid;


        if (arr[mid] > x) return binarysearch(arr, l, mid-1, x);


        return binarysearch(arr, mid+1, r, x);
   }


   return -1;
}
int main()
{
    int arr[10000],query[10000],n,q,i,j,k=1;
    while(1)
    {
        scanf("%d %d",&n,&q);
        if(n + q == 0) break;
        else
        {
        for(i=0;i<n;i++)
               scanf("%d\n",&arr[i]);
        std::sort(arr,arr + n);
        for(j=0;j<q;j++)
                scanf("%d\n",&query[j]);
        printf("CASE# %d:\n",k);
        for(j=0;j<q;j++)
        {
                int p = binarysearch(arr,0,n-1,query[j]);
                (p == -1) ? printf("%d not found\n",query[j]) : printf("%d found at %d\n",query[j],p+1) ;
        }
        k++;
        }
       }
    return 0;
}
