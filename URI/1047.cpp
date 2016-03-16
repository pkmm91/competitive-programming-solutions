#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    int a,b,c,d,result,h,m;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    result = ((((c)*60)+d) - (((a-24)*60)+b));
    cout<<result;
    h = result/60;
    m = result%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    return 0;
}
