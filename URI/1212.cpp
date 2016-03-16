#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
long carry(long n1, long n2 ) {
    long a,b,c,t;
    c = 0;
    t = 0;
    while(1){
                 a=n1%10;
                 b=n2%10;
                 n1=n1/10;
                 n2=n2/10;
                 if((a+b+c)>=10){
                                 t++;
                                 c=1;
                 }
                 else c = 0;
                 if(n1==0 && n2==0)break;
    }
    return t;
}
int main()
{
while(1)
{
long a,b,r;
scanf("%ld %ld",&a,&b);
if(a == 0 && b == 0) break;
r = carry(a,b);
if(r == 0)
       printf("No carry operation.\n");
else if(r == 1)
       printf("1 carry operations.\n");
else
         printf("%ld carry operations.\n",r);

}
return 0;
}
