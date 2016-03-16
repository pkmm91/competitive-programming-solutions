#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
int c=0;
float n,sum =0.0;
while(1)
{
scanf("%f",&n);
if( n >= 0.0 && n <= 10.0)
  {
     c++;
     sum +=n;
     if(c == 2)
        printf("media = %0.2lf\n",(sum/c));
}
else
    printf("nota invalida\n");
if(c==2)
    break;

}
return 0;
}
