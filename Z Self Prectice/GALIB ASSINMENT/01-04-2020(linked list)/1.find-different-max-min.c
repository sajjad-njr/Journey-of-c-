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

void difMaxMin()
{
    int count = 0 ;

    int max , min ;

    temp = head;


    max = head ->data ;
    min = head ->data ;

    while( temp != NULL)
    {

        if(temp->data > max)
        {
            max = temp->data;
        }

        if(temp->data < min)
        {
            min = temp->data;
        }

        temp = temp->next;

    }

    printf("\n\t Total even number in the list = %d",max);

    printf("\n\t Total even number in the list = %d",min);

    printf("\n\tThe difference between max and min in linked list  = %d",max-min);

}

int main()
{
    createNode();
    difMaxMin();

    return 0;
}


