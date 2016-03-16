#include <iostream>
#include <cstdio>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
long long int l,r,count=0,temp,i,res=1;
scanf("%lld %lld",&l,&r);
for(i=l;i<=r;i++)
{
temp = i;
while(temp >0)
{
res *= (temp %10);
if(res %2 == 0)
{
count++;
break;
}
temp /=10;
}
}
printf("%lld\n",count);
}
return 0;
}
