#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *next ;
}Node;


int main()
{
    Node *head , *temp, *new_node;

    head = NULL;

    int n = 5 ;

    while (n--)
    {
        new_node = (Node*)malloc(sizeof(Node));
        printf("\n\tEnter a Node = ");
        scanf("%d",&new_node->data);
        new_node->next = NULL;

        if(head == NULL)
        {
            head = temp = new_node ;
        }
        else
        {
            temp->next = new_node ;
            temp = new_node;
        }
    }
    temp = head;

    while( temp != NULL)
    {
        printf("  %d  ",temp->data);
        temp = temp ->next ;
    }
    return 0;
}
