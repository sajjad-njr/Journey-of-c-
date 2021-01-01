#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *next ;

} Node;
/*
void new_data(Node** h , int n)
{
      Node *i = (Node*) malloc (sizeof(Node));
      i->data= n;
      i->next = *h ;
}
*/
int main()
{
    Node *a, *b, *c, *d , *l;

    a = (Node*) malloc (sizeof(Node));
    b = (Node*) malloc (sizeof(Node));
    c = (Node*) malloc  (sizeof(Node));
    d = (Node*) malloc  (sizeof(Node));
    l = (Node*) malloc  (sizeof(Node));


    a->data = 56;
    a->next = b ;

    b->data = 567;
    b->next = c ;

    c->data = 70;
    c->next = NULL ;


    d -> data = 9990 ;
    //l->data = 1020;



    while(c->next != NULL)
    {
         c = c ->next;
    }

    c -> next = d;
    d -> next = NULL;

    while(a != NULL)
    {
        printf(" %d ", a->data);
        a = a ->next ;
    }
    return 0;
}
