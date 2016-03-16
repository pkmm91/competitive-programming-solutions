#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;
int gcd(int a, int b)
{
    int wk;
    if(a<b){ wk=a;a=b;b=wk; }
    while(b){
        wk = a%b;
        a=b;
        b=wk;
    }
    return b;
}
int main()
{
    int n,m,t,i,j;
    std::vector<int> v;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d %d",&n,&m);
    int a[n];
    for(i = 1; i <= n; i++)
       scanf("%d",&a[i]);
       v.push_back(a[i]);
    for(i=1; i<=m; i++)
    {
      int c,b;
      std:cin>>b>>c;
      b = v.begin(); c=
      v.erase (v.begin()+b, v.begin()+(c+1) );
      int size = v.size();
      cout<<size;
         }
    }
 return 0;
}

