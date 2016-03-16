#include <cstdio>
#include <iostream>
#include <cassert>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;
void solve (int a, int b, int m) {
	int n = (int) sqrt (m + 0.0) + 1;

	int an = 1;
	for (int i=0; i<n; ++i)
		an = (an * a) % m;

	map<int,int> vals;
	for (int i=1, cur=an; i<=n; ++i) {
		if (!vals.count(cur))
			vals[cur] = i;
		cur = (cur * an) % m;
	}

	for (int i=0, cur=b; i<=n; ++i) {
		if (vals.count(cur)) {
			int ans = vals[cur] * n - i;
			if (ans < m)
				printf("%d\n",ans);
		}
		cur = (cur * a) % m;
	}
	printf("-1\n");
}
int main ()
{
    int t ;
    int a , b , g;
    scanf("%d" , &t);
    while(t--)
    {
        scanf("%d %d %d" , &a , &b , &g);
        solve(a , b , g);
    }
    return 0;
}
