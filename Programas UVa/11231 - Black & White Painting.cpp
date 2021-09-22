#include <stdio.h>

int n;
int m;
int c;
long long int res;

int porLado(int a)
{
	if(a % 2 == 0)
	{
		a = a / 2;
	}
	else if(a % 2 == 1)
	{
		a = (a + 1) / 2;
	}
	return a;
}

int calculo(int a, int b)
{
	int ladon;
	int ladom;
	ladon = porLado(a);
	ladom = porLado(b);
	return ladon * ladom;
}

int main()
{
	while(scanf("%d %d %d", &n, &m, &c), n > 0)
	{
		res = 0;
		n -= 7;
		m -= 7;
		
		res += calculo(n, m);
		res += calculo(n - 1, m - 1);
		if(c)
		{
			printf("%lld\n", res);
		}
		else
		{
			res = (n * m) - res;
			printf("%lld\n", res);	
		}
	}
	return 0;
}