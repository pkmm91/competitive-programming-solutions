#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int a[5],b[5],c[5],i,num=0,k[5] = {16,8,4,2,1};
    for(i=0;i<5;i++)
    {
     std::cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
     std::cin>>b[i];
    }
    for(i=0;i<5;i++)
    {
        c[i] = (a[i] ^ b[i]);
    }
    for(i=0;i<5;i++)
    {
        num += (c[i] * k[i]);
    }
    if(num == 31)
    {
        std::cout<<"Y"<<endl;
    }
    else
       std::cout<<"N"<<endl;
return 0;
}
