#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	int i;
	
	while (scanf("%d", &n), n > 0)
	{
		int log2n = log10(n) / log10(2);
		
		if (n == pow(2.0, log2n))
		{
			printf("%d\n", n);
			continue;
		}
		
		int po = pow(2.0, (double)log2n);
		int resultado = 2 * (n - po);
		
		printf("%d\n", resultado);
	}
	
	return 0;
}