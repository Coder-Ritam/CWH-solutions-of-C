#include <stdio.h>
#include <stdlib.h>

// this program shows the implementation of simple linked list

struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void deleteList(struct Node *ptr)
{
    struct Node *current=ptr;
    struct Node* next_node;
    while (current != NULL)
    {
        next_node = current->next;
        free(current);
        current=next_node;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 12;
    third->next = NULL;

    traversal(head);
    deleteList(head);
    return 0;
}
