#include<stdio.h>
void getprime(int n){
    int is=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0){
            is=0;
            break;
        }
          
    }
    if(is)
     printf("%d ",n);
     return;
}
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n<=2)
     printf("No Prime nunber present\n");
    else{
        for(int i=2;i<n;i++){
            getprime(i);
        }
    }
   return 0;
}