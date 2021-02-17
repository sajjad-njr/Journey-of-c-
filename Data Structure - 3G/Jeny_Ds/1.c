#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

} Node;

Node *head = NULL, *tail=NULL;
//head = NULL;
//tail = NULL;
int count = 0;

Node *createNode()
{
    int n;
    printf("\n\tEnter the value (-1) for stop linked list \n");
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

int totalNode(Node *q)
{
    while( q != NULL)
    {
        count++;
        q = q->next;
    }
    return count;
}


Node *insert_position()
{
    Node *avail ;

    int i = 1, position = 1;
    printf("\n\tEnter the position where insert Node = ");
    scanf("%d",&position);

    if(position > count)
    {
        printf("\n\tInvalid Position");
    }
    else
    {
        Node *new_node = (Node*)malloc(sizeof(Node));

        avail = head ;
        while( i < position - 1)
        {
            avail = avail->next;
            i++;
        }
        printf("\n\tEnter New Node value = ");
        scanf("%d",&new_node->data);
        new_node->next =  avail->next;
        avail->next = new_node;
    }

    return head;
}

Node *delete_position()
{
    Node *avail, *next_node;
    int i = 1, position = 0;
    printf("\n\tEnter the position where node from remove = ");
    scanf("%d",&position);
    avail = head;

    if(position < 0 || position > count)
    {
        printf("\nInvalid Position\n");
    }
    else
    {
        while(i < position-1)
        {
            avail = avail->next;
            i++;
        }
        next_node = avail->next;
        avail->next = next_node->next;
        free(next_node);

    }


    return head;
}


//p = print Node
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

    totalNode(i);
    if(i == NULL)
    {
        printf("\nList is NULL\n");

    }
    else
    {
        i = insert_position();

        p(i);

        i = delete_position();
        p(i);
    }


    return 0;
}

