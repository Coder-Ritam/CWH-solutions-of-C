#include <stdio.h>

/*Program to create my own strcpy from <string.h>*/

char* my_copy(char* copied,const char* original);

int main(){
    char source[]="hello, Ritam";
    char destination[20];
    my_copy(destination,source);
    printf("the original string is: %s \n",source);
    printf("the copied string is: %s \n",destination);
    return 0;
}

char* my_copy(char* copied,const char* original){
    char* copied2=copied;

    //looping through each character
    while(*original!='\0'){
        *copied=*original;
        original++;
        copied++;
    }
    *copied='\0';
    return copied2;
}
