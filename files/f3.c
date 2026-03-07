#include <stdio.h>

/*A Simple program to store the name and salary given by the user*/

int main(){
    int n;
    char s[100];
    FILE *ptr;
    printf("enter Salary: ");

    if(scanf("%d",&n)!=1){
        printf("Invalid Integer Value:\n");
        return 1;
    }
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);

    //enter a string upto 99 letters
    printf("enter a name: ");
    fgets(s,100,stdin);


    ptr=fopen("ritam.txt","w");

    if(ptr == NULL){
        printf("file does not exist");

        return 1;
    }
    fprintf(ptr,"Name: %s ",s);
    fprintf(ptr,"Salary: %d ",n);
    
    fclose(ptr);
    return 0;
}
