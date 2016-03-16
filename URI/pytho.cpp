#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int gcd(int x, int y, int z)
{
int d=1;
int i=1;
while(i<=x&&i<=y&&i<=z)
{
if(x%i==0&&y%i==0&&x%i==0)
d=i;
i++;
}
return d;
}
int main()
{
int a,b,c;
while(1)
{
cin>>a >>b >>c;
if(cin.eof()) break;
else
{
if (((a * a) + (b * b) - (c * c) == 0) || ((a * a) + (c * c) - (b * b) == 0) || ((c * c) + (b * b) - (a * a) == 0)  )
    if( gcd(a,b,c) == 1)
        cout<<"tripla pitagorica primitiva"<<endl;
    else
        cout<<"tripla pitagorica"<<endl;
else
   cout<<"tripla"<<endl;
}
}
return 0;
}
