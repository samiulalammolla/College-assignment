#include<stdio.h>
#include <stdlib.h>
#include<string.h>
char *dynamicString();
int search(char*,char*);
int main()
{
char* first=dynamicString();
char* second=dynamicString();
int result=search(first,second);
printf("The first string is:--%s\n",first);
printf("The first string is:--%s\n",second);
if(result==0) printf("The string 2  is not present in string 1");
else printf("The string 2 is present in string1 from position--%d",result);
return 0;
}

char* dynamicString()
{
    
    printf("\nEnter The string:--");
    char *str, c;
    int i = 0;
    str = (char*)malloc(1*sizeof(char));
    
    while((c = getchar())!='\n')
    {
      str[i] = c;
      i++;
      realloc(str,i*sizeof(char));
    }
    str[i] = '\0';
    return str;
}


int search(char* str1,char* str2)
{
  int len1=strlen(str1),len2=strlen(str2);
  for(int i=0;i<=len1-len2;i++)
  {
    int j;
    for( j=0;j<len2;j++)
    {
      if(str1[i+j]!=str2[j]) break;
    }
    if(j==len2) return i+1;
  }
  return 0;
}