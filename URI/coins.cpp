#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
int num;
cin>>num;
int r1 =  num/100;
int r2 = (num%100)/50;
int r3 = ((num%100)%50)/20;
int r4 = (((num%100)%50)%20)/10;
int r5 = ((((num%100)%50)%20)%10)/5;
int r6 = (((((num%100)%50)%20)%10)%5)/2;
int r7 = (((((num%100)%50)%20)%10)%5)%2;
printf("%d\n",num);
printf("%d nota(s) de R$ 100,00\n",r1);
printf("%d nota(s) de R$ 50,00\n",r2);
printf("%d nota(s) de R$ 20,00\n",r3);
printf("%d nota(s) de R$ 10,00\n",r4);
printf("%d nota(s) de R$ 5,00\n",r5);
printf("%d nota(s) de R$ 2,00\n",r6);
printf("%d nota(s) de R$ 1,00\n",r7);
return 0;
}
