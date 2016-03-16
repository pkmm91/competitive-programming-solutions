#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int n,count =1;
    scanf("%d",&n);
    for(int i =1;i <=n;i++)
    {
        long double x1,y1,x2,y2,r1,l;
        cin>>x1>>y1>>x2>>y2>>r1>>l;
        long double r2 = sqrt(2*l*l)/(2.0);
        long double dis = sqrt((x2-x1)*(x2-x1) + ((y2-y1)*(y2-y1)));
        long double s = (dis*dis - r2*r2 + r1*r1 + 0.0)/(2*dis);
        long double p = (r1*r1 - s*s);
        if(dis < r1+r2){
            long double result = sqrt(p)*2;
            printf("%d.%0.3Lf\n",count,result);
        }
        else
            printf("%d.No problem\n",count);
        count++;
    }
return 0;
}
