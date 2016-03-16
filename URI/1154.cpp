#include<stdio.h>
int main()
{
    int a,n,sum=0,i;
    scanf("%d %d",&a,&n);
    for(i=1 ;i<=n; i++)
    {
        sum +=a;
        a++;
    }
     printf("%d\n",sum);
    return 0;
}
