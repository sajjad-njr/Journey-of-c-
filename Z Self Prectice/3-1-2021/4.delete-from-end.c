#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *next ;
} Node;

Node *head, *temp,*new_node ;

void create()
{
    //Node *head, *temp, *new_node;
    Node *total;
    int count = 0 ;
    head = NULL;

    int n = 5 ;
    // create part ;
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
}
void deleteEnd()
{
    Node *previous ;

    if(head == NULL)
    {
        printf("\nNode is empty ");
        free(temp);
    }
    else
    {


        temp = head;
        while(temp->next != NULL)
        {
            previous = temp ;
            temp = temp->next;
        }
        previous->next = NULL;

        free(temp);
    }
}

int main()
{
    // Node *head, *temp, *new_node;

    int count = 0 ;

    head = NULL;

    create();

    deleteEnd();



    temp = head;
    while( temp != NULL)
    {
        printf("  %d  ",temp->data);
        temp = temp ->next ;
    }
    return 0;
}

