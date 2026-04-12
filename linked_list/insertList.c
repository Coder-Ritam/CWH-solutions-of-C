#include <stdio.h>
#include <stdlib.h>

// program for insertion in a linked list
//it has fourcases

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

struct Node* InsertAtFirst(struct Node* head,int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}

struct Node* InsertAtIndex(struct Node* head,int data,int index){
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node* p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

struct Node* InserAtEnd(struct Node* head,int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node* p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

struct Node* InserAfterNode(struct Node* head,struct Node* previous_node,int data){
    struct Node* ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;

    ptr->next=previous_node->next;
    previous_node->next=ptr;

    return head;
}

void deleteList(struct Node *ptr)
{
    struct Node *temp=ptr;
    struct Node* next_node;
    while (temp != NULL)
    {
        next_node = temp->next;
        free(temp);
        temp = next_node;
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

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    traversal(head); //before  adding any element

    //case 1: Inserting element at first

    // head=InsertAtFirst(head,56);
    // traversal(head); //after adding elemt at first

    //case 2: insert at index
    //head=InsertAtIndex(head,86,1);
    //traversal(head);

    //case 3: insert at end
    /*head=InserAtEnd(head,40);
    traversal(head);*/

    //case 4: insertion after a node
    head=InserAfterNode(head,second,5);
    traversal(head);


    deleteList(head);
    return 0;
}
