#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data ;
    struct node *next ;
} Node;

void main()
{
    Node *h , *m;

    h = (Node*) malloc(sizeof(Node));
    m = (Node*) malloc(sizeof(Node));

    h->data = 890;
    h->next = NULL ;

     m->data = 1890;
    m->next = NULL ;

    printf("\n\tH node = %d \t Node address = %u",h->data,h->next);

}
