#include <stdio.h>

/* Program to accept marks of students */

#include <stdio.h>

int main(){
    int marks[5];
    int names[5];
    int i;
    for(i=0;i<5;i++){
        printf("Enter the marks of student %d \t",i);
        scanf("%d",&marks[i]);
    }
    printf("the marks of the student are\n");
    for(i=0;i<5;i++){
        printf("%d \n",marks[i]);
    }
}
