#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
          int n,i,e,f=1;
          scanf("%d",&n);
          int arr[n+1];
          memset(arr,0,sizeof arr);
          for(i=0;i<n;i++)
          {
                          scanf("%d",&e);
                          if(arr[e]==0)
                               arr[e]=1;
                          else if(arr[e]==1 && arr[n-1-e]==0)
                               arr[n-1-e]=1;
          }
          for(i=0;i<n;i++){
             if(arr[i]==0){
               f=0;
               break;
             }
          }
          if(f==0)
            printf("NO\n");
          else
            printf("YES\n");
      }
      return 0;
}
