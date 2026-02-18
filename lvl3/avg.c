#include <stdio.h>

/*Program to create a function to find average of three natural numbers*/
int avg(int a,int b,int c);

int main(){
    int e;
    e=avg(2,2,3);
    printf("the number is %d ghop ghop\n",e);
    return 0;
}

int avg(int a,int b,int c){
    int d;
    d=(a+b+c)/3;
    return d;
}
