#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}Node;

Node *head = NULL , *tail = NULL;

Node *createList()
{
    printf("\n\tEnter (-1) for to the stop add node in LINKED LIST\n");
    int n;
    scanf("%d",&n);

    while(n != -1)
    {
        Node *new_node = (Node*)malloc(sizeof(Node));
        new_node->data = n;
        new_node->prev = NULL;
        new_node->next = NULL;

        if(head == NULL)
        {
            head = new_node;
            tail = new_node ;

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
void pi(Node *a)
{
    a = head;
    while( a != NULL)
    {
        printf(" %d ",a->data);
        a = a->next;
    }
}
int main()
{
    Node *c = createList();
    pi(c);

    return 0;
}
