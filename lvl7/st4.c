#include <stdio.h>

/*use arrow operator to print your structure*/

typedef struct emp {
    int salary;
    float score;
}employee;

int main()
{
    employee e1;
    employee *ptr1=&e1;
    ptr1->salary=56;
    ptr1->score=5.0;
    printf("the salary is %d and the score is %f \n",ptr1->salary,ptr1->score);
    return 0;
}
