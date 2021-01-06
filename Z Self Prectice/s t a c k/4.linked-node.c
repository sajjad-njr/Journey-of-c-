#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next ;
}Node;


 Node *newNode , *head , *temp;

void create()
{
    head = NULL;
    int ch = 1 ;

    while(ch)
    {

        newNode = (Node*)malloc(sizeof(Node));
        printf("\n\tEnter node element = ");
        scanf("%d",&newNode->data);
        newNode->next = NULL;

        if(head == NULL)
        {
            head = temp = newNode ;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }

        printf("\n\tenter node element for : 1 or 0 = ");
        scanf("%d",&ch);

    }
}

void display()
{
   temp = head;
   // Node *p;
   // newNode = (Node*)malloc(sizeof(Node));
   // p = head;
    while(temp != NULL)
    {
        printf(" %d ",temp->data);
        temp = temp ->next ;
    }
}

int main()
{
    create();
    display();
}
