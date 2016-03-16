#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    int t,k,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&k);
        for(i=0; i < k; i++)
        {
            int r;
            scanf("%d",&r);
            if (r == 1)
                 printf("Rolien\n");
            else if (r == 2)
                printf("Naej\n");
            else if (r == 3)
                printf("Elehcim\n");
            else
               printf("Odranoel\n");

        }
    }
    return 0;
}
