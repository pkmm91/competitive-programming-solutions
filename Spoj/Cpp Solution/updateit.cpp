#include <cstdio>
#include<iostream>
#include <vector>
#include<cstring>
using namespace std;
int bit[10001];
int t,n,u,q,id,l,r,val;
inline void Read (int *a)
{
    char c = 0;
    while(c<33)
    c = fgetc(stdin);
    *a = 0;
    while(c>33)
    {
               *a = *a*10 + c - '0';
               c = fgetc(stdin);
    }
}
void update(int x , int val )
{
	while ( x <= n)
	{
		bit[x] += val;
		x += ( x & -x);
	}
}
int sum(int x )
{
	int t = 0;
	while ( x > 0)
	{
		t += bit[x];
		x -= ( x & -x);
	}
	return t;
}

int main() {
	Read(&t);
    while(t--)
    {   Read(&n);
        Read(&u);
        memset(bit,0,sizeof bit);
        for(int i=0;i<u;i++){
            Read(&l);
            Read(&r);
            Read(&val);
            l++;r++;
           update(l,val);
           update(r+1,-1*val);
        }
        Read(&q);
       for(int i=0;i<q;i++)
        {
            Read(&id);
            id++;
            cout<<sum(id)<<endl;
        }
    }
	return 0;
}
