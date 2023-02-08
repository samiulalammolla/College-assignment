#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort(int n, char *x[]);

int main()
{
      char *x[20];
      int i, n = 0;
      printf("Enter the no of country : ");
      scanf("%d", &n);
      printf("\n");

      for (i = 0; i < n; i++)
      {
            printf("Enter the country name %d : ", i + 1);
            x[i] = (char *)malloc(20 * sizeof(char));
            scanf("%s", x[i]);
      }
      sort(n, x);
      printf("\nAfter Sorting  the country list is :  \n");
      for (i = 0; i < n; i++)
      {
            printf("%d %s\n", i + 1, x[i]);
      }
      return 0;
}
void sort(int n, char *x[])
{
      int i, j;
      char t[20];
      for (i = 0; i < n - 1; i++)
            for (j = i + 1; j < n; j++)
                  if (strcmp(x[i], x[j]) > 0)
                  {
                        strcpy(t, x[j]);
                        strcpy(x[j], x[i]);
                        strcpy(x[i], t);
     }
}