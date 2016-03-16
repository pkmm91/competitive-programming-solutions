#include <cstdio>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
double trip (double c[], double avg, int n)
{
    double neg=0,pos = 0,diff = 0;
    int i;
    for(i = 0; i < n; i++)
        {
            diff = (double)(long) ((c[i] - avg) * 100.0)/100.0;
            if (diff < 0)
                neg +=diff;
            else
                pos +=diff;
}
if (pos > std::abs(neg))
    return pos;
else
    return (std::abs(neg));
}

int main()
{
    long n;
    for(;;)
        {
        scanf("%ld", &n);
        double c[n];
        if(n == 0) break;
        else
        {
        double avg = 0;
        for(int i = 0; i < n; i++) {
            scanf("%lf", &c[i]);
            avg += c[i];
        }
        avg = avg / n;
        printf("$%0.2lf\n",trip(c,avg,n));
        }
         }
}
