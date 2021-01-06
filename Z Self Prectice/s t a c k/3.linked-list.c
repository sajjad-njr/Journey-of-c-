#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *link;

}Node;

Node *top = 0;

void push(int x )
{
    Node *new_node ;
    new_node = (Node*)malloc(sizeof(Node));

    new_node->data = x ;
    new_node->link = top;
    top = new_node ;
}


void display()
{
    Node *AVAIL;
    AVAIL = top;

    if(top == 0)
    {
        printf("\n\tNode is empty ");
    }
}
