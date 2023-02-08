#include<stdio.h>
int main(){
    int ch;
    float temp;
    printf("1) Celsius to fahrenheite\n2) Fahrenheite to Celcius\n3) Exit\n Enter your choice\n");
    scanf("%d",&ch);
    while(1){
    switch (ch)
    {
    case 1:
    printf("Enter the Temperature int Celsius\n");
    scanf("%f",&temp);
    printf("%f",temp*9/5+32);
    break;
    case 2:
    printf("Enter the Temperature int Fahrenheite\n");
    scanf("%f",&temp);
    printf("%f",((temp-32)*5)/9);
    case 3:
       return 0;
    default:
        printf("Enter the valid Input\n");
        break;
    }
    }
    return 0; 
}