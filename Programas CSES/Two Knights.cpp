#include <stdio.h>
int main()
{
	long long int i;
	int n;
	long long int num_ways;
	scanf("%d", &n);
	for(i = 1; i <= n; i ++)
	{
		num_ways = (((i * i) * ((i * i) - 1)) / 2) - (4 * (i - 1) * (i - 2));
		printf("%lld\n", num_ways);
	}
	return 0;
}