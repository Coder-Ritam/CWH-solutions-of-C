#include <stdio.h>

/*program to show the use of enum (user defined data type)*/
enum num{
    n1=2,n2,n3
};

int main(){
    enum num num1=n1;
    enum num num2=n2;
    enum num num3=n3;
    printf("the output of number 1: %d\n",num1);
    printf("the output of number 2: %d\n",num2);
    printf("the output of number 3: %d\n",num3);
    return 0;
}
