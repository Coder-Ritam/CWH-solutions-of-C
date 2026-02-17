#include <stdio.h>

/*This program calculates the greatest of four numbers*/

int main(){
    float a,b,c,d;
    printf("enter a\n");
    scanf("%f",&a);
    printf("enter b\n");
    scanf("%f",&b);
    printf("enter c\n");
    scanf("%f",&c);
    printf("enter d\n");
    scanf("%f",&d);
    if(a>b && a>c && a>d){
        printf("a is the greatest \n");
    }
    else if(b>a && b>c && b>d){
        printf("b is the greatest\n");
    }
    else if(c>a && c>b && c>d){
        printf("c is the greatest\n");
    }
    else{
        printf("d is the greatest\n");
    }
}