#include <stdio.h>

int main()
{
  int t, i, j, x, y;
  
  scanf("%d", &t);
  
  int candid[t];
  int wins[t][3];
  for (i = 0; i < t; i ++)
  {
    scanf("%d", &candid[i]);
    
    int votes[candid[i]];
    wins[i][2] = 0;
    
    for (j = 0; j < candid[i]; j ++)
    {
      scanf("%d", &votes[j]);
      wins[i][2] += votes[j];
      

      if (j == candid[i] - 1)
      {
        wins[i][1] = 0;
        for (x = 0; x < candid[i]; x ++)
        {
          for (y = 0; y < candid[i]; y ++)
          {
            if (x == y && x != candid[i] - 1)
            {
              continue;
            }
            if (votes[x] > votes[y])
            {
              wins[i][1] += 1; 
            }
            
            if (y == candid[i] - 1 && wins[i][1] == candid[i] - 1)
            {
              wins[i][0] = x + 1;
              if (votes[x] > (wins[i][2] / 2))
              {
                wins[i][1] = -2;
              }
              else if (votes[x] <= (wins[i][2] / 2))
              {
                wins[i][1] = -1;
              }
              break;
            }
            else if (y == candid[i] - 1 && wins[i][1] != candid[i] - 1)
            {
              wins[i][1] = 0;
            }
          }
          
          if (wins[i][1] == -2 || wins[i][1] == -1)
            {
              break;
            }
        }
      }
    }
  }
  
  for (i = 0; i < t; i ++)
  {
    if (wins[i][1] == -2)
    {
        printf("majority winner %d\n", wins[i][0]);
    }
    else if (wins[i][1] == -1)
    {
        printf("minority winner %d\n", wins[i][0]);
    }
    else if (wins[i][1] == 0)
    {
      printf("no winner\n");
    }
  }

  return 0;
}