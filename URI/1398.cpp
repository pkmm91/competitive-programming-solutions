#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int main ()
{
	char binary[100];
	while(gets(binary))
    {
    	int s,i;
    	s = strlen(binary);
    	printf("%d\n",s);
    	long long int num = 0;
        for(i = 0; i <s-1; i++)
            num += ((binary[i] - '0') * (pow(2,s-2-i)));
        if(num & (0x1ffff))
            printf("NO\n");
        else
            printf("YES\n");
    }
  return 0;
    }

