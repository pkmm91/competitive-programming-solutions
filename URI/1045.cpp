#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <iterator>
#include <bits/stdc++.h>
#include <cassert>
using namespace std;
int main()
{
    double a,b,c,arr[3];
    int i;
    while(1)
    {
    for(i = 0; i< 3 ; i++)
        std::cin>>arr[i];
    std::sort(arr , arr + 3);
    a = arr[2];
    b = arr[1];
    c = arr[0];
    if (a >= b+c)
        cout<<"NAO FORMA TRIANGULO"<<endl;
    else
    {
    if ( (a*a) == (b*b)+(c*c))
        cout<<"TRIANGULO RETANGULO"<<endl;
    if ( (a*a) > (b*b)+(c*c))
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    if  ((a*a) < (b*b)+(c*c))
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    if (a == b && b == c && a == c)
        cout<<"TRIANGULO EQUILATERO"<<endl;
    else if (a == b || b == c || a == c)
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }
}
    return 0;
}
