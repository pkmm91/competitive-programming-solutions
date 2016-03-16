#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
int a,b,c;
while(1)
{
std:cin>>a>>b;
if( a == 0  && b == 0) break;
else
{
c = (3*a) - (a+b);
float avg = (a+b+c)/3;
int arr[3] = {a,b,c};
std::sort(arr, arr+3);
float median = arr[1];
if(avg == median)
   std::cout<<c<<endl;
}
}
return 0;

}
