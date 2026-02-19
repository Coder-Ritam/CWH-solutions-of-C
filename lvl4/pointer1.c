#include <stdio.h>

/*Program to grab address of a variable and then print its value using address*/

int main(){
    int i;
    i=32;
    int *j=&i;
    printf("the address thr of i is %p\n",&j);
    printf("the value of i is %d\n",*j);
    return 0;
}
