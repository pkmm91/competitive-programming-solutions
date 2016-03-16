#include <iostream>
#include <cstdio>
#include <cmath>
int main()
{
int c,l,r1,r2,diag,k;
while(1)
{
std::cin>>c>>l>>r1>>r2;
if(l+c+r1+r2 == 0) break;
else

   diag = sqrt((c*c) + (l*l));
//printf("%d\n",diag);
   k = 2*(r1 + r2);
  // printf("%d\n",k);
   if (diag > k)
       printf("S\n");
   else
       printf("N\n");
}
return 0;
}
