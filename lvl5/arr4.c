#include <stdio.h>


int main(){
    /*To find how many variables are there in the array*/
    int myNum[4]={10,20,30,40};
    int* x=&myNum[0]; //we could have also written int* x=myNum since first element and the array name share same address
    int* y=&myNum[3];
    printf("there are %ld numbers\n",((y-x)+1));
    return 0;
}
