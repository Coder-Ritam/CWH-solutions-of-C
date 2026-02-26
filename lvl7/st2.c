#include <stdio.h>

/*Create a 2d vector using structures*/

struct vector{
    int x;
    int y;
};

int main(){
    struct vector v={1,2};
    printf("the value  of vector is %dx +  %dy\n",v.x,v.y);
    return 0;
}