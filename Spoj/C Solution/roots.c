#include <iostream>
#include <cstdio>
#include <cmath>
int main()
{
int test,a,b,c,i;
double x1,x2,x3,ans;
scanf("%d",&test);
while(test--)
{
scanf("%d %d %d",&a,&b,&c);
for(x1=0,x2=2500,i=0;i<=50;i++)
{
x3 = (x1+x2)/2;
ans = ((a*x3) + (b*sin(x3)) - c);
if(ans == 0.000000 || (x2-x1)/2 < 0.000001)
break;
if(ans>0)
x2=x1;
else
x1=x3;
}
printf("%lf\n",x3);
}
return 0;
}
