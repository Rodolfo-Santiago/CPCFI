#include <stdio.h>
int main()
{
	int i;
	int n;
	scanf("%d", &n);
	int suma = 2;
	for(i = 0; i < n; i ++)
	{
		suma += (suma - 1);
	}
	
	printf("%d", suma * suma);
	return 0;
}