#include <stdio.h>
#include <math.h>
int main ()
{
    double a, b, c, r1, r2,delta,y;
    scanf ("%lf %lf %lf", &a,&b,&c);
    delta = (pow (b, 2) - (4 * a * c));
    if( (delta > 0 ) &&  (a != 0))
    {
    y = sqrt((delta));
    r1 = ( ((( (-1.0) * b) + y ))/ (2.0 * a));
    r2 =  (((( (-1.0) * b) - y ))/ (2.0 * a));
    printf ("R1 = %.5lf\n",r1);
    printf ("R2 = %.5lf\n",r2);
     }
   else
    {
     printf ("Impossivel calcular\n");
     }
     return 0;
     }
