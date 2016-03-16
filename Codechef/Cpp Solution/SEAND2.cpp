#include <cstring>
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    int t,n,i;
    string s;
    scanf("%d",&t);
    while(t--)
    {
    std::cin>>s;
    std::cin>>n;
    int arr[n],j;
    for(i=1; i<= n; i++)
        scanf("%d",&arr[i]);
   do
   {
       int k=0;
      for (i = 0; i < s.size(); i++)
        {
           k = k * 10 + s[i] - '0';
      }
      cout<<k<<endl;

   }while(std::next_permutation(s.begin(),s.end()));
    }
    return 0;
}
