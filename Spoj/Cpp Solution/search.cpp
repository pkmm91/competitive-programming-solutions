#include <iostream>
#include <cstdio>
#include <cassert>
using namespace std;
int element_search(long long int arr[],int low,int high,long long int data)
{
	while(low<high)
        {
            int mid = (high+low)/2;
            assert(mid<high);
            if (arr[mid]<data)
                low = mid+1;
            else
                high = mid;
	}
	if((high==low)&&(arr[low]==data))
        return low;
    else
        return -1;
}
int main()
{
	int n,m,i;
	scanf("%d %d",&n,&m);
	long long int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld ",&arr[i]);
	}
	for(i=0;i<m;i++)
    {
        long long int data;
        scanf("%lld ",&data);
        int k = element_search(arr,0,n-1,data);
		printf("%d\n",k);
    }
	return 0;
}
