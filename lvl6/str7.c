#include <stdio.h>

/*program to find whether a given character is present in a word or not*/

void search(char find,char str[])
{
    int k=0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==find){
            k=1;
            break;
        }
        i++;
    }
    if(k==1){
    printf("The word is present\n");
    }
    else{
        printf("not present\n");
    }
}

int main(){
    char str[]="reetame";
    char find;
    printf("enter the character you want to find\n");
    scanf("%c",&find);
    search(find,str);
    return 0;
}
