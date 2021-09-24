#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int n, peopleBet, i;
  
  if (scanf("%d", &n) != 1)
  {
    printf("Failed to read integer.\n");
    exit(0);
  }

  int origOrd[n];
  origOrd[0] = 1;
  
  for (i = 2; i <= n; i ++)
  {
    if (scanf("%d", &peopleBet) != 1)
    {
      printf("Failed to read integer.\n");
      exit(0);
    }
    
    origOrd[peopleBet + 1] = i;
  }

  for (i = 0; i < n; i ++)
  {
    printf("%d ", origOrd[i]);
  }
  
  return 0;
}