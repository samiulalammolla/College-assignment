#include<stdio.h>
#include<stdbool.h>

int m,n;
bool isOrthogonal(int a[][n], int m, int n)
{

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
    if (i != j && a[i][j] != 0)
        return false;
    if (i == j && a[i][j] != 1)
        return false;
    }
}
 
}


int main()
{
  
    int i,j,sum = 0;
  label :
    printf("Enter no. of rows = ");
        scanf("%d", &m);
        printf("\nEnter no. of cols = ");
        scanf("%d",&n);
        if(m != n){
            printf("\nPlease enter same number of rows and columns !!!!\n");
            goto label;
        }
        int array[m][n];
        printf("\nEnter values to the matrix : -  \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 scanf("%d", &array[i][j]);
        }
    }

    printf("\nThe given matrix is \n\n");
        for (i = 0; i < m; ++i)
        {
        for (j = 0; j < n; ++j)
        {
            printf("\t%d", array[i][j]);
        }
        printf("\n\n");
    }

    int transpose[m][n];

  // computing the transpose
  for (int i = 0; i < m; ++i)
  for (int j = 0; j < n; ++j) {
    transpose[j][i] = array[i][j];
  }

  // printing the transpose
  printf("\nTranspose of the matrix:\n\n");
  for (int i = 0; i < m; ++i)
  for (int j = 0; j < n; ++j) {
    printf("\t%d", transpose[i][j]);
    if (j == n - 1)
    printf("\n\n");
  }

int mul[m][n];
printf("\nmultiply of the matrix : -\n");    
for(i=0;i<m;i++)    
{    
for(j=0;j<n;j++)    
{    
mul[i][j]=0;    
for(int k=0;k<n;k++)    
{    
mul[i][j]+=array[i][k]*transpose[k][j];    
}    
}    
}    
   
for(i=0;i<m;i++)    
{    
for(j=0;j<n;j++)    
{    
printf("\t%d",mul[i][j]);    
}    
printf("\n\n");    
} 

if (isOrthogonal(mul, m, n))
    printf("\nIt is a orthogonal matrix");
else
    printf("\nIt is not a orthogonal matrix");;

    return 0;
}