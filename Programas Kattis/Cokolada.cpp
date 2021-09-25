#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	int log2n = log10(n) / log10(2);
	 
	if(pow(2.0, (double)log2n) == n)
	{
		printf("%d 0", (int)pow(2.0, log2n));
	
	}
	else
	{	
		printf("%d ", (int)pow(2.0, (double)log2n + 1));
		
		int contador = 0;
		int potencia;
		//log2n = log10(n) / log10(2);
		while(n > 0)
		{	
			potencia = (int)pow(2.0, (double)log2n);
			if(potencia <=  n)
			{
				n -= potencia;
			}
			contador ++;
			log2n --;
		}
	
		printf("%d", contador);
	}
	

	return 0;
}