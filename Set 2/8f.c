#include<stdio.h>
double cose(double x,long p,long i,double term,int sign,int n);

int main(){
    long i=0;
    int n;
    double ans=0,term=1,x;
    int sign =1;
    printf("Enter The X value:--");
    scanf("%lf",&x);
    printf("Enter The N value:--");
    scanf("%d",&n);
    printf("%lf",cose(x,0,i,term,sign,n));
    return 0;
}

double cose(double x,long p,long i,double term,int sign,int n){
    if(p==n){
        return (sign*term);
    }
    double ans = (sign*term);
    term*=(x/++i)*(x/++i);
    sign*=-1;
    return ans+cose(x,p+1,i,term,sign,n);
}