#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main ()
{
    double r,l,w,d,h,k;
    int i = 1;
    while(1)
    {
        cin>>r;
        if(r == 0) break;
        else
            cin>>l>>w;
            d = (2.0 * r);
            k = (l*l + w*w);
            h = sqrt(k);
            if(d >= h)
                printf("Pizza %d fits on the table.\n",i);
            else
                printf("Pizza %d does not fit on the table.\n",i);
        i++;
    }
return 0;
}
