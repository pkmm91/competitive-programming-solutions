#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
int n,sum = 0,i=1;
while(1)
{
cin>>n;
if(n == 0) break;
else
  if(n%2 == 0)
  {
   sum = ( (n) +(n+2) + (n+4)+ (n+6) + (n+8));
  }
  else
   sum = ( (n+1) +(n+3) + (n+5)+ (n+7) + (n+9));
printf("%d\n",sum);
sum = 0;
}
return 0;
}
