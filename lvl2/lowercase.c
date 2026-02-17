#include <stdio.h>

/*program to calculate whether the character entered by a user is lowercase or not*/

int main(){
    char c;
    int a;
    printf("enter a character\n");
    scanf("%c",&c);
    a=(int)c;
    if(a>96 && a<123){
        printf("it is lowercase character\n");
    }
    else{
        printf("not\n");
    }
    return 0;
}