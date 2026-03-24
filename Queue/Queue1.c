#include <stdio.h>
#include <stdlib.h>

// implementation of Queue using fixed size array

typedef struct
{
    int *arr;
    int size;
    int capacity;
} Queue;

Queue *createQueue(int capacity)
{
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    queue->capacity = capacity;
    queue->size = 0;
    queue->arr = (int *)malloc(capacity * sizeof(int));
    return queue;
}

void freeQueue(Queue *queue)
{
    free(queue->arr);
    free(queue);
}

// operations on queue
void enqueue(Queue *queue, int value)
{
    if (queue->size == queue->capacity)
    {
        printf("queue overflow\n");
        return;
    }
    queue->arr[queue->size] = value;
    queue->size++;
}

void dequeue(Queue *queue)
{
    if (queue->size == 0)
    {
        printf("queue underflow\n");
        return;
    }
    for(int i=0;i<queue->size;i++){
        queue->arr[i-1]=queue->arr[i];
    }
    queue->size--;
}

int getFront(Queue *queue)
{
    if (queue->size == 0)
    {
        printf("Queue is Empty\n");
        return -1;
    }
    return queue->arr[0];
}

int getRear(Queue *queue)
{
    if (queue->size == 0)
    {
        printf("Queue is Empty\n");
        return -1;
    }
    return queue->arr[queue->size];
}
void isEmpty(Queue *queue)
{
    if (queue->size == 0)
    {
        printf("Memory Empty\n");
    }
    else
    {
        printf("Memory is not empty\n");
    }
}
void isFull(Queue *queue)
{
    if (queue->size == queue->capacity)
    {
        printf("Memory Full\n");
    }
    else
    {
        printf("Memory is not full\n");
    }
}

int main()
{
    Queue *queue = createQueue(4);
    enqueue(queue, 4);
    enqueue(queue, 16);
    enqueue(queue, 40);
    enqueue(queue, 400);

    isFull(queue);
    printf("Front element of queue before dequeue: %d\n", getFront(queue));
    dequeue(queue);
    printf("Front element of queue after dequeue: %d\n", getFront(queue));

    printf("Rear:%d\n", getRear(queue));

    isEmpty(queue);
    isFull(queue);

    return 0;
}