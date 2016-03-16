#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
int n = 5,c1=0,c2=0,c3=0,c4=0,num;
while(n--)
{
cin>>num;
if(num > 0)
  c1++;
if(num < 0)
   c4++;
if(num % 2 == 0)
   c2++;
if(num % 2 != 0)
   c3++;

}
printf("%d valor(es) par(es)\n",c2);
printf("%d valor(es) impar(es)\n",c3);
printf("%d valor(es) positivo(s)\n",c1);
printf("%d valor(es) negativo(s)\n",c4);
return 0;
}
