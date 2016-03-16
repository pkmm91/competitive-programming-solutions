#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
 int n,i;
 while(1)
 {
 scanf("%d",&n);
 if (n == 0) break;
 else
 {
 int a[n],c1=0,c2=0;
for(i = 0; i < n; i++)
    scanf("%d",&a[i]);

for(i = 0; i < n; i++)
    if(a[i] == 0)
       c1++;
    else
       c2++;
printf("Mary won %d times and John won %d times\n",c1,c2);
 }
 }
 return 0;

}
