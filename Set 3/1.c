#include<stdio.h>
#include<conio.h>
typedef struct Student{
   int roll;
   char name[20];
   int marks[5];
   int total,average;
}STUDENT;
STUDENT input(){
	STUDENT b;
	printf("Enter the Roll No :\n");
	scanf("%d",&b.roll);
	printf("Enter the name :\n");
	fflush(stdin);
	gets(b.name);
	int sum=0;
	for(int i=0;i<5;i++){
		printf("Enter the the marks of subject %d :\n",i+1);
		scanf("%d",&b.marks[i]);
		sum+=b.marks[i];
	}
	b.total=sum;
	b.average=sum/5;
	return b;
}
void output(STUDENT x)
{
	printf("      %d       %s                  %d        %d  \n",x.roll,x.name,x.total,x.average);
}
void shrt(STUDENT x[],int size){
	for(int i=0;i<size-1;i++){
		int min=x[i].total;
		int b=i;
		for(int j=i+1;j<size;j++){
			if(min>x[j].total){
				min=x[j].total;
				b=j;
			}
		}
		STUDENT temp=x[i];
		x[i]=x[b];
		x[b]=temp;
	}
}
int main(){
  int a;
  printf("Enter the numbers of Student :\n");
  scanf("%d",&a);
  STUDENT A[a];
  for(int i=0;i<a;i++){
	A[i]=input();
  }
  printf(" Roll No. |      Name            |  Total  |  Average |\n");
  for(int i=0;i<a;i++){
	output(A[i]);
  }
  printf("\n******* Afret Shorting by marks ********\n");
  shrt(A,a);
  printf(" Roll No. |      Name            |  Total  |  Average |\n");
  for(int i=a-1;i>-1;i--){
	output(A[i]);
  }
  return 0;
}