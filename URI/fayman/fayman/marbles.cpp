#include <iostream>
#include <cstdio>
using namespace std;
int main()
{ 
	int num,r;
    while(1)
	{
		cin>>num;
		if(num == 0) break;
		else
		    r = ( (num * (num + 1) *(2*num + 1)) / 6);
		    printf("%d\n",r);
	}
	return 0;
}