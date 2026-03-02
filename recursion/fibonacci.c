#include  <stdio.h>

/*write a function to calculate the nth fibonacci number using recursion*/

int fibo(int);

int main(){
    int n;
    printf("Enter the nth number:\t ");
    scanf("%d",&n);
    int recAns=fibo(n);
    printf("answer: %d\n",recAns);
    return 0;
}

int fibo(int z){
    if(z<=2) return 1;
    return fibo(z-1)+fibo(z-2);
}
