#include<stdio.h>
#include<conio.h>
typedef struct time{
   int hr,min,sec;
}TIME;
TIME settime(void){
	TIME x;
	printf("Enter the time in hr:min:sec\n");
	scanf("%d:%d:%d",&x.hr,&x.min,&x.sec);
	return x;
}
void view_time(TIME t){
  printf("%d:%d:%d\n",t.hr,t.min,t.sec);
}
TIME addtime(TIME t1,TIME t2){
      TIME t3;
      t3.sec=(t1.sec+t2.sec);
      t3.min=(t1.min+t2.min);
      t3.hr=(t1.hr+t2.hr); 
      int temp=0; 
      if(t3.sec>59){
        temp=t3.sec/60;
        t3.sec=t3.sec%60;
      } 
      if(temp || t3.min>59){
        t3.min=t3.min+temp;
        temp=t3.min/60;
        t3.min=t3.min%60;
      }
      if(temp){
        t3.hr=t3.hr+temp;
      }  
      return t3;
}
int main(){
  TIME t1,t2;
  printf("Time t1:\n");
  t1=settime();
  printf("Time t2:\n");
  t2=settime();
  printf("Time t3 is:\n");
  TIME t3=addtime(t1,t2);
  view_time(t3);
  return 0;
}