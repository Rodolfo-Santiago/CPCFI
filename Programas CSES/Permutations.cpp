#include <stdio.h>
int main()
{
	int i;
	int n;
	scanf("%d", &n);
	if(n < 4 && n > 1)
	{
		printf("NO SOLUTION\n");
		return 0;
	}
	for(i = 2; i <= n; i += 2)
	{
		printf("%d ", i);
	}
	for(i = 1; i <= n; i += 2)
	{
		printf("%d ", i);
	}
	return 0;
}