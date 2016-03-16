#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
int dist,fuel;
cin>>dist;
cin>>fuel;
double result = (1.0 * dist)/fuel;
printf("%0.3lf km/l\n",result);
return 0;
}
