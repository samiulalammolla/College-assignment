#include <stdio.h>
void loge(double);
void loge(double x)
{
	double temp = x, sum = 0;
	int sign = 1;
	for (int i = 1; i <= 1100000; i++)
	{
		sum += (temp / i) * sign;
		temp *= x;
		sign *= -1;
	}
	printf("%lf\n", sum);
}
int main()
{
	double x;
	scanf("%lf", &x);
	loge(x);
	return 0;
}