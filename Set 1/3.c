#include<stdio.h>
#include<math.h>
int main(){
    long int n;
    printf("Enter the numbers of rooms\n");
    scanf("%d",&n);
    float x=sqrt(n*(n+1)/2);
    if(x-floor(x)>0){
        printf("Does not exist.\n");
    }
    else
        printf("%.f",x);
    return 0;
}