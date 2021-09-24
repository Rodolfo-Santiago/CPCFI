#include <stdio.h>
int max(long long int a, long long int b, long long int* c);
int main()
{
	int i;
	int n;
	
	long long int x;
	long long int y;
	long long int M;
	long long int m;
	
	long long int diag;
	long long int dif;
	
	scanf("%d", &n);
	for(i = 0; i < n; i ++)
	{
		scanf("%lld %lld", &x, &y);
		if(x == y)
		{
			printf("%lld\n", (x * x) - (x - 1));
			continue;
		}
		M = 1;
		m = 0;
		M = max(x, y, &M);
		m = max(x, y, &m);
	
		diag = (M * M) - (M - 1);
		dif = M - m;
		
		if((M % 2 == 0 && M == y) || (M % 2 == 1 && M == x))
		{
			printf("%lld\n", diag - dif);
		}
		else if((M % 2 == 0 && M == x) || (M % 2 == 1 && M == y))
		{
			printf("%lld\n", diag + dif); 
		}
	}
	
	return 0;
}

int max(long long int a, long long int b, long long int* c)
{
	if(a > b)
	{
		if(*c == 1)
		{
			return a;
		}
		else
		{
			return b;
		}
	}
	else
	{
		if(*c == 1)
		{
			return b;
		}
		else
		{
			return a;
		}
	}
}