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

    h3->data = 19700;
    h3->next = NULL;

    printf("\n%u H1 Node value is = %d \tNode Address = %u",h1,h1->data,h1->next);

    printf("\n%u H2 Node value is = %d \tNode Address = %u",h2,h2->data,h2->next);

    printf("\n%u H3 Node value is = %d \tNode Address = %u",h3,h3->data,h3->next);

    return 0;

}
