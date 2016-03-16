#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    bool a1 = (b>c);
    bool a2 = (d>a);
    bool a3 = ((c+d) > (a+b));
    bool a4 = (c>0);
    bool a5 = (d > 0);
    bool a6 = (a%2 == 0);
    if(a1 && a2 && a3 && a4 && a5 && a6)
       printf("Valores aceitos\n");
    else
       printf("Valores nao aceitos\n");

    return 0;
}
