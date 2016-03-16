#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	unsigned int a,b;
	while(1)
	{
		cin>>a>>b;
		if(cin.eof()) break;
		unsigned int result = a^b;
		cout<<result<<endl;

	}
	return 0;
}