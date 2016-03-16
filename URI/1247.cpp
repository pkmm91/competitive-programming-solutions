#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    double d,vf,vg,tg,tf,h;
    while(1)
    {
        std::cin>>d>>vf>>vg;
        if(cin.eof()) break;
        else
            h = sqrt( (12.0*12.0)+(d*d) );
            tf = 12.0/vf;
            tg = h/vg;
            if(tf >= tg)
                std::cout<<"S"<<endl;
            else
                std::cout<<"N"<<endl;

    }
}
