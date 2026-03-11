#include <stdio.h>

/*program to show the use of anonymous union*/

struct anon_union
{
    int roll;
    union Academic{
        int marks;
    }perf;
};


int main(){
    struct anon_union c;
    c.roll=21;
    printf("The roll of the student is: %d\n",c.roll);
    c.perf.marks=99;
    printf("the marks the give student is : %d\n",c.perf.marks);
    return 0;
}
