#include<stdio.h>
unsigned int fib(unsigned int n)
{
  unsigned int a = 0, b = 1, c, i;
  if( n == 0)
    return a;
  for (i = 2; i <= n; i++)
  {
     c = a + b;
     a = b;
     b = c;
  }
  return b;
}
int main ()
{
 unsigned int t,n;
  scanf("%ud",&t);
  while(t--)
  {
      scanf("%d",&n);
      printf("Fib(%d) = %ud\n",n,fib(n));
  }
  getchar();
  return 0;
}
