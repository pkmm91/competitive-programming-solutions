#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b = 0)
        return a;
    else 
       return gcd(b, a % b);
}
int main()
{
int a,b,c;
std::cin>>a >>b >>c;
bool result1 = ((a*a + b*b) == c*c);
bool result2 = (gcd(gcd(a,b),c) == 1);

return 0;
}
