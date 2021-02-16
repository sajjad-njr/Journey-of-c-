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
    printf("Enter the value for stop -1 = ");
    scanf("%d",&n);
    //Node *head, *tail;

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

Node *insertFirst( )
{
    Node *avail ;

    avail = (Node*)malloc(sizeof(Node));
    //avail= head;

    printf("\n\tEnter  First Position Node  the value = ");
    scanf("%d",&avail->data);
    //new_node->data = n;
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

    return 0;
}
