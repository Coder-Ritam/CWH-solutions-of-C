#include <stdio.h>

/*Write a program to check whether a file exits or not before opening it*/

//void check(){
//    if()
//}

int main(){
    FILE *ptr;
    ptr=fopen("ritam.txt","w");
    fprintf(ptr,"Some text");
    fclose(ptr);
    ptr=fopen("ritam.txt","a");
    fprintf(ptr,"\nHello\n");
    fclose(ptr);
    ptr=fopen("ritam.txt","r");
    char St[100];
    while(fgets(St,100,ptr)) printf("%s",St);
    return 0;
}