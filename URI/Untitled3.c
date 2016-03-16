#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
int p1,r1,p2,r2;
double c1,c2;
cin>>p1>>r1>>c1;
cin>>p2>>r2>>c2;
double result = (1.0*r1*c1 + 1.0*r2*c2);
printf("VALOR A PAGAR: R$ %0.2lf\n",result);
return 0;
}
