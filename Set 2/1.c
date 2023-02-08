#include<Stdio.h>

#define MAX 100000
#define MIN 0 
 
int main()
{
    int size;
    printf("Enter the size of array = ");
    scanf("%d",&size);
    if(size < 5 ){
      printf("Please enter minimum 5 element");
      return 0;
    }
    int array[size];
    printf("Enter the element of array = ");
    for(int j=0;j < size ;j++){
      scanf("%d",&array[j]);
    }
    
    
    int firstmin = MAX, secmin = MAX, thirdmin = MAX, fourthmin =MAX, fifthmin= MAX;
    int firstmax = MIN,secondmax = MIN,thirdmax = MIN;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < firstmin)
        {
            fifthmin = fourthmin;
            fourthmin = thirdmin;
            thirdmin = secmin;
            secmin = firstmin;
            firstmin = array[i];
        }
 
        else if (array[i] < secmin)
        {
            fifthmin = fourthmin;
            fourthmin = thirdmin;
            thirdmin = secmin;
            secmin = array[i];
        }
 
        else if (array[i] < thirdmin){
            fifthmin = fourthmin;
            fourthmin = thirdmin;
            thirdmin = array[i];
        }
        else if (array[i] < fourthmin){
            fifthmin = fourthmin;
            fourthmin = array[i];
        }
        else if (array[i] < fifthmin)
            fifthmin = array[i];

        if (array[i] > firstmax)
        {
            thirdmax = secondmax;
            secondmax = firstmax;
            firstmax = array[i];
        }
 
        else if (array[i] > secondmax)
        {
            thirdmax = secondmax;
            secondmax = array[i];
        }
 
        else if (array[i] > thirdmax)
            thirdmax = array[i];
    }
    printf( "Third maximum element = %d\n",thirdmax);
    printf( "fifth minimum element = %d\n",fifthmin);
    printf( "Middle element = %d\n",array[size/2]);
    return 0;
}