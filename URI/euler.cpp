#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int power(int a, int n) {
double ret = 1;
while(n) {
if(n%2 == 1) ret *= a;
a *= a; n /= 2;
}
return ret;
}

int main() {
     int test;
     int a,b,m;
     scanf("%d",&test);
     while(test--)
     {
     scanf("%d %d",&a,&m);
     b =  (m-1)/2;
     if ((power(a,b)%7) == 1)
         printf("YES\n");
     else
         printf("NO\n");
         }
    return 0;
}
