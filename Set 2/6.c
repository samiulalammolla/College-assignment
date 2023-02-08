#include <stdio.h>
  #define ROW 10
  #define COL 10

  int main() {
        int mat[ROW][COL],mat1[ROW][COL],merarray[ROW][COL];
        int i, j, k, l, n, tmp , temp ;

        
        printf("Enter the order of the matrix:");
        scanf("%d", &n);

        
        printf("Enter your entries for the first matrix =\n");
        for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                        scanf("%d", &mat[i][j]);
                }
        }

       printf("Enter your entries for the second matrix =\n");
        for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                        scanf("%d", &mat1[i][j]);
                }
        }


        for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                        tmp = mat[i][j];
                        l = j + 1;
                        for (k = i; k < n; k++) {
                                while (l < n) {
                                        if (tmp > mat[k][l]) {
                                                tmp = mat[k][l];
                                                mat[k][l] = mat[i][j];
                                                mat[i][j] = tmp;
                                        }
                                        l++;
                                }
                                l = 0;
                        }
                }
        }

        for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                        temp = mat1[i][j];
                        l = j + 1;
                        for (k = i; k < n; k++) {
                                while (l < n) {
                                        if (temp > mat1[k][l]) {
                                                temp = mat1[k][l];
                                                mat1[k][l] = mat1[i][j];
                                                mat1[i][j] = temp;
                                        }
                                        l++;
                                }
                                l = 0;
                        }
                }
        }


        printf("\n");
        printf("Matrix 1 :\n");
        for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                        printf("%d ", mat[i][j]);
                }
                printf("\n");
        }

        printf("\n");
        printf("Matrix 2 :\n");
        for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                        printf("%d ", mat1[i][j]);
                }
                printf("\n");
        }


      int t = n+n ;

      for(int x=0; x<n; x++) {
           for(int y=0;y<n;y++) {
           merarray[x][y] = mat[x][y] ;
      }
      int m = 0;
        for(int z=n;z<t;z++) {
           merarray[x][z] = mat1[x][m++] ;
      }
   }

      printf("\n");
        printf("Final Matrix :\n");
        for (i = 0; i < n; i++) {
                for (j = 0; j < t; j++) {
                        printf("%d ", merarray[i][j]);
                }
                printf("\n");
        }


      for (i = 0; i < n; i++) {
                for (j = 0; j < t; j++) {
                        temp = merarray[i][j];
                        l = j + 1;
                        for (k = i; k < n; k++) {
                                while (l < t) {
                                        if (temp > merarray[k][l]) {
                                                temp = merarray[k][l];
                                                merarray[k][l] = merarray[i][j];
                                                merarray[i][j] = temp;
                                        }
                                        l++;
                                }
                                l = 0;
                        }
                }
        }

      printf("\n");
        printf("Final Matrix After Sorting :\n");
        for (i = 0; i < n; i++) {
                for (j = 0; j < t; j++) {
                        printf("%d ", merarray[i][j]);
                }
                printf("\n");
        }

        return 0;
  }