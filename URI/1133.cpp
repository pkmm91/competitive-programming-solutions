#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
int x, y, i;
cin >> x >> y;
int a = min(x,y);
int b = max(x,y);
for(i = (a+1); i < b; i++ )
if( i%5 == 2 || i%5 == 3)
    printf("%d\n",i);
return 0;
}
