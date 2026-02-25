#include <stdio.h>
#include <string.h>

/*A program to the details of 3 employees from user defined data.*/

int main(){
    struct employee
    {
        int code;
        float salary;
        char name[20];
    };
    //details of employee number 1
    struct employee e1;
    strcpy(e1.name,"Ritam");
    e1.code=111;
    e1.salary=71000;
    
    //details of employee number 2
    struct employee e2;
    strcpy(e2.name,"Rajveer");
    e2.code=112;
    e2.salary=71000;

    //details of employee number 3
    struct employee e3;
    strcpy(e3.name,"Epil");
    e3.code=113;
    e3.salary=71000;
    
    struct employee *ptr;
    ptr=&e1;
    printf("code of Ritam is: %d \n", ptr->code);
    
    return 0;
}