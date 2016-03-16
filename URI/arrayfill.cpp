#include <iostream>
#include <cstdio>
#include <cmath>
#define Max 100
using namespace std;
int main()
{
int i=0;
double num,N[100];
scanf("%lf",&num);
for(;i<100;i++)
    printf("N[%d] = %0.4lf\n",i,num/(pow(2,i)));
return 0;
}
