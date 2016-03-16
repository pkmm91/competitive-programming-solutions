#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
int max(int a , int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int mission ( int value[] , int wt[] , int W , int n)
{
    int i , j, V[n+1][W+1];
    for(i = 0 ; i <= n ; i++)
        for(j = 0 ; j <= W ; j++)
            if (i == 0 || j == 0)
                V[i][j] = 0;
            else if (wt[i - 1] <= j)
                  V[i][j] = max ( value[i - 1] + V[i - 1][ j - wt[i - 1]] , V[i - 1][j]);
            else
                  V[i][j] = V[i - 1][j];
    return V[n][W];

}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n,W,max_W;
        scanf("%d" , &n);
        int value[n] , wt[n],i;
        for(i = 0 ; i < n; i++)
            scanf("%d %d", &value[i] , &wt[i]);
        scanf("%d" , &W);
        scanf("%d" , &max_W);
        if (mission(value , wt , W , n) >= max_W)
            printf("Missao completada com sucesso\n");
        else
            printf("Falha na missao\n");
    }
   return 0;
}
