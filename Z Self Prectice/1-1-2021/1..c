#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *next ;

} Node;

//void new_data();

int main()
{
    Node *a, *b, *c, *d;

    a = (Node*) malloc (sizeof(Node));
    b = (Node*) malloc (sizeof(Node));
    c = (Node*) malloc  (sizeof(Node));

    a->data = 56;
    a->next = b ;

    b->data = 567;
    b->next = c ;

    c->data = 70;
    c->next = NULL ;

    while(a != NULL)
    {
        printf(" %d ", a->data);
        a = a ->next ;
    }

    return 0;
}
