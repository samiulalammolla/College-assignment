#include <stdio.h>
void e(double);
double fact[100];
void e(double x)
{
	double sum = 0;
	for (int i = 1; i <= x; i++)
	{
		sum += (i / fact[i]);
	}
	printf("%lf\n", sum);
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
	e(x);
	return 0;
}