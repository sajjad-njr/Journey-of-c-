#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}Node;
Node *head, *temp , *new_node;

void create()
{
    int n = 4;
    head = NULL;
    while(n--)
    {
        new_node = (Node*)malloc(sizeof(Node));
        printf("\n\tenter node = ");
        scanf("%d",&new_node->data);
        new_node->next = NULL;

        if(head == NULL)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }

    }
}
int main()
{
    //Node *head, *temp;
    temp = head;

    create();

    while(temp != NULL)
    {
        printf(" %d ",temp->data);
        temp = temp ->next;
    }
}