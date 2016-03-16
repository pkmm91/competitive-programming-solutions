#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n,t,i;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);
    int a[n],b[n];
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for (i = 1; i <= n; i++) {
      b[i] = a[i];
    }
     printf("The copied array is :");
     for (i = 1; i <= n; i++)
      printf("\narr2[%d] = %d", i, b[i]);

    }
    return 0;
}
