#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long long int a,b;
    while(1)
    {
     std::cin>>a>>b;
     if(cin.eof()) break;
     else
       std::cout<<abs(a-b)<<endl;
}
return 0;
}
