#include <iostream>
#include <cstdlib>
double  power(int a,int n){
if (n==0)
    return 1;
double temp = power(a,n/2);
if(n%2==0)
    return temp*temp;
else
    return a*temp*temp;
}
int main()
{
    int t,a,b;
    std::cin>>t;
    for(int i=1;i<=t;i++){
        std::cin>>a>>b;
        double result = power(a,b);
        std::cout<<result<<"\n";

    }
    return 0;
}
