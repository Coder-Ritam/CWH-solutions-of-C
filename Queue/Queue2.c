#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//implementation of Queue using dynamic array

typedef struct{
    int *arr;
    int size;
    int capacity;
}Queue;

Queue *createQueue(int capacity){
    Queue  *queue=(Queue*)malloc(sizeof(Queue));
    queue->capacity=capacity;
    queue->size=0;
    queue->arr=(int*)malloc(capacity *sizeof(int));

    return queue;
}

void freeQueue(Queue *queue){
    free(queue->arr);
    free(queue);
}

void enqueue(Queue *queue,int value){
    if(queue->size==queue->capacity){
        printf("memory full,memory reallocation started\n");
        queue->capacity*=2;
        queue->arr=(int*)realloc(queue->arr,queue->capacity*sizeof(int));
    }
    queue->arr[queue->size]=value;
    queue->size++;
}

void  dequeue(Queue *queue){
    if(queue->size==0){
        printf("Queue Underflow\n");
        return ;
    }
    for(int i=1;i<queue->size;i++){
        queue->arr[i-1]=queue->arr[i];
    }
    queue->size--;
}

int getFront(Queue *queue){
    if(queue->size==0){
        printf("Queue is Empty\n");
        return -1;
    }
    return queue->arr[0];
}

int getRear(Queue *queue){
    if(queue->size==0){
        printf("Queue is empty\n");
        return -1;
    }
    return queue->arr[queue->size];
}

bool isEmpty(Queue *queue){
    return queue->size==0;
}

bool isFull(Queue *queue){
    return queue->capacity==queue->size;
}

int main(){
    Queue *q=createQueue(3);
    enqueue(q,45);
    enqueue(q,420);
    enqueue(q,240);

    printf("The Memory Status is : %s\n",isFull(q) ? "Full" : "Not Full");

    //As we know we can expand it so lets try it
    enqueue(q,23);
    enqueue(q,26);
    enqueue(q,28);
     //here we reallocated the size using realloc()
    //lets verify if now the queue is full or not
    printf("The Memory Status is : %s\n",isFull(q) ? "Full" : "Not Full");

    printf("Front element of queue before dequeue: %d\n", getFront(q));
    dequeue(q);
    printf("Front element of queue after dequeue: %d\n", getFront(q));

    printf("The Memory Status is : %s\n",isEmpty(q) ? "Empty" : "Not Empty");

    printf("The front element is:%d\n",getRear(q));
    return 0;
}