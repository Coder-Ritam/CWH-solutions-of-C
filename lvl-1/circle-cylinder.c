#include <stdio.h>

/*This program calculates area of a circle and cylinder*/

int main(){
    float radius,area;
    printf("enter radius of a circle: \n");
    scanf("%f",&radius);
    area=(22.0/7.0)*(radius*radius);
    printf("the area of a circle is %f\n",area);
    return 0;
}