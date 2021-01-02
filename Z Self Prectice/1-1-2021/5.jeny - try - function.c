#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node * next ;

} Node;

void insert()
{
    Node *head, *newNode, *temp;
    head = NULL;
    int a ;

    printf("\n\tHow many node want to : " );
    scanf("%d",&a);

    while(a--)
    {
        newNode = (Node*)
                  malloc(sizeof(Node));
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
    }

    temp = head;

    while (temp != NULL)
    {
        printf(" %d ",temp->data);

        temp = temp->next ;
    }

}

void main()
{
    //Node *head, *newNode, *temp;
    //head = NULL;

    insert();
}
