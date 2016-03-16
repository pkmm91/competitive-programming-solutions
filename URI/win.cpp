#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
int a,b,c;
while(1)
{
cin>>a >>b >>c;
if(cin.eof()) break;
else
{
if( (a + b + c == 3) || (a + b + c == 0))
    printf("*\n");
else if((b + c == 2) || (b + c == 0))
    printf("A\n");
else if((a + c == 2) || (a + c == 0))
    printf("B\n");
else
    printf("C\n");
}
 }
return 0;
}
