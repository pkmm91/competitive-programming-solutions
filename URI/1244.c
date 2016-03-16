#include <algorithm>
#include <climits>
#include <vector>
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main ()
{
    int n;
    long long int m;
    double a, b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lld",&m);
        a = (1 + 8*m);
        b = (-1 + sqrt(a))/2;
        printf("%lld\n",long long int(b));
    }
    return 0;
}

