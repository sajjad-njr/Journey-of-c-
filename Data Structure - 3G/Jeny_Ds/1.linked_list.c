#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

Node *head, *tail;

Node *creteNode()
{
    head = NULL;
    tail = NULL;

    int n;
    scanf("%d",&n);
    while(n--)
    {
        Node *new_node =(Node*)malloc(sizeof(Node));
        printf("\n\tEnter The value of Node = ");
        scanf("%d",&new_node->data);
        new_node->next = NULL;

        if(head == NULL)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            tail->next = new_node ;
            tail =  new_node;

        }
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
    Node *i = creteNode();
    p(i);
    return 0;
}
