#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int a,n,sum=0,i;
    cin>>a;
    again : cin>>n;
    if(n <= 0) goto again;
    else
    {
    for(i=1 ;i<=n; i++)
    {
        sum +=a;
        a++;
    }
     printf("%d\n",sum);
    }
    return 0;
}
