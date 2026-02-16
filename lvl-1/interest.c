#include <stdio.h>

/*this program calculates simple interest*/

int main(){
    float principal,rate,time,interest,amount;
    printf("enter the principal amount:\n");
    scanf("%f",&principal);
    printf("enter the rate  of interest:\n");
    scanf("%f",&rate);
    printf("enter the time in years:\n");
    scanf("%f",&time);
    interest=(principal*rate*time)/100;
    amount=principal+interest;
    printf("the simple interest is %f\n",interest);
    printf("the total amount is %f\n",amount);
    return 0;
}