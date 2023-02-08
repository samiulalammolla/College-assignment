#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

void search(node *head,int key){
    node *ptr = head;
    int i=1;
    while(ptr!=NULL){
        if(ptr->data==key){
            printf("\n%d is present in the linked list at position %d.",key,i);
            return;
        }
        ptr = ptr->next;
        i++;
    }
    printf("\n%d is not present in the linked list.",key);
}

void print(node *head){
    node *ptr = head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}

node *insert(node *head,int info,int pos){
    node *ptr,*prev;
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = info;
    ptr = head;
    prev = NULL;
    for(int i=1;i<pos;i++){
        prev = ptr;
        ptr = ptr ->next;
    }
    if(prev==NULL){
        new_node->next = ptr;
        head = new_node;
    }else{
        prev->next = new_node;
        new_node->next = ptr;
    }
    return head;
}

node *delete(node *head,int pos){
    node *ptr=head,*prev=NULL;
    if(head==NULL)  return head;
   
    for(int i=1;i<pos;i++){
        prev=ptr;
        ptr=ptr->next;
    }
    if(pos==1){
        head=ptr->next;
        free(ptr);
    }
    prev->next = ptr->next;
    free(ptr);
    return head;
}



int main(){
    node *n=NULL;
    int choice,pos,data,key;
    printf("\n\n1 to insert a node\n2 to delete a node\n3 to print the list\n4 to search an element\nEnter Your Choice :\n");
    scanf("%d",&choice);
    while(1){
         switch(choice){
            case 1:
                printf("Enter the position and data you want to insert: ");
                scanf("%d %d",&pos,&data);
                n=insert(n,data,pos);
                break;
            case 2:
                printf("Enter the position which you want to delete: ");
                scanf("%d",&pos);
                n=delete(n,pos);
                break;
            case 3:
                print(n);
                break;
            case 4:
                printf("Enter the element you want to search: ");
                scanf("%d",&key);
                search(n,key);
                break;
            default:
                exit(1);
        }
        printf("\n\n1 to insert a node\n2 to delete a node\n3 to print the list\n4 to search an element\nEnter Your choice :");
        scanf("%d",&choice);
    }
    return 0;
}