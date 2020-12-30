#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next ;
}
Node;

void printList(Node* n)
{
    while(n != NULL)
    {
        //if(n->data == 456)
        //if(n->next == NULL)
        printf(" %d ",n->data);

        n = n -> next ;
    }
}

int main()
{
    Node *head = NULL;
    Node *second = NULL;

    head = (Node*) malloc(sizeof(Node));
    second = (Node*) malloc(sizeof(Node));

    head->data = 456;
    head ->next = second ;

    second -> data = 111;
    second -> next = NULL;

    printList(head);
    return 0;

}
