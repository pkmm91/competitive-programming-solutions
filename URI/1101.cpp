#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    while(1)
    {
        int a,b,sum = 0,i;
        scanf("%d %d",&a,&b);
        if (a <= 0 || b <= 0) break;
        else
        {
            for(i = min(a,b); i <= max(a,b);i++)
            {
                printf("%d ",i);
                sum += i;
            }
            printf("Sum=%d\n",sum);
        }
    }

return 0;
}
