#include <cstdio>
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
void print(const vector<int>& v)
{
  vector<int>::const_iterator i;
  for (i=v.begin(); i!=v.end(); i++)
      cout << *i << endl;
}
int main()
{
    int n,i,size1,size2;
    std::cin>>n;
    int a[n];
    std::vector<int>v1;
    std::vector<int>v2;
    for(i = 0; i < n; i++ )
    {
        cin>>a[i];
        if(a[i] % 2 == 0)
            v1.push_back(a[i]);
        else
            v2.push_back(a[i]);

    }
    std::sort(v1.begin(),v1.end());
    std::sort(v2.begin(),v2.end());
    std::reverse(v2.begin(),v2.end());
    vector<int> v3(v1.size()+ v2.size());
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    print(v3);
    return 0;
}
