#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}Node;

Node *createNode()
{
    Node *head = NULL;
    Node *tail =  NULL;
    printf("\n\tEnter Node number = ");
    int i;
    scanf("%d",&i);

    while(i--)
    {
        Node *new_node = (Node*) malloc(sizeof(Node));
        printf("\n\tEnter node value = ");
        scanf("%d",&new_node->data);
        new_node->next =  NULL;

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

int main()
{

}
