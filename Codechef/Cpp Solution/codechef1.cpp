#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
long long int a,b,c,d;
while(1)
{
scanf("%lld %lld %lld",&a,&b,&c);
if(a+b+c == 0) break;
else
{
if( (2*b) == (a+c))
 {
   d = (b-a);
   printf("AP %lld\n",(c+d));
 }
else
{
   d = (b/a);
   printf("GP %lld\n",(c*d));

}
}
}
return 0;
}
