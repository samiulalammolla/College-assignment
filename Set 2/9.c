#include <stdio.h>
void convert(int n, int base);
int main()
{
    int num, base;
    printf("Enter The number\n");
    scanf("%d", &num);
    printf("Enter The base\n");
    scanf("%d", &base);
    convert(num, base);
    return 0;
}

void convert(int n, int base)
{
    if(base ==1) 
    {
       while(n--) 
       {
        printf("%d",1);
        
       }
       return;
    }
    if (n == 0)
        return;
    int rem = n % base;
    convert(n / base, base);
    if (rem >= 10)
        putchar(65 + (rem - 10));
    else
        printf("%d", rem);
    // n=n/base;
}