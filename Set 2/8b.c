#include<stdio.h>

int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}
  

int main(){
  int m,n,tem=0;
  printf("Enter 1st number = ");
  scanf("%d",&m);
  printf("Enter 2nd number = ");
  scanf("%d",&n);

  
  int x = hcf(m,n);
  printf("The gcd of two number = %d",x);
  return 0;
}