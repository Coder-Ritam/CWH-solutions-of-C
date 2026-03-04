#include <stdio.h>

/*A simple program to save essay typed by the user*/

int main(){
    FILE *ptr;
    ptr=fopen("essay.txt","w");
    fprintf(ptr,"Geez stuffu");
    fclose(ptr);
    ptr=fopen("essay.txt","r");
    char st[100];
    while(fgets(st,100,ptr)) printf("%s\n",st);
    fclose(ptr);
    return 0;
}
