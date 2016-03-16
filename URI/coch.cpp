#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
long long   MOD = 1000000007;
double  mult(long long  a, long long  b)
{
    double ret = 1;
    while(b)
    {
        if(b%2 == 1) ret = ret* (a%MOD);
        a  = (a* a)%MOD;
        b /= 2;
    }
	return (ret);
	}

int main ()
{
  int t;
  long long a ,b;
  scanf("%d",&t);
  while(t--)
  {
      scanf("%lld %lld",&a,&b);
      printf("%0.0lf\n",mult(a%MOD,b%MOD));
  }
  return 0;
}
