#include <stdio.h>
#include <math.h>
#include <string.h>

void prdi(int);
void prcr_in(int);
void prind(int);
void print(int);

void prdi(int x)
{
	char ar1[20][10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "ninteen"};
	char ar2[10][10] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninty"};
	if (x < 20)
		printf(" %s", ar1[x]);
	else
		printf(" %s %s", ar2[x / 10], ar1[x % 10]);
}
void prcr_in(int x)
{
	char ar3[5][10] = {"", "hundred", "thousand", "lakh", "crore"};
	if (x / 10000000 > 0)
		printf(" %s", ar3[4]);
	else if (x / 100000 > 0)
		printf(" %s", ar3[3]);
	else if (x / 1000 > 0)
		printf(" %s", ar3[2]);
	else if (x / 100 > 0)
		printf(" %s", ar3[1]);
}
void prind(int x)
{
	int y = x;
	int i = 10000000;
	while (y != 0)
	{
		if (i == 0)
			i = 1;
		if (y < i)
		{
			if (i == 1000)
				i = i / 10;
			else
				i = i / 100;
			continue;
		}
		prdi(y / i);
		prcr_in(y);
		y = y % i;
		if (i == 1000)
			i = i / 10;
		else
			i = i / 100;
	}
}
void print(int x)
{
	char ar3[2][10] = {"thousand", "million"};
	int y = x;
	while (y != 0)
	{
		if (y / 1000000 > 0)
		{
			prind(y / 1000000);
			printf(" %s", ar3[1]);
			y = y % 1000000;
		}
		else if (y / 1000 > 0)
		{
			prind(y / 1000);
			printf(" %s", ar3[0]);
			y = y % 1000;
		}
		else if (y / 1 > 0)
		{
			prind(y);
			y = y % 1;
		}
	}
}
int main()
{
	int x;
	scanf("%d", &x);
	printf("INDIAN:\n");
	prind(x);
	printf("\n\nINTERNATIONAL:\n");
	print(x);
}