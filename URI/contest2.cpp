#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int a = 4294967295;
    long long int b,t;
    scanf("%lld",&t);
    while(t--)
    {
    scanf("%lld",&b);
     long long int result = (a-b);
     printf("%lld\n",result);
    }
    return 0;
}
