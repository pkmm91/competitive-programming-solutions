#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	while(b)
	{
		int r = a % b;
		a = b;
		b = r ;
	}
	return a;
}

int main()
{
	int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<gcd(a,b)<<endl;
	}
return 0;
}