#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
int main ()
{
	int n,d,r,i,j;
	int t;
	scanf("%d",&t);
	while(t--)
    {
	std::cin>>n;
	int arr[n];
    for(i=0 ; i < n; i++)
        std::cin>>arr[i];
    int maxfor = 0,maxend = 0;
    for(i=0 ; i < n; i++)
        {
            maxend = max(0,arr[i]-maxend);
            maxfor = max(maxfor , maxend);
        }
        printf("%d\n",maxfor);
    }
  return 0;
}
