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
        printf("\n\tEnter the %d Node element = ",i+1);
        scanf("%d",&new_node->data);
    }

}
int main()
{

}
