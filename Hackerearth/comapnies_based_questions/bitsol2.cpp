#include <iostream>
#include <cstdio>
#define ll long long
using namespace std;

int main()
{
   ll n;
   scanf("%lld" , &n);
   ll arr[n];
   for(ll i = 1; i <= n ; i++)
   {

       scanf("%lld" , &arr[i]);
   }
   ll val = arr[i];
   printf("%lld " , val);
   for( ll i = 2; i <= n; i++)
   {
       val = arr[i] * i;
       printf("%lld " , val - arr[i-1]);
   }
   printf("\n");
    return 0;
}
