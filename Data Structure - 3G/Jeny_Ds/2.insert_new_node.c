#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

} Node;
Node *head, *tail;

Node *createNode()
{
    int n;
    printf("\n\tEnter the value for stop (-1)\n");
    scanf("%d",&n);

    head = NULL;
    tail = NULL;

    while(n != -1)
    {
        Node *new_node = (Node*) malloc(sizeof(Node));

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

Node *insertFirst( )
{
    Node *avail ;

    avail = (Node*)malloc(sizeof(Node));

    printf("\n\tEnter  First Position Node  the value = ");
    scanf("%d",&avail->data);
    avail->next = NULL;

    if( head == NULL)
    {
        printf("\nOverflow\n");
    }
    else
    {
        avail->next = head;
        head = avail;
    }
    return head;
}

Node *insertLast()
{
    Node *avail ;
    Node *new_node = (Node*)malloc(sizeof(Node));

    printf("\n\tEnter Last Position Node  the value = ");
    scanf("%d",&new_node->data);
    new_node->next = NULL;

    avail = head ;

    while(avail->next != NULL)
    {
        avail = avail->next;
    }
    avail->next = new_node;


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

    i = insertFirst();
    p(i);

    i = insertLast();

    p(i);

    return 0;
}
