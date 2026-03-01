#include <stdio.h>

/*A program to print good mornings n times*/
void p();

int main(){
    int n;
    printf("enter a number \n");
    scanf("%d",&n);
    p(n);
}

void p(int a){
    if(a==0) return;
    printf("Good morning\n");
    p(a-1);
}
