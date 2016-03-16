#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mod = 1000000007;
ll gcd(ll a, ll b)
{
if (b == 0)
		return a;
	else
		return gcd (b, a % b);
}
ll fib(ll n)
{
  if (n==0) return 0;
  if (n==1) return 1;
  return fib(n-2) + fib(n-1);
}
int main()
{
    ll t,a,b;
    scanf("%lld",&t);
    while(t--)
    {
            ll n=0,fn=0;
            scanf("%lld %lld",&a,&b);
            n = gcd(a,b);
            fn = ( fib(n) % mod );
            printf("%lld\n",fn);
    }
   return 0;
}
