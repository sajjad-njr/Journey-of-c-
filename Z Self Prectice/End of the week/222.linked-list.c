#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *next;
} Node;


int main()
{
    Node *h1,*h2,*h3;

    h1 = (Node*) malloc (sizeof(Node));
    h2 = (Node*) malloc (sizeof(Node));
    h3 = (Node*) malloc (sizeof(Node));

    h1->data = 1;
    h1->next = h2;

    h2->data = 100;
    h2->next = h3;

    h2->data = 19700;
    h2->next = NULL;

    printf()
}
