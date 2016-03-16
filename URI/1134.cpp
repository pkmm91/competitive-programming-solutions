#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
int n,a=0,g=0,d=0;
while(1)
{
cin>>n;
if(n ==4) break;
else
{
switch(n)
{
case 1: a++; break;
case 2: g++;break;
case 3: d++;break;
default : continue;
}
}
}
printf("MUITO OBRIGADO\n");
printf("Alcool: %d\n",a);
printf("Gasolina: %d\n",g);
printf("Diesel: %d\n",d);
return 0;
}
