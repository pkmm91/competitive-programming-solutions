#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
 int t,a,b,i,result = 0;
 scanf("%d", &t);
 while(t--)
 {
 scanf("%d %d", &a, &b);
 result = (a&(a+1));
 for(i = a+2; i <= b; i++)
 {
     result&i;
 }
 printf("%d\n",result);
 }
    return 0;
}
