#include <stdio.h>
int main ()
{
int count=0,count2 = 0,t;
scanf("%d",&t);
while(t--)
{
int x;
scanf ("%d", &x);
if(x >= 10 && x <= 20)
    count++;
else
    count2++;
}
printf("%d in\n",count);
printf("%d out\n",count2);
count=0;count2 = 0;
return 0;
   }

