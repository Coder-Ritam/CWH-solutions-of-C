#include <stdio.h>
//created a custom slice function to cut the string
char* slice(char str[],int m,int n){
    char *ptr=&str[m];
    char *ptr2=&str[n];
    str=ptr;
    str[n]='\0';
    return str;
}

int main(){
    char str[]="Ritam Don";
    printf("%s\n", slice(str,1,5));
    return 0;
}