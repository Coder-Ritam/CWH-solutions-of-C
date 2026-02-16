#include <stdio.h>

/*this program converts temperature from Celsius to Fahrenheit*/

int main() {
    float celsius,fahrenheit;
    printf("enter temperature in celsius:\n");
    scanf("%f",&celsius);
    fahrenheit=((celsius*(9.0/5.0))+32.0);
    printf("temperature in fahrenheit: %f\n",fahrenheit);
    return 0;
}