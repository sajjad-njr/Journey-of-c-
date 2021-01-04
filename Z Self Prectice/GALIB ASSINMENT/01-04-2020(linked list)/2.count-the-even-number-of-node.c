#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *next ;
} Node;

Node *head, *temp,*new_node ;

void createNode()
{

    Node *total;
    int count = 0 ;
    head = NULL;

    int num;
    printf("\n\tEnter the number how many node want to create =  ");
    scanf("%d",&num);

    while (num--)
    {
        new_node = (Node*)malloc(sizeof(Node));
        printf("\n\tEnter  the value of node = ");
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

int main()
{
    int count = 0 ;
    head = NULL;

    createNode();

    temp = head;
    printf("\n\tEven number = ");

    while( temp != NULL)
    {
        if(temp->data%2==0)
        {
            printf("  %d  ",temp->data);
            count++;
        }
        temp = temp ->next ;
    }
    printf("\n\t Total even number in the list = %d",count);

    return 0;
}


