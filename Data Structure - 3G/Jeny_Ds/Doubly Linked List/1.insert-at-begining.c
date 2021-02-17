#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;

    struct node *prev;
     struct node *next;
}Node;

Node *head = NULL, *tail = NULL;

Node *createList()
{
    int n ;
    printf("\n\tEnter -1 for stop the loop = ");
    scanf("%d",&n);

    while(n != -1)
    {
        Node *new_node = (Node*)malloc(sizeof(Node));
        new_node->data = n;
        new_node->prev = NULL;
        new_node->next = NULL;

        if(head == NULL)
        {
            head = tail = new_node;
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

Node *insertFirst()
{
    Node *new_node = (Node*)malloc(sizeof(Node));
    printf(" \n\tEnter new node value = ");
    scanf("%d",&new_node->data);
    new_node->prev = NULL;
    new_node->next = NULL;

    if(head == NULL)
    {
        head = tail = new_node;
    }
    else
    {
        head->prev = new_node;
        new_node->next = head;
        head = new_node;
    }
    return head;
}


void a(Node *i)
{
    i = head;\
    while(i != NULL)
    {
        printf(" %d ",i->data);
        i = i->next;
    }
}
int main()
{
    Node *aa = createList();
    //aa = insertFirst();
    insertFirst();
    a(aa);

    return 0;
}
