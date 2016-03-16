#include <iostream>
#include <cstdio>
#define pi 3.14159
using namespace std;
int main()
{
double radius,result;
while(1)
{
cin>>radius;
if(cin.eof()) break;
else
   result = pi*(radius*radius);
   printf("A=%0.4lf\n",result);

}
return 0;
}
