#include <stdio.h>

/*to find pass or fail
conditions for pass-33% in each subject and 40% in average of all subjects (out of 100)
assumptions-3 subjects*/

int main(){
    float s1,s2,s3,avg,total;
    printf("enter marks for subject 1 \n");
    scanf("%f",&s1);
    printf("enter marks for subject 2 \n");
    scanf("%f",&s2);
    printf("enter marks for subject 3 \n");
    scanf("%f",&s3);
    if(s1>32 && s2>32 && s3>32){
        if((s1+s2+s3)>=40){
            printf("pass\n");
        }
        else{
            printf("fail");
        }
    }
    else{
        printf("fail\n");
    }
}
