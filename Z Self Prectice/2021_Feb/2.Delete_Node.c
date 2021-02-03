#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} Node;
Node *head, *tail;

Node *takeInput()
{
    Node *new_node ;
    head = NULL;
    tail = NULL;

    int n ;
    scanf("%d",&n);

    while(n--)
    {
        new_node = (Node*) malloc(sizeof(Node));
        printf("\n\tEnter Node item = ");
        scanf("%d",&new_node->data);
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
    }

    return head;
}

void printttt(Node *a)
{
    while( a != NULL)
    {
        printf(" %d ",a->data);
        a = a->next;
    }
}
int main()
{
    Node *a = takeInput();
     Node *temp = a;
     while(temp != NULL)
     {
         temp = temp->next;
     }
    temp = temp->next;
    printttt(temp);
}

