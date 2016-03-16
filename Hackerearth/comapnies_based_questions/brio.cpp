#include <iostream>
#include <cstdio>
#include <cmath>
double pi = 3.1415;
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double s = (a+b+c)/2.0;
    double pr = (a*b*c)/2.0;
    double p1 = (s-a);
    double p2 = (s-b);
    double p3 = (s-c);
    double p = (s*p1*p2*p3);
    double dia = pr/(sqrt(p));
    double r = dia/2;
    double area = (pi * r * r);
    printf("%.4lf\n",area);
    }
    return 0;
}
