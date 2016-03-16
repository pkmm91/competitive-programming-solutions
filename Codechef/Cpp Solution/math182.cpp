#include <cstdio>
#include <iostream>
#include <cassert>
#include <cmath>
#include <cstring>
void multiply(long long F[2][2], long long M[2][2]);
void power(long long F[2][2], long long n);
int noOfDigit(long long a)
{
    int n = 0;
    while (a > 0)
    {
        a /= 10;
        n++;
    }
    return n;
}
long long gcd(long long a , long long b)
{
    if (b == 0)
        return a;
    else
        return gcd(b  , a % b);
}
long long fib(long long n)
{
  long long F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1);
  return F[0][0];
}
void power(long long F[2][2], long long n)
{
  if( n == 0 || n == 1)
      return;
  long long M[2][2] = {{1,1},{1,0}};

  power(F, n/2);
  multiply(F, F);

  if (n%2 != 0)
     multiply(F, M);
}

void multiply(long long F[2][2], long long M[2][2])
{
  long long x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
  long long y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
  long long z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
  long long w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];

  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
long long multiplication(long long x, long long y)
{
    int n = noOfDigit(x);
    int m = noOfDigit(y);
    if ( x < 100 && y < 100)
        return ( x * y);
    long long linearConvolution[n + m - 1];
    for (int i = 0; i < (n + m - 1); i++)
        linearConvolution[i] = 0;

    long long p = x;
    for (int i = 0; i < m; i++)
    {
        x = p;
        for (int j = 0; j < n; j++)
        {
            linearConvolution[i + j] += (y % 10) * (x % 10);
            x /= 10;
        }
        y /= 10;
    }
    long long product = 0;
    long long  nextCarry = 0, base = 1;
    for (int i = 0; i < n + m - 1; i++)
    {
        linearConvolution[i] += nextCarry;
        product = product + (base * (linearConvolution[i] % 10));
        nextCarry = linearConvolution[i] / 10;
        base *= 10;
    }
    return product;
}
using namespace std;
int main ()
{
    int t , a0 , a1 , a2 , b0 , b1 , b2;
    long long n , m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %d %d %d %d %d %d %lld" , &n , &a0 , &a1 , &a2 , &b0 , &b1 , &b2 , &m);
        long long A = multiplication(a0, fib(n)) + multiplication(a1, fib(n+1)) + multiplication(a2, fib(n+2));
        long long B = multiplication(b0, fib(n)) + multiplication(b1, fib(n+1)) + multiplication(b2, fib(n+2));
        printf("%lld\n",gcd( A%m , B%m )% m);
    }
return 0;
}
