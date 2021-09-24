#include <stdio.h>
int main()
{
	int i;
	
	int n;
	scanf("%d", &n);
	
	if((n + 1) % 4 == 0 || n % 4 == 0)
	{
		printf("YES\n");
		if(n % 4 == 0)
		{
			printf("%d\n", n / 2);
			for(i = 1; i <= n / 4; i ++)
			{
				printf("%d %d ", i, (n + 1) - i); 
			}
			
			printf("\n%d\n", n / 2);
			for(i = (n / 4) + 1; i <= n - (n / 4); i ++)
			{
				printf("%d ", i);
			}
			printf("\n");
		}
		else
		{
			printf("%d\n", (n + 1) / 2);
			for(i = 1; i < (n + 1) / 4; i ++)
			{
				printf("%d %d ", i, (n + 1) - i); 
			}
			printf("%d %d", (n + 1) / 4, (n + 1) / 2);
			
			printf("\n%d\n", ((n + 1) / 2) - 1);
			for(i = ((n + 1) / 4) + 1; i <= (n + 1) - ((n + 1) / 4); i ++)
			{
				if(i == (n + 1) / 2)
				{
					continue;
				}
				printf("%d ", i);
			}
			printf("\n");
		}
	}
	else
	{
		printf("NO\n");
	}
	
	
	return 0;
}