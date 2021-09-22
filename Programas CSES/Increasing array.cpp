#include <stdio.h>

int main()
{
	int i;
	int n;
	long long int moves = 0;
	
	scanf("%d", &n);
	
	int d[n];
	
	for (i = 0; i < n; i ++)
	{
		scanf("%d", (d + i));
	}
	
	int k = *d;
	
	for (i = 1; i < n; i ++)
	{
		if (k > *(d + i))
		{
			moves += (k - *(d + i));
		}
		if (k < *(d + i))
		{
			k = *(d + i);
		}
	}
	
	printf("%lld", moves);
	
	return 0;
}