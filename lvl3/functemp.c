#include <stdio.h>

/* Function to calculate celsius to fahrenheit*/

float temp(float c);
int main(){
    float modi;
    float n;
    printf("Gabbar temperature dede\n");
    scanf("%f",&n);
    modi=temp(n);
    printf("temperature is %f\n",modi);
    return 0;
}

float temp(float c){
    float f;
    f=(c*(9.0/5.0))+32.0;
    return f;
}
