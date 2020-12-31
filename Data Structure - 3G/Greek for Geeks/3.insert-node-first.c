#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node * next ;

} Node;

void pus(Node** head_ref, int new_data)
{
    Node *new_node = (Node*) malloc(sizeof(Node));
    //Node *p = (Node*) malloc(sizeof(Node));

    new_node->data = new_data ;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;

    //p = head_ref;

}

int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *p = NULL;
    int m = 10 ;
    int r ;
    r = 90;

    head = (Node*) malloc(sizeof(Node));
    second = (Node*) malloc(sizeof(Node));
    //p = (Node*) malloc(sizeof(Node));

    head->data = 456;
    head ->next = second ;

    second -> data = 111;
    second -> next = NULL;

    pus(&head,100);

     pus(&head,r);
    p = head;

    while ( p != NULL)
    {
        printf(" %d ",p->data);
        p = p->next;
    }
    return 0;

}
