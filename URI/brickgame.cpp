#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
int t,n,i=1;
std::cin>>t;
while(t--)
{
std::cin>>n;
int arr[n];
for(int i = 0; i < n; i++)
    std::cin>>arr[i];
std::sort(arr,arr+n);
 /*for (int i = 0; i < n; ++i)
     std::cout << arr[i] << ' ';*/
int k = (n+1)/2;
std::cout<<"Case"<<" "<<i<<": "<<arr[k-1]<<endl;
i++;
}
return 0;
}
