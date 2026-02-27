#include  <stdio.h>

/*write a program to divide two floating point variables and show the division upto 3 decimal places*/

void get(float a,float b){
    printf("sum = %.3f\n",a+b);
}

int main(){
    float a,b;
    a=13;
    b=5;
    get(a,b);
    return 0;
}
