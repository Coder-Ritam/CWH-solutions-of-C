#include <stdio.h>

/*Function to find the sum and average of two numbers and also print the address of sum and avrage in main function*/

int* sum(int , int);
float* average(int ,int);

int main(){
    int x=4;
    int y=6;
    int* ptr1;
    float* ptr2;
    ptr1=sum(x,y);
    ptr2=average(x,y);
    printf("The address of sum is %p and average is %p\n",ptr1,ptr2);
    return 0;
}
int* sum(int a,int b){
    int s=a+b;
    int* ptr=&s;
    printf("The sum is %d\n",s);
    return ptr;
}
float* average(int a,int b){
    float avg=(a+b)/2.0;
    float* ptr=&avg;
    printf("The average is %f\n",avg);
    return ptr;
}
