#include <iostream>
#include <cstdio>
double pi = 3.14159;
using namespace std;
int main()
{
double R;
scanf("%lf",&R);
double area = (pi*R*R);
printf("A=%0.4lf\n",area);
return 0;
}
