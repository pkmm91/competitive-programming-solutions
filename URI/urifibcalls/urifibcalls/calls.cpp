#include <iostream>
using namespace std;
int fib(int n)
{
	if(n == 0 || n == 1) 
		return 1;
	else
		return (1 + fib(n-1) + fib(n-2));
	
}

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<fib(n)<<endl;
	}
return 0;
}