#include <cstdio>
#include <cmath>
#include <iostream>
#define pi 3.14159265
using namespace std ;
int main( )
{
    int t , d , v , i ;
    double angle ;
    scanf("%d",&t);
    for( i = 1 ; i <= t ; i++ )
    {
        scanf("%d%d",&d,&v) ;
        angle = asin( ( 9.806 * d ) / ( v * v ) ) ;
        angle /= 2 ;
        angle *= 180.0 ;
        angle /= pi ;
        
        printf("Scenario #%d: ",i) ;
        if( angle <= 45.000000000000 )
            printf("%.2lf\n",angle) ;
        else
            printf("-1\n") ;
    }
    
    return 0 ;
}
