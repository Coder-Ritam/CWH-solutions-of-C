#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
    int *arr;
    int size;
    int capacity;
    int front; // tracks the reader
    int rear;  // tracks the writer
} Queue;

Queue *createQueue(int capacity)
{
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    queue->capacity = capacity;
    queue->size = 0;
    queue->arr = (int *)malloc(capacity * sizeof(int));
    queue->front = 0;
    queue->rear = capacity - 1; // we start rear at capacity-1 so that when we add the very first item the modulo math perfectly to index 0
    return queue;
}

void freeStack(Queue *queue){
    free(queue);
    free(queue->arr);
}

bool isFull(Queue *queue){
    return queue->size==queue->capacity;
}

bool isEmpty(Queue *queue){
    return queue->size==0;
}

void enqueue(Queue *queue,int value){
    if(queue->size==queue->capacity){
        printf("Queue Overflow\n");
        return;
    }
    queue->rear=(queue->rear+1) % queue->capacity;
    queue->arr[queue->rear]=value;
    queue->size++;
}

void dequeue(Queue *queue){
    if(queue->size==0){
        printf("Queue Underflow\n");
        return ;
    }
    //Moves the front forward,wrap around if needed
    queue->front=(queue->front+1) % queue->capacity;
    queue->size--;
}

int getFront(Queue *queue){
    if(queue->size==0){
        printf("Queue is empty\n");
        return -1;
    }
    return queue->arr[queue->front];
}

int getRear(Queue *queue){
    if(queue->size==0){
        printf("Queue is empty\n");
        return -1;
    }
    return queue->arr[queue->rear];
}

int main(){
    Queue *q=createQueue(4);
    enqueue(q,40);
    enqueue(q,240);
    enqueue(q,420);
    enqueue(q,30);

    printf("Front: %d\n",getFront(q));

    dequeue(q);

    printf("Front: %d\n",getFront(q));

    enqueue(q,1);

    printf("Rear: %d\n",getRear(q));

    printf("Memory Status: %s\n",isFull(q) ? "Full" : "Not Full" );

    printf("Memory Status: %s\n",isEmpty(q) ? "Empty" : "Not Empty");

    return 0;
}