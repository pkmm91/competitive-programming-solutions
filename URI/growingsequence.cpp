#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
int a,b;
while(1)
{
cin>>a>>b;
if(cin.eof()) break;
else
   if(a%b==0 || b%a==0)
      printf("Sao Multiplos\n");
   else
      printf("Nao sao Multiplos\n");
}
}
