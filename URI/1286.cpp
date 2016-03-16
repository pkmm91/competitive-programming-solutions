#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#define numOfProducts 5
using namespace std;
int motoboy(int a[], int b[], int W, int n)
{
    int i,w;
    int K[n+1][W+1];
    for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (b[i-1] <= w)
                 K[i][w] = max(a[i-1] + K[i-1][w-b[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }

   return K[n][W];
}
int main ()
{
	int n,w;
	while(1)
    {
        std::cin>>n;
        int a[n],b[n],i;
        if(n == 0) break;
        else
            std::cin>>w;
            for(i = 0; i < n ; i++)
               std::cin>>a[i]>>b[i];
        printf("%d min.\n",motoboy(a,b,w,n));


    }
  return 0;
}

