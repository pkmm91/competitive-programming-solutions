#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
int i,ct=0;
float a[6],result=0.0,total;
for(i=0;i<6;i++)
    scanf("%f",&a[i]);
for(i=0;i<6;i++)
    if(a[i]>0)
    {
        result +=a[i];
        ct++;
    }
printf("%d valores positivos\n",ct);
printf("%0.1f\n",result/ct);
return 0;
}
