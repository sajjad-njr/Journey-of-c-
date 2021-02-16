#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

}Node;

Node *createNode()
{
    int n;
    printf("Enter the value for stop -1 = ");
    scanf("%d",&n);
    Node *head , *tail;

    head = NULL;
    tail = NULL;

    while(n != -1)
    {
        Node *new_node = (Node*) malloc(sizeof(Node));
       // printf("\n\tEnter the value = ");
       // scanf("%d",&new_node->data);
       new_node->data = n;
        new_node->next = NULL;

        if(head == NULL)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            tail->next = new_node;
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
