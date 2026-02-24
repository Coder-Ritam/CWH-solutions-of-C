#include <stdio.h>

/*Program to find occurences of a given character in a word*/

int count(char find,char str[]);

int main(){
    char str[]="reetame";
    char find='e';
    /*int count=0;
    int i=0;
    while(str[i]!='\0'){
        i++;
        if(str[i]==find){
            count++;
        }
    }*/
    //printf("the number of occurences: %d\n",count);
    int c=count(find,str);
    printf("%d\n",c);
    return 0;
}

int count(char find,char str[])
{
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==find){
            count++;
        }
        i++;
}
return count;
}