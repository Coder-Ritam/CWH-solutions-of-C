#include <stdio.h>
#include <string.h>

/*Program to encrypt a string by adding 1 to its ASCII value of its characters*/

void encrypt(char str[]){
    for(int i=0;i<strlen(str);i++){
        str[i]=str[i]+1;
    }
    printf("%s\n",str);
}

int main(){
    char str[]="Ritam";
    /*for(int i=0;i<strlen(str);i++){
        str[i]=str[i]+1;
    }
    printf("%s\n",str);*/
    encrypt(str);
    return 0;
}
