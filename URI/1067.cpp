#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
int t,n;
int sum1=0,sum2=0,sum3=0;
char ch,A='%';
scanf("%d",&t);
while(t--)
{
    cin>>n >>ch;
    switch(ch)
    {
        case 'C' : sum1 +=n; break;
        case 'R' : sum2 +=n; break;
        default: sum3 += n; break;
    }
}
int result = (sum1 + sum2 + sum3);
float pc = ((1.0*sum1)/result)*100;
float pr = ((1.0*sum2)/result)*100;
float ps = ((1.0*sum3)/result)*100;
printf("Total: %d cobaias\n",result);
printf("Total de coelhos: %d\n",sum1);
printf("Total de ratos: %d\n",sum2);
printf("Total de sapos: %d\n",sum3);
printf("Percentual de coelhos: %0.2f %c\n",pc,A);
printf("Percentual de ratos: %0.2f %c\n",pr,A);
printf("Percentual de sapos: %0.2f %c\n",ps,A);
return 0;
}
