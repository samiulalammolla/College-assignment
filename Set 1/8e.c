#include <stdio.h>
void series(int);
double fact[100];
int nprime()
{
	static int i = 5;
	while (i < 10000)
	{
		int is = 1;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				is = 0;
				break;
			}
		}
		if (is)
			break;
		i++;
	}
	i++;
	return i - 1;
}
void series(int x)
{
	long long int sum = 0;
	int prime = 2, nxtprime = 3;
	for (int i = 0; i < x; i++)
	{
		sum += prime * nxtprime;
		prime = nxtprime;
		nxtprime = nprime();
	}
	printf("%lld", sum);
}
int main()
{
	fact[0] = 1;
	fact[1] = 1;
	for (int i = 2; i < 100; i++)
	{
		fact[i] = i * fact[i - 1];
	}
	int x;
	scanf("%d", &x);
	series(x);
	return 0;
}