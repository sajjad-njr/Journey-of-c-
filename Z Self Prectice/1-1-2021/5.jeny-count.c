#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node * next ;

} Node;

void main()
{
    Node *head , *newNode , *temp;
    head = NULL;
    int choice = 1  , count = 0;

    while(choice)
    {
        newNode = (Node*) malloc(sizeof(Node));
        printf("\n\tEnter a Node = ");
        scanf("%d",&newNode->data);
        newNode->next = NULL;

        if(head == NULL)
        {
            head = temp = newNode;
        }

        else
        {
            temp -> next = newNode;
            temp = newNode;
        }

        printf("\nDo wanna add more node : 1 or not 0 = ");
        scanf("%d",&choice);
    }
    temp = head;
    while (temp != NULL)
    {
        printf(" %d ",temp->data);

        temp = temp->next ;
        count++;
    }

    printf("\nTotal element of Node = %d",count);
}

