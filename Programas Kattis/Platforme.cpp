#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	int j;
	int n;
	scanf("%d", &n);
	
	int** matriz = (int**)calloc(n, sizeof(int*));
	for(i = 0; i < n; i ++)
	{
		*(matriz + i) = (int*)calloc(3, sizeof(int));
	}
	
	for(i = 0; i < n; i ++)
	{
		scanf("%d %d %d", *(matriz + i) + 0, *(matriz + i) + 1, *(matriz + i) + 2);
	}
	
	int suma = 0;
	int difAltitud;
	int difAltitud2;
	int altitud_mas_prox;
	int altitud_mas_prox2;
	
	for(i = 0; i < n; i ++)
	{
		difAltitud = 10001;
		difAltitud2 = 10001;
		altitud_mas_prox = 0;
		altitud_mas_prox2 = 0;
		
		for(j = 0; j < n; j ++)
		{
			if(*(*(matriz + j) + 0) < *(*(matriz + i) + 0) && *(*(matriz + i) + 1) >= *(*(matriz + j) + 1) && *(*(matriz + i) + 1) < *(*(matriz + j) + 2))
			{
				if(difAltitud > *(*(matriz + i) + 0) - *(*(matriz + j) + 0))
				{
					difAltitud = *(*(matriz + i) + 0) - *(*(matriz + j) + 0);
					altitud_mas_prox =  *(*(matriz + j) + 0);
				}
			}
			
			
			if(*(*(matriz + j) + 0) < *(*(matriz + i) + 0) && *(*(matriz + i) + 2) > *(*(matriz + j) + 1) && *(*(matriz + i) + 2) <= *(*(matriz + j) + 2))
			{
				if(difAltitud2 > *(*(matriz + i) + 0) - *(*(matriz + j) + 0))
				{
					difAltitud2 = *(*(matriz + i) + 0) - *(*(matriz + j) + 0);
					altitud_mas_prox2 =  *(*(matriz + j) + 0);
				}
			}
			
			if(j == n - 1)
			{
				suma += (*(*(matriz + i) + 0) - altitud_mas_prox) + (*(*(matriz + i) + 0) - altitud_mas_prox2);
				//printf("%d %d -- ", altitud_mas_prox, altitud_mas_prox2);
			}
				
		}
	}
	
	printf("%d", suma);
	
	return 0;
}

