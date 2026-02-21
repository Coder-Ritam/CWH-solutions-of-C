#include <stdio.h>

/*Program to create a function which counts the number of positive integers in an array*/
void count(int arr[],int size);

int main(){{
    int elem, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &elem); 
    int array[elem];

    printf("Enter the numbers:\n");
    for (i = 0; i < elem; i++) {
        scanf("%d", &array[i]); 
    }
    count(array,elem);
    return 0;
}}

void count(int arr[],int size){
    int count=0;
    arr[size];
    for (int i = 0; i < size; i++)
    {
      if(arr[i]>0){
        count++;
      }  
    }
    printf("There are %d in this array \n",count);
}
