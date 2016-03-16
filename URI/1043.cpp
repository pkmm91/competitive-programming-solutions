#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    double x,y,z,sum =0,area = 0;
    scanf("%lf %lf %lf",&x,&y,&z);
    bool a = (x+ y) > z;
    bool b = (y + z) > x;
    bool c = (x + z) > y;
    if(a && b && c)
    {
        sum = x + y + z ;
        printf("Perimetro = %0.1lf\n",sum);
    }
    else{

        area = ( (x + y) * z)/2;
        printf("Area = %0.1lf\n",area);
    }


return 0;
}
