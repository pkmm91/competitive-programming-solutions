#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int test,Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,Rx,Ry;
    scanf("%d",&test);
    while(test--)
    {
            std::cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy>>Dx>>Dy>>Rx>>Ry;
            if ((Rx >= Ax && Rx >= Dx) && (Rx <= Bx && Rx <= Cx) && (Ry >= Ay && Ry >= By) && (Ry <= Cy && Ry <= Dy))
                printf ("1\n");
            else
                printf ("0\n");

    }

    return 0;
}
