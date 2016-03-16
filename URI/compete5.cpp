#include <iostream>
#include <cstdio>
#include <cmath>
#define PI 3.141592654
using namespace std;
int main()
{
    double ang,dist,elfh;
    while(1)
    {
        std::cin>>ang >>dist >>elfh;
        if(cin.eof()) break;
        else
        {
            double pangle = ((ang * PI) / 180.0);
            double result = ( 5 * ((dist * tan(pangle)) + elfh ));
            printf("%0.2lf\n",result);

        }
    }
    return 0;
}
