#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

/*A program to demonstrate how to implement a Stack*/

//defining a structure for the stack
typedef struct{
    int arr[MAX_SIZE];
    int top;
}Stack;

//Function to initialize the stack
void initialize(Stack *stack){
    stack->top=-1;
}
//Fucntion to check if the stack is empty
bool isEmpty(Stack *stack){
    return stack->top==-1;
}

//function to check if the stack is full
bool isFull(Stack *stack){
    return stack->top >=MAX_SIZE-1;
}
//function to push an element into the stack
void push(Stack *stack,int value){
    if(isFull(stack)){
        printf("Stack Overflow");
        return;
    }
    stack->arr[++stack->top]=value;
    printf("Pushed %d onto the stack\n",value);
}
//function to pop an element from the stack
int pop(Stack *stack){
    if(isEmpty(stack)){
        printf("Stack Overflow\n");
        return -1;
    }
    int popped=stack->arr[stack->top];
    stack->top--;
    printf("popped %d from the stack\n",popped);
    return popped;
}
//function to peek the top element of the stack
int peek(Stack *stack){
    if(isEmpty(stack)){
        printf("stack is empty\n");
        return -1;
    }
    return stack->arr[stack->top];
}
int main(){
    Stack stack;
    initialize(&stack);
    push(&stack,4);
    printf("top element:%d\n",peek(&stack));
    push(&stack,5);
    printf("top element:%d\n",peek(&stack));
    while (!isEmpty(&stack))
    {
        printf("top element:%d\n",peek(&stack));
        printf("Popped element:%d\n",pop(&stack));
    }
    
    return 0;
}
