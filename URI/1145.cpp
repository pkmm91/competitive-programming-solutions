#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
int a[y][x];
for(int i = 1; i <= y; i++)
     for(int j = 1; j <= x; j++)
        a[i][j] = ++i;
for(int i = 1; i <= y; i++)
     for(int j = 1; j <= x; j++)
        printf("%d",a[i][j]);
    printf("\n");
 return 0;

}
