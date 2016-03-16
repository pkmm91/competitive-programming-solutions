#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
int num;
scanf("%d",&num);
while(num--)
{
long long unsigned int r=0,R=0,maxr,maxR;
int n,i,j,index;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%lld%lld",&maxr,&maxR);
if(maxr>r)
{
index = i+1;
r = maxr;
}
else if(maxR>R)
R=maxR;
}
if(r>R)
printf("%d\n",index);
else
printf("-1\n");
}
return 0;
}
