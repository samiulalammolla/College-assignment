#include<stdio.h>
#include<conio.h>
typedef struct bank{
   int acc;
   char name[20];
   int balance;
}BANK;
BANK setacc(void){
	BANK x;
	printf("Enter the Acount Number :\n");
	scanf("%d",&x.acc);
  printf("Enter the Name :\n");
  fflush(stdin);
	gets(x.name);
  printf("Enter the Balance :\n");
	scanf("%d",&x.balance);
  return x;
}
void view_acc(BANK X[],int s){
  printf(" Account No. |      Name            |  Balance  |\n");
  for(int i=0;i<s;i++){
    if(X[i].balance<1000)
        printf("      %d          %s              Rs.%d     \n",X[i].acc,X[i].name,X[i].balance);
  }

}
void wid(BANK x[],int n,int ac,int am){
    for(int i=0;i<n;i++){
      if(x[i].acc==ac){
        if(x[i].balance-am<0){
           printf("The balance is insufficient for the specified withdrawal\n");
          x[i].balance=x[i].balance-am;
          printf(" Account No. |      Name            |   Balance  |\n");
          printf("      %d            %s             Rs.%d     \n",x[i].acc,x[i].name,x[i].balance);
        }
        else{
          x[i].balance=x[i].balance-am;
          printf(" Account No. |      Name            |  New Balance  |\n");
          printf("      %d            %s             Rs.%d     \n",x[i].acc,x[i].name,x[i].balance);
        }
      }
     }
  return;
}
void dep(BANK x[],int n,int ac,int am){
     for(int i=0;i<n;i++){
      if(x[i].acc==ac){
          x[i].balance=x[i].balance+am;
          printf(" Account No. |      Name            |  New Balance  |\n");
          printf("      %d          %s              Rs.%d     \n",x[i].acc,x[i].name,x[i].balance);
      }
     }
  return;
}
int main(){
  int n;
  printf("Enter the Number of Bank Accounts:\n");
  scanf("%d",&n);
  BANK b[n];
  for(int i=0;i<n;i++){
    b[i]=setacc();
  }
  int ch;
  int x,a;
  while(1){
    printf("\n\n 0. Widrawl \n 1. Deposit \n 2. Accounts Balance less than 1000 \n 3. Exit\n\nENTER YOUR CHOICE:\n");
    scanf("%d",&ch);
    switch(ch){
       case 0:
          printf("Enter the Account Number :\n");
	        scanf("%d",&x);
          printf("Enter the Withdrawal Amount :\n");
	        scanf("%d",&a);
          wid(b,n,x,a);
          break;
       case 1:
          printf("Enter the Account Number :\n");
	        scanf("%d",&x);
          printf("Enter the Deposit Amount :\n");
	        scanf("%d",&a);
          dep(b,n,x,a);
          break;
       case 2:
          printf("Accounts with balance below Rs.1000:\n");
          view_acc(b,n);
          break;
       case 3:
          return 0;
          break;
       default:
         printf("Enter the Valid Choice\n");
    }

  }
  return 0;
}