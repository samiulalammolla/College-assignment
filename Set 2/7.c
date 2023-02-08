#include<stdio.h>

void string_len(char str[]){
  int i,length=0;
  for(i=0; str[i]!='\0'; i++)
    {
        length++; 
    }
    
    printf("\nLength of string is: %d\n\n",length);
}

void string_cpy(char str[]){

  char s2[100];
  int i;
   
    for (i = 0; str[i] != '\0'; ++i) {
        s2[i] = str[i];
    }
  
    s2[i] = '\0';

    printf("Copy String : %s\n\n", s2);
}

void string_concat(char s1[], char s2[]) {
	int i, j , length=0;
  for(i=0; s1[i]!='\0'; i++)
    {
        length++; 
    }
	i = length ;
	for (j = 0; s2[j] != '\0'; i++, j++) {
		s1[i] = s2[j];
	}
	s1[i] = '\0';
  printf("String concat : %s\n\n", s1);
}

void string_rev(char s1[]){

char s2[100];
int i, j , k=0,  length=0;
  for(i=0; s1[i]!='\0'; i++)
    {
        length++; 
    }
	i = length-1 ;
  for(j=i;j>=0;j--){
    s2[k++] = s1[j];
  }

  s2[k]='\0';
  printf("\nString reverse : %s\n\n", s2);
}

void string_cmp(char a[],char b[])  
{  
    int flag=0,i=0;   
    while(a[i]!='\0' && b[i]!='\0')   
    {  
       if(a[i]!=b[i])  
       {  
           flag=1;  
           break;  
       }  
       i++;  
    }  
    if(flag==0)  
    printf("\nString are same\n\n");  
    else  
    printf("\nString are not same\n\n");   
}  

int main()
{
    char str[100],str1[100];
    int choice,t=5;

    while(t--){
    
    printf("1 For strlen() \n");
    printf("2 For strcpy() \n");
    printf("3 For strcat() \n");
    printf("4 For strrev()\n");
    printf("5 For strcmp()\n");

    printf("Enter your choice = ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1 :
      printf("Enter a string: \n");
      scanf("%s",str);
      string_len(str);
      break;
    case 2 :
      printf("Enter a string: \n");
      scanf("%s",str);
      string_cpy(str);
      break;
    case 3 :
      printf("Enter first string: \n");
      scanf("%s",str);
      printf("Enter second string: \n");
      scanf("%s",str1);
      string_concat(str,str1);
      break;
    case 4 :
      printf("Enter a string: \n");
      scanf("%s",str);
      string_rev(str);
      break;
    case 5 :
      printf("Enter first string: \n");
      scanf("%s",str);
      printf("Enter second string: \n");
      scanf("%s",str1);
      string_cmp(str,str1);
      break;
    default :
    printf("\n Chose perfect option \n\n");
    break;
    }

}
      return 0;
}