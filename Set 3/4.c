#include<stdio.h>
#include<conio.h>
typedef struct date{
   int dd,mm,yy;
}DATE;
DATE setdate(void){
	DATE x;
	printf("Enter the date in dd/mm/yyyy\n");
	scanf("%d/%d/%d",&x.dd,&x.mm,&x.yy);
	return x;
}
void view_date(DATE t){
  printf("%d/%d/%d\n",t.dd,t.mm,t.yy);
}
int comp(DATE t1,DATE t2){
      if(t1.dd!=t2.dd){
        return 0;
      } 
      if(t1.mm!=t2.mm){
       return 0;
      }
      if(t1.yy!=t2.yy){
        return 0;
      }  
      return 1;
}
int main(){
  DATE d1,d2;
  printf("DATE d1:\n");
  d1=setdate();
  printf("DATE d2:\n");
  d2=setdate();
  printf("Time t3 is:\n");
  int is=comp(d1,d2);
  if(is)
     printf("Dates are equal \n");
  else
     printf("Dates are unequal");
  return 0;
}