#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
int x,y,i,j,num=1;
cin>>x>>y;
for(i=1;i<=y;i++)
{
    for(j=0;j<x;j++)
    {
       printf("%d ",num);
       printf("\n");
       num++;
}
}
return 0;
}
