#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
    char str[50];
    printf("Enter number to check:\n");
    scanf("%s",&str);
    if (strlen(str) > 10)
    {
        int a, b;
        a = 0;
        b = strlen(str) - 1;
        while (b > 1)
        {
            if (str[a++] != str[b--])
            {
                printf("%s is NOT a palindrome\n", str);
                return 0;
            }
        }
        printf("%s is a palindrome\n", str);
    }
    else{    
    int n=atoi(str);
    int x = n, rev = 0;
    while (x != 0)
    {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    printf("%d ", rev);
    if (n == rev)
        printf("is a palindrome\n");
    else
        printf("Not a palindrome\n");

    }
    return 0;
}