#include <stdio.h>

/*Program to grab address of a variable and then print its value using address*/

int main(){
    int i;
    i=32;
    int* j=&i;
    int** k=&j;
    printf("the address thr of i is %p\n",&j);
    printf("the value of i is %d\n",*j);
    printf("address of j is %p\n",&k);
    printf("the value of j using k is %d\n",**k);
    return 0;
}
