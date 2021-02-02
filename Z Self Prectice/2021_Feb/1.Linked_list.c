#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}Node;
Node *head , *tail;

Node *takeInput()
{
    Node *new_node ;
    head = null;
    tail = null;

    int n ;
    scanf("%d",&n);

    while(n--)
    {
        new_node = (Node*) malloc(sizeof(Node));
        printf("\n\tEnter Node item = ");
        scanf("%d",&new_node->data);
        new_node->next = null;

    }
    if(head == null)
}

int main()
{

}
