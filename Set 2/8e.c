#include <stdio.h>
void convert(int n);
int main()
{
    int num;
    printf("Enter The number\n");
    scanf("%d", &num);
    convert(num);
    return 0;
}

void convert(int n)
{
    if (n == 0)
        return;
    int rem = n % 2;
    convert(n / 2);
    printf("%d", rem);
}