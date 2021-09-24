#include <stdio.h>
#include <stdlib.h>

int invert(int x);

int main()
{
  int a, b, i, j = 10;
  
  do
  {
    if (scanf("%d %d", &a, &b) == 1)
    {
      printf("Failed to read integer.\n");
      exit(0);
    }
  }while (a == b || a < 111 || a > 999 || b < 111 || b > 999 || a % 10 == 0 || b % 10 == 0 || (a % 100) < 10 || (b % 100) < 10);
  
  for (i = 1; i <= 3; i ++)
  {
    if (a % j > b % j)
    {
      printf("%d", invert(a));
      break;
    }
    else if (a % j < b % j)
    {
      printf("%d", invert(b));
      break;
    }
    j *= 10;
  }
  
  return 0;
}

int invert(int x)
{
  int xinv; 
  xinv = (x % 10) * 100 + (x % 100) - (x % 10) + ((x % 1000) - (x % 100)) / 100;
  
  return xinv;
}