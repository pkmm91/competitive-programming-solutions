#include <iostream>
#include <cstdio>
using namespace std;
void onedigit(long long int s)
{
    long long int a,b,c,d,sum = 0;
    while( s > 0)
    {
        a = s%10;
        sum = sum + a;
        s = s/10;
    }
    if (sum >= 0 && sum < 10)
    {
        printf("%lld\n",sum);
    }
    else
    {

     onedigit(sum);
    }
}
int main()
{
long long int s=0,a;
int t,i;
scanf("%d",&t);
long long int arr[t];
for(i = 0; i < t; i++)
   scanf("%lld",&arr[i]);
for(i = 0; i < t; i++)
{
    s += arr[i];
}
onedigit(s);
return 0;
}
