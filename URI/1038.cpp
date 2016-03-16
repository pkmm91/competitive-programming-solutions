#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int x,y,count = 0,i;
    scanf("%d %d",&x,&y);
    int a = min(x,y);
    int b = max(x,y);
    for (i=a; i <= b ; i++)
    {
        if (i % 13 == 0)
            count++;
    }
    printf("%d\n",count);

return 0;
}
