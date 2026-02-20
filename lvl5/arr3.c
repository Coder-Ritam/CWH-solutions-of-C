#include <stdio.h>

/*Using pointers to print array integers*/

int main(){
    int i;
    int myNum[5]={10,20,30,40,50};
    int* ptr=myNum;
    *(myNum+1)=11;
    printf("value of the array myNum are\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",*(ptr+i));
    }
    
    return 0;
}
