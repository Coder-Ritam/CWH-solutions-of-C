#include <stdio.h>

/*Learning about structures from scratch part 1*/
struct Numbers{
    int num;
    float num2;
};
int main(){
    struct Numbers n1;
    struct Numbers n2;
    n1.num=10;
    n1.num2=9;
    n2.num=9;
    n2.num2=10;
    printf("the first equation is %dx+%.1f \n",n1.num,n1.num2);
    return 0;
}
