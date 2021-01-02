#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *next;
} Node;

int main()
{
    Node *head, *a, *new_node, *temp;
    int t ;
    head =(Node *) malloc (sizeof(Node));
    a =(Node *) malloc (sizeof(Node));
    //new_node =(Node *) malloc (sizeof(Node));

    head -> data = 34;
    head -> next = a;

    a->data = 89;
    a ->next = NULL;

    printf("\n\tHow many node add in the starting = ");
    scanf("%d",&t);
    while(t--)
    {
        new_node =(Node *) malloc (sizeof(Node));
        printf("\n\tEnter node element that you want to insert = ");
        scanf("%d",&new_node->data);
        new_node -> next = head;
        head = new_node;
    }



    temp = head ;

    while (temp != NULL)
    {
        printf(" %d ",temp->data);
        temp = temp -> next ;
    }

}
