#include <stdio.h>

void max(float* a, float* b);

int main()
{
	int i;
	
	int n;
	float M;
	float m;
	
	float j;
	int k;	
	
	while(scanf("%d", &n), n > 0)
	{
		j = 0.0;
		k = 0;
		
		for(i = 1; i < n + 1; i ++)
		{
			scanf("%f %f", &M, &m);
			
			max(&M, &m);
					
			if(M / m >= 4.0)
			{
				if(m > j)
				{
					j = m;
					k = i;
				}
			}
			else 
			{
				if(m / 2.0 >= M / 4.0)
				{
					if(m / 2.0 > j)
					{
						j = m / 2.0;
						k = i;
					}
				}
				else
				{
					if(M / 4.0 > j)
					{
						j = M / 4.0;
						k = i;
					}
				}
			}
		}
		
		printf("%d\n", k);
	}
	
	return 0;
 } 
 
void max(float* a, float* b)
 {	
 	float aux;
 	if(*a < *b)
 	{
 		aux = *a;
 		*a = *b;
 		*b = aux;
	}
 }