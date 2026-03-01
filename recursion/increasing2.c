#include <stdio.h>

/*previous question(increasing.c) with better syntax*/

void p(int , int );

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    p(1,n);
    return 0;
}

void  p(int x,int y){
    if(x>y) return;
    printf("%d\n",x);
    p(x+1,y);
}
