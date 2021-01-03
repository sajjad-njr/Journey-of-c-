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

void startAdd()
{
   // Node *head, *temp,*new_node ;
    new_node = (Node*) malloc (sizeof(Node));

    printf("\n\tEnter the node = ");
    scanf("%d",&new_node->data);

    new_node -> next = head ;
    head = new_node;
}
void addEnd()
{
    new_node = (Node*) malloc (sizeof(Node));
    printf("\n\tEnter the  End node = ");
    scanf("%d",&new_node->data);
    new_node -> next = NULL ;

    while (temp -> next != NULL)
    {
        temp = temp -> next ;
    }
     temp-> next = new_node ;


}

int main()
{
   // Node *head, *temp, *new_node;

    head = NULL;

    // create part ;
    create();

   //add at the start
    startAdd();

    //At the end ;
     addEnd();

    //print part ;

    temp = head;
    while( temp != NULL)
    {
        printf("  %d  ",temp->data);
        temp = temp ->next ;
    }
    return 0;
}
