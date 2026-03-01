#include <stdio.h>

/*program to print the number from a to 1*/

void p(int);

int main(){
    int n;
    printf("enter a number: \t");
    scanf("%d",&n);
    p(n);
    return 0;
}

void p(int a){
    if(a<=0) return;
    printf("%d\n",a);
    p(a-1);
}
