#include <stdio.h>

int main()
{
	int i;
	float n;
	long long int suma;
	
	scanf("%f", &n);
	
	suma = (n / 2) * (n + 1.0);
	
	
	int d[(int)n - 1];
	
	for (i = 0; i < n - 1; i ++)
	{
		scanf("%d", d + i);
	}
	
	for (i = 0; i < n - 1; i ++)
	{
		suma -= *(d + i);
	}
	
	printf("%lld", suma);
	
	return 0;
}