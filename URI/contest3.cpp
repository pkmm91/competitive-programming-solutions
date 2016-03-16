#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    long long int pow2 = (1<<a);
    long long  int result = ((1<<pow2) % b);
    printf("%lld\n",result);
    return 0;
}
