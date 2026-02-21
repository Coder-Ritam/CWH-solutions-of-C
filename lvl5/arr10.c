#include <stdio.h>

/*Program to create an array of size 3*10 to store tables of 2,7,9 respectively*/

int main(){
    int array[3][10];
    int i,j;
    int input1,input2,input3;
    printf("Enter  input 1: \n");
    scanf("%d",&input1);
    printf("Enter input2: \n");
    scanf("%d",&input2);
    printf("Enter input 3\n");
    scanf("%d",&input3);
    for(i=0;i<3;i++){
        for(j=0;j<10;j++){
            if(i==0){
                array[i][j]=input1*(j+1);
            }
            if(i==1){
                array[i][j]=input2*(j+1);
            }
            if(i==2){
                array[i][j]=input3*(j+1);
            }
        }
    }
    for ( i = 0; i < 3; i++){
        for(j=0;j<10;j++){
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    
}