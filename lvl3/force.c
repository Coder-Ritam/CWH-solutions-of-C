#include <stdio.h>

/*function to calculate force exerted on a mass of body m by earth*/

float force(float mass);

int main(){
    float p,n;
    printf("give me a value\n");
    scanf("%f",&n);
    p=force(n);
    printf("force of %f is exerted on the body by earth\n",p);
    return 0;
}

float force(float mass){
    float f=mass*9.81;
    return f;
}
