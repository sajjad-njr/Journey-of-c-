#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data ;
    struct node *next ;
} Node;

void main()
{
    Node *h, *m;

    h = (Node*) malloc(sizeof(Node));
    m = (Node*) malloc(sizeof(Node));

    h->data = 890;
    h->next = NULL ;

    printf("\n\t%u H node = %d \t Node address = %u",h,h->data,h->next);

    m->data = 1890;
    m->next = NULL ;

    h->next = m ;

    printf("\n\t%u H node = %d \t Node address = %u",h,h->data,h->next);
    printf("\n\t%u M node = %d \t Node address = %u",m,h->next->data,h->next->next);
}
