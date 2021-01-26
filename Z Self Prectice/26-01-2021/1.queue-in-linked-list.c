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
    Node *new_node = (Node*)malloc(sizeof(Node));

    new_node->data = x;
    new_node->next = 0;

    if(front ==0 && rare == 0)
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

    if(front ==0 && rare == 0)
    {
        printf("\n\tQueue is EMPTY");
    }
    else
    {
        temp = front;
        while( temp != 0)
        {
            printf(" %d ",temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    enqueue(45);
    enqueue(3);
    enqueue(100);

    display();
    return 0;
}
