#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int t,r=0;
    float n;
    std::cin>>t;
    while(t--)
    {
        std::cin>>n;
        while(n > 1.0)
        {
            n /=(2.0);
            r++;
        }
        std::cout<<r<<" "<<"dias"<<endl;
        r = 0;
    }

return 0;
}
