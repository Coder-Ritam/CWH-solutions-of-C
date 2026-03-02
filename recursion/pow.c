#include <stdio.h>

/*make a function which calculates a raised to the power b using recursion*/

int power(int ,int );

int main(){
    int a,b;
    printf("enter base: \t");
    scanf("%d",&a);
    printf("enter exponent: \t");
    scanf("%d",&b);
    int recAns=power(a,b);
    printf("The answer is: %d\n",recAns);
    return 0;
}

int power(int x,int y){
    if(y==0) return 1;
    return x*power(x,y-1);
}
