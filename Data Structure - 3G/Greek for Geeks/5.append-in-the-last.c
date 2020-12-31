#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *next ;

} Node;

void appendLast(Node** head_ref, int new_data)
{
    Node *new_node = (Node*) malloc(sizeof(Node));

    Node *last = *head_ref;
    new_node ->data = new_data;
    new_node ->next =NULL;

    if(*head_ref == NULL)
    {
        *head_ref = new_node;
    }
    while(last ->next != NULL)
        last = last->next;

    last->next = new_node;
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

    appendLast(&head,100);

    appendLast(&head,r);

    appendLast(&head,890);


    p = head;

    while ( p != NULL)
    {
        printf(" %d ",p->data);
        p = p->next;
    }
    return 0;

}
