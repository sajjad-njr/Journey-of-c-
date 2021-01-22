#include<stdio.h>
#include<stdlib.h>
Node *top = 0;
typedef struct node
{
    int data;
    struct node *next ;

}NOde;

void push(int x)
{

    Node *new_node = (Node*) malloc(sizeof(Node));
    new_node->data = x;
    new_node -> next = top;
    top = new_node;

}
