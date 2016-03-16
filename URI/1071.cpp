#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
int t;
double X, Y;
cin>>t;
while(t--)
{
cin >> X >> Y;
if( Y == 0)
  printf("divisao impossivel\n");
else
    printf("%.1lf\n", (1.0*(X/Y)) );
}
return 0;
}
