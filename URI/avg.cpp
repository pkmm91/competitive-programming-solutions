#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
    double x1,x2,y1,y2,result;
    std::cin>>x1>>y1;
    std::cin>>x2>>y2;
    result = sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    printf("%0.4lf\n",result);
    return 0;
}
