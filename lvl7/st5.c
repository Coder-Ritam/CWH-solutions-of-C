#include <stdio.h>

/*A program to show complex number */

typedef struct complex_number{
    int Re;
    int Im;
}num;

int main(){
    num n1={1,-2};
    num *ptr=&n1;
    if(n1.Im>=0){
    printf("the complex number is z=%d+%di\n",ptr->Re,ptr->Im);
    }
    else{
        printf("the complex number is z=%d%di\n",ptr->Re,ptr->Im);
    }
    return 0;
}