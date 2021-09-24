#include <stdio.h>

int main()
{
  int t, i, j;
  char blank;
  
  scanf("%d", &t);
  int a[t], b[t], results[t];
  
  for (i = 0; i < t; i ++)
  {
    results[i] = 0;
  }
  
  for (i = 0; i < t; i ++)
  {
    float sumaA = 0, sumaB = 0;
    
    scanf("%c", &blank);
    scanf("%d", &a[i]);
    scanf("%d", &b[i]);
    
    int aIQ[a[i]], bIQ[b[i]];
    
    for (j = 0; j < a[i]; j ++)
    {
      scanf("%d", &aIQ[j]);
      sumaA += aIQ[j];
    }
    
    for (j = 0; j < b[i]; j ++)
    {
      scanf("%d", &bIQ[j]);
      sumaB += bIQ[j];
    }
    
    for (j = 0; j < a[i]; j ++)
    {
      if (aIQ[j] < (sumaA / a[i]) && aIQ[j] > (sumaB / b[i]))
      {
        results[i] += 1;
      }
    }
    
  }
  
  for (i = 0; i < t; i ++)
  {
    printf("%d\n", results[i]);
  }
  
  return 0;
}