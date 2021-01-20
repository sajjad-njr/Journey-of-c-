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
    head = NULL;

   int n;
   printf("\n\tEnter the number how many NODE create = ");
   scanf("%d",&n);

     printf("\n\tEnter a Node data = ");
    while (n--)
    {
        new_node = (Node*)malloc(sizeof(Node));

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

void startFirst()
{

    new_node = (Node*) malloc (sizeof(Node));

    printf("\n\tEnter the 1st node = ");
    scanf("%d",&new_node->data);

    new_node -> next = head ;
    head = new_node;
}

void print(Node *head)
{
     Node *temp = head ;
     while( temp != NULL)
    {
        printf("  %d  ",temp->data);
        temp = temp ->next ;
    }
    //return head ;
}

int main()
{

     create();

     startFirst();

     print(head);

    return 0;
}

