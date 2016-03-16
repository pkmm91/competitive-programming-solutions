#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
int t,k,i=0;
scanf("%d",&t);
while(t--)
{
    scanf("%d",&k);
    long long int arr[k],r1 = 1, r2=1;
    for(i = 1; i<= k; i++)
        scanf("%lld",&arr[i]);
    for(i = 1 ;i<k; i++)
        r1 = (r1 & arr[i]);
    if(r1 == arr[k])
        printf("1\n");
    else
        printf("-1\n");

}
return 0;
}
