#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *next ;
}Node;

int main()
{
    Node *head , *new_node , *temp ;
    Node *n1,*n2;

    head =   (Node*)malloc(sizeof(Node));
    n1 = (Node*)malloc(sizeof(Node));
    n2 = (Node*)malloc(sizeof(Node));
    new_node = (Node*)malloc(sizeof(Node));

    printf("\n\tNew data ");
    scanf("%d",&new_node->data);
    new_node->next = head;
    head = new_node;

    head = n1;
    n1->data = 2 ;
    n1->next = n2;

    n2->data = 3;
    n2->next = NULL;

    temp = head ;


    while( temp != NULL)
    {
        printf(" %d ",temp->data);
        temp = temp->next;
    }

}
