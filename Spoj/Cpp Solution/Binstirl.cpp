#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
int main()
{
    int t;
    long long  n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        if( (n-m)&(m-1)/2)
            printf("0\n");
        else
            printf("1\n");
    }


   return 0;
}
