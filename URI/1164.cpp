#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
long long int perfectnum(long long int);
bool checkdiv(long long int n)
{
    if(n == perfectnum(n))
        return 1;
    else
        return 0;
}
long long int perfectnum(long long int num)
{
    long long int sum=0,k = num/2,i;
    for(i=1 ; i <= k; i++)
    {
        if(num % i == 0)
            sum += i;
    }
    return sum;

}
int main()
{
   long long int t,n;
   scanf("%lld",&t);
   while(t--)
   {
       scanf("%lld",&n);
       if(checkdiv(n))
          printf("%lld eh perfeito\n",n);
       else
          printf("%lld nao eh perfeito\n",n);
   }

   return 0;
}
