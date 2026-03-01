#include <stdio.h>

/*program to print numbers from 1 to n*/

void m(int , int);

int main(){
    int a;
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    a=1;
    m(a,n);
    return 0;
}

void m(int a,int n){
    int k=n;
    if(a==n){
        printf("%d\n",a);
        return;
    }
     printf("%d\n",a);
    m(a+1,k);
}
