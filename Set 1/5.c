#include<stdio.h>
float powr(float n,int p){
    float ans=1;
    while(p>0){
        ans*=n;
        p--;
    }
    return ans;
}
int main()
{   
    float n,ans;
    int p;
    printf("Enter the number\n");
    scanf("%f",&n);
    printf("Enter the power\n");
    scanf("%d",&p);
    if(n==0 && p<=0)
      printf("Undefined\n");
    else if(n<=0 && p<0){
        ans=1/powr(n,-p);
        printf("%f",ans);
    }
    else if(n<0 && p>=0){
        ans=powr(n,p);
        printf("%f",ans);
    }
    else if(n>=0 && p>=0){
        ans=powr(n,p);
        printf("%f",ans);
    }
    return 0;
}