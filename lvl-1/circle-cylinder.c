#include <stdio.h>

/*This program calculates area of a circle and cylinder*/

int main(){
    float radius,area,area2,height;
    printf("enter radius of a circle: \n");
    scanf("%f",&radius);
    area=(22.0/7.0)*(radius*radius);
    printf("the area of a circle is %f\n",area);

    //area of cylinder
    printf("Enter height of cylinder: \n");
    scanf("%f",&height);

    area2=2.0*((22.0/7.0)*(radius*height));
    printf("area of cylinder is %f\n",area2);
    return 0;
}