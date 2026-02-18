#include <stdio.h>

/*Program using recursion to find the nth value of fibonacci series*/

int fibo(int i);

int main(){
    int n,i;
    printf("Enter the required number of terms\n");
    scanf("%d",&n);

    printf("Fibonacci series: \n");
    for(i=0;i<n;++i){
        printf("%d",fibo(i));
    }
    return 0;
}

int fibo(int n){
    if(n<=0){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
