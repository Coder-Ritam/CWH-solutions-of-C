#include <stdio.h>

/*This program measures the area of a rectangle*/

int main() {
    float length,width,area;
    printf("Enter the length of the rectangle:\n");
    scanf("%f",&length);
    printf("enter the width of the rectangle:\n");
    scanf("%f",&width);
    area=length*width;
    printf("the area of the rectaangle is %f\n",area);
    return 0;
}
