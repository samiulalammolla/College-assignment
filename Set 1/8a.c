#include <stdio.h>
void sine(double);
double fact[100];
void sine(double x)
{
	double temp = x, sum = 0;
	int sign = 1;
	for (int i = 1; i < 50; i = i + 2)
	{
		sum += (temp / fact[i]) * sign;
		temp *= x * x;
		sign *= -1;
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
	double x;
	scanf("%lf", &x);
	sine(x);
	return 0;
}