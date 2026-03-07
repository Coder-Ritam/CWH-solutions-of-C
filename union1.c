#include <stdio.h>

/*Nested Union*/
union Student1{
    int rollNo;
    union Academic{
        int marks;
    }performance;
};

//Simple Union
union Student{
    int rollNo;
    float height;
    char first_Letter;
};
int main(){
    //union members share the same memory location
    union Student a1;
    a1.rollNo=21;
    printf("%d\n",a1.rollNo);
    a1.height=5.7;
    printf("%.2f\n",a1.height);
    printf("%c\n",a1.first_Letter);

    union Student1 a2;
    a2.rollNo=25;
    printf("%d\n",a2.rollNo);
    a2.performance.marks=255;
    printf("%d\n",a2.performance.marks);
    return 0;
}
