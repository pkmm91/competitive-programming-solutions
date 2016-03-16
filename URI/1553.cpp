#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;
int main ()
{
    int n;
    while(1)
    {
        int i,s,second_large=0;
        std::cin>>n;
        int a[n],b[n];
        std::vector<int>v;
        if(n == 0) break;
        else
            for(i = 0; i< n; i++)
            {
                std::cin>>a[i];
                b[i] = a[i];
            }
            std::sort(a ,a + n);
            second_large = a[n-2];
            for(i = 0; i < n; i++ )
                if(second_large == b[i])
                    printf("%d\n",(i+1) );
    }

    return 0;
}

