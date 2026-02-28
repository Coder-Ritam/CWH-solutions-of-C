#include <stdio.h>

/*Learning about structures from scrach part 1*/
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
    struct Numbers n3={1,2.0};
    printf("the first equation is %dx+%.1f \n",n1.num,n1.num2);
    printf("the second equation is %dx+%.1f \n",n2.num,n2.num2);
    printf("the third equation is %dx+%.1f \n",n3.num,n3.num2);
    return 0;
}