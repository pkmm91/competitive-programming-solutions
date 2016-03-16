#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    double t[] = {4.00,4.50,5.00,2.00,1.50};
    int x,y;
    scanf("%d %d",&x,&y);
    double result = (t[x-1] * y);
    printf("Total: R$ %0.2lf",result);

return 0;
}
