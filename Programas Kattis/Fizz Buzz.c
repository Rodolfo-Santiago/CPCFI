#include <stdio.h>

int main()
{
  int x, y, n, i;
  
  do
  {
    scanf("%d %d %d", &x, &y, &n);
  }while (1 > x || x >= y || y > n || n > 100);
  
  for (i = 1; i <= n; i ++)
  {
    if (i % x == 0)
    {
      printf("Fizz");
    }
    if (i % y == 0)
    {
      printf("Buzz");
    }
    if (i % x != 0 && i % y != 0)
    {
      printf("%d", i);
    }
    printf("\n");
  }
  
  return 0;
}