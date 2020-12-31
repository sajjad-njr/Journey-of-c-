#include<stdio.h>

typedef struct node
{
    int data ;
    struct node *next;
} Node;

void main()
{
    Node h ;
    h.data = 89;
    h.next = NULL;

    printf("\n\tNode value = %d \t Node address = %u",h.data,h.next);
}
