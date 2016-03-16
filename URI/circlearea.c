#include <stdio.h>
#define pi 3.14159
int main()
{
double radius,result;
while(1)
{
scanf("%lf",&radius);
if(getchar() == EOF) break;
else
   result = pi*(radius*radius);
   printf("A=%0.4lf\n",result);

}
return 0;
}
