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
void pop()
{
    Node *temp;
    temp = top;

    if(top == 0)
    {
        printf("\n\tUnderflow ");
    }
    else
    {
        printf("\n\t %d",top->data);

        top = top-next;
        free(temp);
    }
}
void display()
{
    if(top == 0)
    {
        printf("\n\tunderflow");
    }
    else
    {
        Node *temp = top;
        while(temp != NULL)
        {
            printf(" %d ",temp->data);
            temp = temp -> next ;
        }
    }
}

