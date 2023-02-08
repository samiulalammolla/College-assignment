#include <stdio.h>
#include<string.h>
#include<conio.h>
typedef struct library
{
    int acss_no;
    char title[100];
    char author[30];
    float price;
    int flag;
} LIBRARY;
LIBRARY add_book_info(void)
{
    LIBRARY temp;
    printf("Enter the accession number\n");
    scanf("%d",&temp.acss_no);
    fflush(stdin);
    printf("Enter the title of the book\n");
    gets(temp.title);
    printf("Enter the author name\n");
    gets(temp.author);
    printf("Enter the price\n");
    scanf("%f",&temp.price);
    printf("Werther book is issued(1) or not issued(0)\n");
    scanf("%d",&temp.flag);
    return temp;
}
void display_book_info(LIBRARY temp){
    printf("\n------------------------------------------------------\n");
    printf("Accession No. : %d\n",temp.acss_no);
    printf("Title : %s\n",temp.title);
    printf("Author : %s\n",temp.author);
    printf("Price : %f\n",temp.price);
    printf("Status : ");
    if(temp.flag)
        printf("Issued\n");
    else
        printf("Not Issued\n");
    printf("\n------------------------------------------------------\n");
}
void shrt(LIBRARY x[],int size){
	for(int i=0;i<size;i++){
		int min=x[i].acss_no;
		int b=i;
		for(int j=i+1;j<size;j++){
			if(min>x[j].acss_no){
				min=x[j].acss_no;
				b=j;
			}
		}
		LIBRARY temp=x[i];
		x[i]=x[b];
		x[b]=temp;
	}
}
int main()
{
    int ch;
    static  int bookcount = 0;
    char book_title[100];
    char auth_name[30];

    LIBRARY book[1000];
    while (1)
    {
        printf("1) Add book informtion\n2) Display book information\n3) List all books of given author\n4) List the title of specified book\n5) List the count of books in the library\n6) List the books in the order of accession number\n7) Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch(ch)
        {
        case 1:
            book[bookcount++]=add_book_info();
            break;
        case 2:
            for (int  i = 0; i < bookcount; i++)
            {
                display_book_info(book[i]);
            }
            break;
        case 3:
            printf("Enter the Author Name : ");
            fflush(stdin);
            gets(auth_name);
            for(int i=0;i<bookcount;i++){
                if(strcmp(book[i].author,auth_name)==0){
                    display_book_info(book[i]);
                }
            }
            break;
        case 4:
            printf("Enter the Title of Book : ");
            fflush(stdin);
            gets(book_title);
            for(int i=0;i<bookcount;i++){
                if(strcmp(book[i].title,book_title)==0){
                    display_book_info(book[i]);
                }
            }
            break;
        case 5:
            printf("\n\nTotal No. of books : %d\n",bookcount);
            break;
        case 6:
            shrt(book,bookcount);
            for (int  i = 0; i < bookcount; i++)
            {
                display_book_info(book[i]);
            }
            break;
        case 7:
              return 0;
        default:
            printf("Plz enter the valid option\n");
        }
    }
}