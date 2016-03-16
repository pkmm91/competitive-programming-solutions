#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    while(1)
    {
    long long int n,k;
    std::cin>>n>>k;
    long long int a[n],i;
    for(i = 1;i <= n; i++)

            std::cin>>a[i];
    long long int k1,k2,count = 0;
    if(cin.eof()) break;
    else
    {
        for(i = 1;i <= k; i++)
        {
            scanf("%lld %lld",&k1,&k2);
            for(i = 1;i <= n; i++)
            {
                if (a[i] == k2)
                {
                    count++;
                }
                 if (count == k1)
                     printf("%lld\n",i);
                     break;
            }



        }

    }
    }
return 0;
}
