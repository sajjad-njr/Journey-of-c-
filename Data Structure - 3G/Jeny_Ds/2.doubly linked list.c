#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} Node;

Node *head, *tail;

Node *createNode()
{
    head = NULL;
    tail = NULL;

    int n;
    printf("\n\tEnter the value (-1) for stop linked list \n");
    scanf("%d",&n);

    //head = NULL;
    // tail = NULL;

    while(n != -1)
    {
        Node *new_node = (Node*)malloc(sizeof(Node));

        new_node->data = n;
        new_node->prev = NULL;
        new_node->next = NULL;

        if(head == NULL)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
        scanf("%d",&n);
    }

    return head;

}

void p(Node *q)
{
    while( q != NULL)
    {
        printf(" %d ",q->data);
        q = q->next;
    }
}

int main()
{
    Node *i = createNode();

    p(i);

    return 0;
}

