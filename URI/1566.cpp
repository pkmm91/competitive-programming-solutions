#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
int t,n;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
int arr[n];
for(int i =0; i < n; i++)
    scanf("%d",&arr[i]);
std::sort(arr, arr+n);
printf("%d ",arr[0]);
for(int i =1; i < n-1; i++)
    printf("%d ",arr[i]);
printf("%d",arr[n-1]);
printf("\n");
}
return 0;
}
