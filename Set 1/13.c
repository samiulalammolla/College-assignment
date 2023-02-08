#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, pow,rem,r;
    float M[100][100], R[100][1],NR[100][1];
    printf("Enter the size of square matrix : ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        rem = 10000;
        for(int j=0; j<n-1; j++){
            r = rand() % rem;
            M[i][j] = r * 0.0001;
            rem -= r;
        }

        M[i][n-1] = rem*0.0001;

    }

    printf("\nMatrix M : \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%6.4f ",M[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<n; i++){
        R[i][0] = 1.0/n;
    }
    printf("\nMatrix R : \n");
    for(int i=0; i<n; i++){
        printf("%f\n", R[i][0]);
    }
    printf("\nEnter power : ");
    scanf("%d", &pow);
    while(pow--){
        for(int i=0; i<n; i++){
            float temp = 0;
            for(int j=0; j<n; j++){
                temp += (M[i][j] * R[j][0]);
            }
            NR[i][0] = temp;
        }
        for(int i=0; i<n; i++){
            R[i][0] = NR[i][0];
        }
    }
    printf("\n(M^p)*R : \n");
    for(int i=0; i<n; i++){
        printf("%f\n", R[i][0]);
    }
    return 0;
}