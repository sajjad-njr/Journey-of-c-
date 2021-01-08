#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
   int data ;
   struct node *next;

}Node;
//create linked list ;

void createNode()
{
    Node *head , *new_node;
    head = NULL ;

    int no ;
    printf("\n\tEnter the number of nodes = ");
    scanf("%d",&no);

    for(int i = 0 ; i < no ; i++)
    {
        new_node = (Node*)malloc(sizeof(Node));
        printf("\n\tEnter the %d Node element = ",i+1);
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

void pritNodeList()
{
    Node *ptr;
    ptr = &head ;

    while(ptr != NULL)
    {
        printf(" %d ",ptr->data);
        ptr = ptr->next;
    }

}
int main()
{

}
