#include <stdio.h>
int main()
{
	int n, m;
	scanf("%d", &n);
	int ar1[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &ar1[i]);
	}
	scanf("%d", &m);
	int ar2[m];
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &ar2[i]);
	}
	int arr[n + m];
	for (int i = 0, j = 0, k = 0; k < n + m; ++k)
	{
		if (ar1[i] < ar2[j])
		{
			arr[k] = ar1[i];
			i++;
		}
		else
		{
			arr[k] = ar2[j];
			j++;
		}
	}
	for (int i = 0; i < n + m; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}