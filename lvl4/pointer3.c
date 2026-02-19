#include <stdio.h>

/*Program to create a function using pass by reference to increase the value of a integer by 10 times*/
void increase(int*);

int main(){
    int x=5;
    printf("before : %d\n", x);
    increase(&x);
    printf("after : %d\n", x);
    return 0;
}

void increase(int* a){
    if(a) *a=10*(*a);
}
