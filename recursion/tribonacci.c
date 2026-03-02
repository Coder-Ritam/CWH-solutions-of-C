#include <stdio.h>

/*A program to write tribonacci series till nth term given by the user*/
int tribo(int);

int main(){
    int n;
    printf("enter a number: \t");
    scanf("%d",&n);
    int recAns=tribo(n);
    printf("The Answer is: %d\n",recAns);
    return 0;
}

int tribo(int a){
    if(a==0) return 0;
    if(a<=2) return 1;
    return tribo(a-1)+tribo(a-2)+tribo(a-3);
}
