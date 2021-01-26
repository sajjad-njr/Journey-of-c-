#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

}Node;

Node *front = 0;
Node *rare = 0;

void enqueue(int x)
{
    Node *new_node = (Node*)malloc(Node);

    new_node->data = x;
    new_node = 0;

    if(front = rare = 0)
    {
        front = new_node;
        rare = new_node;
    }
    else
    {
        rare->next = new_node;
        rare = new_node;
    }
}
void display()
{
    Node *temp ;

    if(temp = rare = 0)
    {
        printf("\n\tQueue is EMPTY");
    }
    else
    {
        temp = front;
        while( temp != NULL)
        {
            printf(" %d ",temp->data);
            temp = temp->next;
        }
    }
}
