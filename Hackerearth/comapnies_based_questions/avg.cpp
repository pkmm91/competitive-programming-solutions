#include <iostream>
#include <cstdio>
using namespace std;
#define max 10
int main()
{
int test,arr[max],i=0;
bool k = true;
scanf("%d",&test);
while(test--)
{
    for(;i<max;i++)
        scanf("%d",arr[i]);
        if(arr[i] != -1)
            i++;
        else
            break;
}
return 0;
}
