#include <cstdio>
#include <iostream>
using namespace std;
int P[10000];
int main()
{
  int t;
  scanf("%d", &t);
  while(t--){
    int N = 2;
    int ans=0;
    for(int i=0; i<N; i++){
      scanf("%d", &P[i]);
      if((N-i)%2==1){
	int s;
	if(i==0) s=P[i]-1;
	else s=P[i]-P[i-1]-1;
	//printf("s=%d\n", s);
	ans ^= s;
      }
    }

    if(ans==0){
      printf("Don't Play\n");
    }
    else{
      printf("Play\n");
  }

}
return 0;
}
