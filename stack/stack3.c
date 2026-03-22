#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//Stack implementation using dynamic arrays

typedef struct{
    int *arr;
    int capacity;
    int top;
}Stack;

Stack *createStack(int initialCap)//initial capacity
{
    Stack *stack=(Stack *)malloc(sizeof(Stack));
    stack->capacity=initialCap;
    stack->top=-1;
    stack->arr=(int *)malloc(initialCap *sizeof(int));
    return stack;
}

void push(Stack *stack,int value){
    if(stack->top>=stack->capacity-1){
        printf("Stack Overflow,Memory Reallocation started\n");
        
        stack->capacity*=2;
        stack->arr=(int *)realloc(stack->arr,stack->capacity*sizeof(int));
    }
    stack->arr[++stack->top]=value;
}

int pop(Stack *stack){
    if(stack->top==-1){
        printf("Stack Underflow\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

int peek(Stack *stack){
    if(stack->top==-1){
        printf("stack undeflow\n");
        return -1;
    }
    return stack->arr[stack->top];
}

bool isEmpty(Stack *stack){
    return stack->top==-1;
}

bool isFull(Stack *stack){
    return stack->top>=stack->capacity-1;
}
void freeStack(Stack *stack){
    free(stack->arr);
    free(stack);
}

int main(){
    Stack *s=createStack(4);
    push(s,3);
    push(s,12);
    push(s,1);
    push(s,90);
    push(s,190);

   // printf("popped %d\n",pop(s));
    
    printf("peeked %d\n",peek(s));

    printf("Is stack empty: %s\n",isEmpty(s) ? "Yes" : "No");

    printf("Is stack full: %s\n",isFull(s) ? "Yes" : "No");

    freeStack(s);
    return 0;
}
