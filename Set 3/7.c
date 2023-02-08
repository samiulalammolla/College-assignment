#include<stdio.h>
#include<string.h>
int main(){
    FILE* fp1;
    FILE* fp2;
    fp1=fopen("f1.txt","r");
    fp2=fopen("f2.txt","a");
    if(fp1==NULL || fp2==NULL){
        printf("File not opened\n");
        return 0;
    }
    char str[15];
    while(fgets(str,12,fp1)){
        fputs(strupr(str),fp2);
        // printf("%s",strupr(str));
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}