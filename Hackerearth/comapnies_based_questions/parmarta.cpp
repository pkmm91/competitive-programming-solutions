#include <cstdio>
#include <iostream>
#include <cassert>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       long long n;
       scanf("%lld",&n);
       long long arr[n] , i, c = 0;
       for(i=1; i <= n; i++)
           arr[i] = 0;
       for(i = 1 ; i <= n ; i++)
           if( i % n == 0)
                if(arr[i] == 0)
                      arr[i] = 1;
                else
                      arr[i] = 0;
        for(i=1 ; i <= n; i++)
            if(arr[i] == 1)
                c++;
        printf("%lld",c);
    }
    return 0;
}
