#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;
double ep = 0.000001;
int main()
{
   int t;
   double a,b;
   scanf("%d",&t);
   while(t--)
   {
       double k, result;
       scanf("%lf %lf",&a,&b);
       k = (max(a,b)-min(a,b));
       result = k/(a+b);
       printf("%0.12lf\n",result);
   }
    return 0;
}
