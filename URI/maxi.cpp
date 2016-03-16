#include <stdio.h>

int main()
{
  int array[5], maximum, size, c, location = 1;
  for (c = 0; c < 5; c++)
    scanf("%d", &array[c]);

  maximum = array[0];

  for (c = 1; c < size; c++)
  {
    if (array[c] > maximum)
    {
       maximum  = array[c];
       location = c+1;
    }
  }

  printf("Maximum element is present at location %d and it's value is %d.\n", location, maximum);
  return 0;
}
