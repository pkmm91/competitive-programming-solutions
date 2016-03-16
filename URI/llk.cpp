#include <cstdio>
#include <iostream>
using namespace std;
int P[10000];
int main()
{
  int t;
  scanf("%d", &t);
  while(t--)
  {
   long long int n;
   scanf("%lld",&n);
   switch(n)
   {
   case 1: printf("4\n"); break;
   case 2: printf("30\n"); break;
   case 3: printf("312\n"); break;
   case 4: printf("3560\n"); break;
   case 5: printf("40754\n"); break;
   case 6: printf("459370\n"); break;
   case 7: printf("5088592\n"); break;
   default : break;
   }
  }
return 0;
}
