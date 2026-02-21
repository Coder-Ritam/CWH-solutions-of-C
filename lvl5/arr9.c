#include <stdio.h>

/*Program to create an array of size 3*10 to store tables of 2,7,9 respectively*/

int main(){
    int array[3][10];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<10;j++){
            if(i==0){
                array[i][j]=2*(j+1);
            }
            if(i==1){
                array[i][j]=7*(j+1);
            }
            if(i==2){
                array[i][j]=9*(j+1);
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
