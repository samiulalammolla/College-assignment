#include<stdio.h>
#include<string.h>
void pristr(char a[],int l){
    if(l<0)
       return;
     printf("%c",a[l]);
     pristr(a,l-1);
}
void prst(char a[],int l){
     for(int i=l-1;i>=0;i--){
        printf("%c",a[i]);
    }
    return;
}
int main(){
    char a[100];
    printf("Enter a String:");
    scanf("%s",a);
    int l=strlen(a);
    printf("\nWithout Recursion :");
    prst(a,l);
    printf("\nWith Recursion :");
    pristr(a,l-1);
    return 0;
}