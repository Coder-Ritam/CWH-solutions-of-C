#include <stdio.h>

/*program to print the following pattern
  *
  ***
  ***** 
to n
*/
int pattern1(int);
int main(){
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    pattern1(n);
    return 0;
}

int pattern1(int n){
    int i,j;
    for(i=1;i<=n;i+=2){
        printf("\n");
        for(j=1;j<=i;j++){
            printf("*");
        }
    }
    return 1;
}