#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
long long int fact(long long int num)
{
    if (num == 0 || num == 1)
        return 1;
    else
        return num*fact(num-1);
}
int main()
{
    while(1)
    {
    long long int n,m,sum = 0;
    std::cin>>m>>n;
    if(cin.eof()) break;
    else
    {
    sum = fact(n) + fact(m);
    printf("%lld\n",sum);
    }
    }
return 0;
}
