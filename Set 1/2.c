#include<stdio.h>
int main(){
    int amount;
    printf("Enter the amount\n");
    scanf("%d",&amount);
    if(amount%10!=0){
      printf("Not possible\n");
      return 0;
    }
    else{
      int hun=0,fif=0,twy=0,ten=0;
      while(amount>0){
        if(amount/100>0){
            hun=amount/100;
            amount%=100;
        }
        else if(amount/50>0){
            fif=amount/50;
            amount%=50;
        }
        else if(amount/20>0){
            twy=amount/20;
            amount%=20;
        }
        else if(amount/10>0){
            ten=amount/10;
            amount%=10;
        }
    }
    printf("100 x %d\n50 x %d\n20 x %d\n10 x %d",hun,fif,twy,ten);
    }
    return 0;
}