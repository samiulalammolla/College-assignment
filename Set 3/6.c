#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE * fp1;
    FILE * fp2;
    int row=0,col=0,i,j;
    fp1=fopen("matrix.txt","r");
    fp2=fopen("matrix-row-sum.txt","w");
    if(fp1==NULL || fp2==NULL){
        printf("File not opened\n");
        return 0;
    }
    char c;
    while((c=fgetc(fp1))!=EOF){
        if(c=='0' || c=='1')
          col++;
        if(c=='\n')
          row++;
    }
    col=col/(row+1);
    row=row+1;
    printf("row : %d\nCol : %d\n",row,col);
    int **matrix=(int**)malloc(row*sizeof(int*));
    for(int i=0;i<row;i++){
        matrix[i]=(int*)malloc(col*sizeof(int));
    }
    rewind(fp1);
    int temp;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            fscanf(fp1,"%d",&temp);
            matrix[i][j]=temp;
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    fclose(fp1);
    for(int i=0;i<row;i++){
        int sum=0;
        for (int j = 0; j < col; j++)
        {
            sum+=matrix[i][j];   
        }
        fprintf(fp2,"%d\n",sum);
    }
    fclose(fp2);
    return 0;
}