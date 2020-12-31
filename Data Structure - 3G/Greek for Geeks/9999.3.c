#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *next;
} Node;

void push(Node** head_add, int n )
{
    Node *new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = n ;
    new_node -> next = (*head_add);
    (*head_add ) = new_node;
}

int main()
{
    Node *head, *first,  *second, *third ;
    head = (Node*) malloc(sizeof(Node));
    first = (Node*) malloc(sizeof(Node));
    second  = (Node*) malloc(sizeof(Node));

    head ->data = 374;
    head ->next =  first;

    first ->data = 89;
    first ->next =  second ;

    second -> data = 46;
    second ->next = NULL;
    int r = 909090;

    //insert data for 1st position ;
    push(&head,r);
    push(&head,3030);

    while(head != NULL)
    {
        printf(" %d  ",head->data);
        head = head ->next;
    }
    return 0;
}
