#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}Node;
Node *top = 0;

void push(int x)
{
    Node *new_node = (Node*)malloc(sizeof(Node));
    //printf("\n\tEnter node Value = ");
    //scanf("%d"&new_node->data);
     new_node->data = x;
    new_node->next = top;
    top = new_node;


}

void display()
{
    Node *temp = top;
    if(top == 0)
    {
        print
    }
}
