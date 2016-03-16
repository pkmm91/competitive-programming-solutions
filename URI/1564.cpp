#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
int s;
while(1)
{
std::cin>>s;
if(cin.eof()) break;
else
{
 if(s > 0)
    printf("vai ter duas!\n");
 else
  printf("vai ter copa!\n");
}
}
return 0;
}
