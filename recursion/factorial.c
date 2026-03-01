#include <stdio.h>

/*A program to print factorial of number input by user*/

int factorial(int );

int main(){
    int n;
    printf("enter a number \n");
    scanf("%d",&n);
    int k=factorial(n);
    printf("The factorial of %d! is %d \n",n,k);
    return 0;
}

int factorial(int a){
    if(a<=0)
        return 1;
    return a*factorial(a-1);
}
