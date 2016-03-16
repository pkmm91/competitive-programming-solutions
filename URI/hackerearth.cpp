#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
 int t,n;
 char ch = '%';
 scanf("%d", &t);
 while(t--)
 {
 scanf("%d",&n);
 int a[n],sum=0,count=0;
 for(int i =1;i<=n; i++)
    cin>>a[i];
 for(int i =1;i<=n; i++)
    sum +=a[i];
int result = sum/n;
for(int i =1;i<=n; i++)
    if(a[i] > result)
       count++;
double Result = ((1.00*(count*100))/n);
printf("%0.3lf%c\n",Result,ch);
 }
    return 0;
}
