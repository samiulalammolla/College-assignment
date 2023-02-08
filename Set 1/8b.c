#include <stdio.h>
void cose(double);
double fact[300];
void cose(double x)
{
	double temp = 1, sum = 0;
	int sign = 1;
	for (int i = 0; i < 100; i = i + 2)
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
	for (int i = 2; i < 300; i++)
	{
		fact[i] = i * fact[i - 1];
	}
	double x;
	scanf("%lf", &x);
	cose(x);
	return 0;
}