#include<stdio.h>
int gcdFact(int, int);
int gcdEuclid(int, int);
int main() 
{
     int n1, n2;
    scanf("%d%d", &n1, &n2);
    if(n1 == 0 && n2 == 0) 
     {
        printf("Infinity\n");
        return 0;
     }
    printf("\nThe remainder list\n");
    int ans = gcdEuclid(n1, n2);
    printf("\nThe GCD using Euclid Algorithm: %d\n", ans);
    ans = gcdFact(n1, n2);
    printf("The GCD using Factorization Method: %d\n", ans);
    return 0;
}

int gcdEuclid(int a, int b) {
    int rem = a % b;
    printf("\n%d  ",rem);
    if(rem == 0)
        return b;
    return gcdEuclid(b, rem);
}
int gcdFact(int a, int b) {
    if(a == 0)
        return b;
    if(b == 0)
        return a;
    int min = a;
    if(b < a)
        min = b;
    int res = 1;
    for(int i = 2 ; i <= min ; i++) {
        if(a % i == 0 && b % i == 0) {
            printf("%d | %d, %d\n", i, a, b);
            a = a / i;
            b = b / i;
            res *= i;
            i--;
        }
    }
    printf("  | %d, %d\n", a, b);
    return res;
}