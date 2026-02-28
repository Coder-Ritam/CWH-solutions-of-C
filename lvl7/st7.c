#include <stdio.h>

/*A program to create a structure to show the details of bank account of a consumer.*/

typedef struct bank{
    char name[50];
    int acc_num;
    int pin;
}account;

void dis(account a1);

int main(){
    int i;
    account a1;
    account *ptr1=&a1;
    ptr1->name[50]="Ritam";
    ptr1->acc_num=01234567;
    ptr1->pin=01223;
    return 0;
}
void dis(account a1){
    printf("Account holder details are as follow: \n");
    printf("Account name:%s \n",)
}