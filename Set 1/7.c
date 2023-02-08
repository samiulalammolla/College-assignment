#include<stdio.h>
int gcd(int,int);
int main()
{
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   long int ans=a[0];
    for(int i=1;i<n;i++)
    {
        ans=ans*(a[i]/gcd(ans,a[i]));
    }
    if(ans==0) printf("can not be calculated\n");
    else printf("Lcm is : %ld\n",ans);
    return 0;
}
int gcd(int a,int b)
{
    if(a==0) return b;
    else if(b==0) return a;
    else gcd(b,a%b);
}

