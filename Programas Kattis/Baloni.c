#include <stdio.h>

int main()
{
  int n, n2, i, j;
    
  scanf("%d", &n);
    
  int h[n];
  int h2[n];
  n2 = n;
    
  for (i = 0; i < n; i ++)
  {
    scanf("%d", &h[i]);
    h2[i] = h[i];
  }
  
  for (i = 0; i < (n - 1); i ++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (h[i] - 1 == h[j] && h2[j] != 0)
      {
        n2 --;
        h2[j] = 0;
        break;
      }
    }
  }
  
  printf("%d", n2);
  
  return 0;
}