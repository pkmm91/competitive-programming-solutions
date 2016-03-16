#include<bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int findmax(long long  c,long long  d,long long  k)
{
    long long  p=1,sum= 0;
    while(1)
        {
            if(  (p * c) > k  ) break;

            else
                sum += (d);
                p++;
        }
        //printf("%lld\n",sum);
        return sum;

}
int main()
{
int t;
long long  n,k;
scanf("%d",&t);
while(t--)
{
    scanf("%lld %lld",&n,&k);
    long long a[n],b[n],arr[n],i=1,max=0;
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&b[i]);
    }
    for(i=1;i<=n;i++)
    {
        arr[i] = findmax(a[i],b[i],k);
       // printf("%lld\n",arr[i]);
        if(arr[i] >= max)
        {
            max = arr[i];
        }

    }
    //std::sort(arr, arr +n);
    //long long int  max = *std::max_element(arr, arr + n);
    printf("%lld\n",max);
}
    return 0;
}
