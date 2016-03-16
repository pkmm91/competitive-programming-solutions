#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,i;
    double q,a,b;
    while(1)
    {
    std::cin>>n;
    if(n == 0) break;
    else
    {
    for(i=1; i<=n; i++)
    {
        std::cin>>q >>a >>b;
        double result = (q*(((a+b)/2)*5.0));
        printf("Size #%d:\n",i);
        printf("Ice Cream Used: %0.2lf cm2\n",result);
    }
    printf("\n");
    }
    }
return 0;
}
