#include <iostream>
#include <cstdio>
#include <cmath>
long long int size = 1000;
using namespace std;

int main()
{
    int t;
    long long int a,b;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%lld %lld",&a,&b);
    long long int arr[size],i=1,j,ans=-1,k=1,l,count=0;;
    for(j = a; j <= b; j++)
    {
        arr[i] = a;
        a++; i++;
        count++;
    }
    for(k = 1; k <= count ;k++)
    {
        for(l = k+1; l <= count ;l++)

           {
              ans = max(ans,(arr[k]&arr[l]) );
           }

    }
    printf("%lld\n",ans);
    }
    return 0;
}

