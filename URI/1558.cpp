#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int T;
    long long N;
    while (1)
        {
        std::cin>>N;
        if(cin.eof()) break;
        else
        {
        if (N < 0)
           printf("NO\n");
        else
        {
        bool good = true;
        for (long long i=2; i*i<=N; i++) {
            int ct = 0;
            while (N%i==0) {
                ct++;
                N/=i;
            }
            if (i%4==3 && ct%2==1) {
                good = false;
                break;
            }
        }
        if (N%4==3) good = false;
        if (good) printf("YES\n");
        else printf("NO\n");
    }
}
        }
return 0;
}
