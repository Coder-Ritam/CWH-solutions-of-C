#include <stdio.h>

/*A program to show complex number */

typedef struct complex_number{
    int Re;
    int Im;
}num;

int main(){
    num n1={1,2};
    struct complex_number *ptr=&n1;
    printf("the complex number is z=%d+%di\n",ptr->Re,ptr->Im);
    return 0;
}
