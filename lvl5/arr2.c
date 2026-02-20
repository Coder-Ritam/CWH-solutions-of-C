#include <stdio.h>

/*A program to perform following operations on pointers
  (1)Addition of a pointer from a number
  (2)Subtraction of a pointer from a number

*/

int main(){
    int i=90;
    int* a=&i;
    printf("Pointer before addition:%p \n",a);
    a+=3;
    printf("Pointer after addition,before subtraction:%p \n",a);
    a-=3;
    printf("Pointer after Subtraction: %p \n",a);
    return 0;
    /*The main goal of this program was to understand pointers  and memory addresss*/
}
