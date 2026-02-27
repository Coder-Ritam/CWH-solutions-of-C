#include <stdio.h>

/*A program to create a function to concatenate to strings*/

void cat(char s1[],char s2[]){
    int i,j;
    for(i=0;s1[i]!='\0';++i){
        ;
    }
    for(j=0;s2[j]!='\0';++j,++i){
        s1[i]=s2[j];
    }
    s1[i]='\0';
    printf("concatenated string is %s \n",s1);
}

int main(){
    char str[]="Ritam";
    char str2[]="Acharjee";
    cat(str,str2);
    return 0;
}
