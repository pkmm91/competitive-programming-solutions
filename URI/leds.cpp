#include <iostream>
#include <cstdio>
#include <cstring>
#define MAX 101
using namespace std;
int main()
{
int n;
scanf("%d",&n);
while(n--)
{
int sum = 0;
char a[MAX];
scanf("%s",a);
for(int i =0;i < strlen(a); i++)
   if (a[i] == '1')
       sum +=2;
   else if (a[i] == '8')
       sum +=7;
   else if (a[i] == '2' || a[i] == '3' || a[i] == '5')
       sum +=5;
   else if (a[i] == '0' || a[i] == '6' || a[i] == '9')
       sum +=6;
   else if(a[i] == '7')
       sum +=3;
   else
       sum +=4;
printf("%d leds\n",sum);
}
return 0;
}
