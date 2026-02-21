#include <stdio.h>

/*Create a 1d array of 10 integers and save multiplication table of 5 in it*/

int main(){
    int i;
    int array[10];
    for(i=1;i<=10;i++){
        array[i]=array[i]*5;
    }
    printf("The numbers are:\n");
    for(i=0;i<10;i++){
        printf("%d\t",array[i]);
    }
    printf("\n");
}