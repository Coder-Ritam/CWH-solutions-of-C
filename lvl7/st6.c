#include <stdio.h>

/*Program to accept 5 complex numbers from the user and display them using a display function*/
typedef struct complex{
    float Re;
    float Im;
}num;

void display(num n,int numLabel){
    if(n.Im>=0){
    printf("the complex %dth number is z=%.2f+%.2fi\n",numLabel,n.Re,n.Im);
    }
    else{
        printf("the complex %dth number is z=%.2f%.2fi\n",numLabel,n.Re,n.Im);
    }
}

int main(){
    int i=0;
    num n[5];
    printf("enter the required complex numbers\n");
    for(i=0;i<5;i++){
        printf("real part \n");
        scanf("%f\n",&n[i].Re);
        printf("Enter the imaginary part \n");
        scanf("%f",&n[i].Im);
    }
    printf("the result is: \n");
    for(i=0;i<5;i++){
        display(n[i],i+1);
    }
    return 0;
}