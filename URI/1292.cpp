#include <cstdio>
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
const double p = atan(1.0)*4;
using namespace std;
int main()
{
    double value,gvalue;
    gvalue = sin((108*p)/180) / sin((63*p)/180);
    while(1)
    {
        std::cin>>value;
        if(cin.eof()) break;
        else
            printf("%0.10lf\n",(value*gvalue));
    }
    return 0;
}
