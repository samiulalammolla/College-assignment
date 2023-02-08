#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void random_partition(int arr[],int n,int x){
    int arr1[n-1];
    int arr2[n-1];
    int j=0,k=0;
    for(int i=0;i<n;i++){
        if(arr[i]<x){
            arr1[j]=arr[i];
            j++;
        }
        else if(arr[i]>x){
            arr2[k]=arr[i];
            k++;
        }
    }
    printf("Elements Less than X:\n");
    for(int i=0;i<j;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    printf("Elements Greater than X:\n");
    for(int i=0;i<k;i++){
        printf("%d ",arr2[i]);
    }
    return;
}
int main(){
    int n;
    printf("Enter the Size of Array :\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Elements of Array :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    srand(time(NULL));
    int y=rand()%n;
    int x=arr[y];
    printf("Array Element as X: %d\n",x);
    random_partition(arr,n,x);
    return 0;
}