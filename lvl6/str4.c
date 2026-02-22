#include <stdio.h>
//created a custom slice function to cut the string
char* slice(char str[],int m,int n){
    int i=0,count;
    char *ptr=&str[m];
    char *ptr2=&str[n];
    str=ptr;
    str[n]='\0';
    return str;
}

int main(){
    char str[]="Ritam Don";
    printf("%s", slice(str,1,5));
    return 0;
}
