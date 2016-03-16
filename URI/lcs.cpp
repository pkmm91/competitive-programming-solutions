#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
int max(int a, int b)
{
    return (a > b)? a : b;
}
int lcs(char *X, char *Y,int m,int n)
{
int L[m+1][n+1],i,j,result=0;
for(i=0;i<=m;i++)
{
  for(j=0;j<=n;j++)
   {
     if(i==0 || j==0)
        L[i][j]=0;
     else if(X[i-1]==Y[j-1])
     {
        L[i][j] = L[i-1][j-1] +1;
        result = max(L[i-1][j],L[i][j-1]);
     }
     else
        L[i][j]=0;
   }

}
return L[m][n];
}
int main()
{
char X[50],Y[50];
scanf("%s",X);
scanf("%s",Y);
int m = strlen(X);
int n = strlen(Y);
printf("%d\n",lcs(X,Y,m,n));
return 0;
}
