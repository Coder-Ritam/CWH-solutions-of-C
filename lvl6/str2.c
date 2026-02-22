#include <stdio.h>
#include <string.h>


/**/

int main(){
    int n;
    printf("enter the size of string you want to create: \n");
    scanf("%d",&n);
    char str1[n+1];
    char str2[n+1];
    printf("enter the 1st string: \n");
    scanf("%s",str1);
    int i=0;
    int ch;
    getchar();
    printf("Enter your 2nd number: \n");
    while((ch=getchar())!= '\n'){
        str2[i++]=ch;
    }
    str2[i] = '\0';

    // Comparison
    if (strcmp(str1, str2) == 0)
        printf("Equal\n");
    else
        printf("Not Equal\n");
    return 0;
}
