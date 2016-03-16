#include <algorithm>
#include <climits>
#include <vector>
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main ()
{
    int a,b,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&a, &b);
        printf("%d cm2\n",(a*b)/2);
    }
    return 0;
}

