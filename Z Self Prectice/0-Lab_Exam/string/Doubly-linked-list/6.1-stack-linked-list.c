#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}Node;

Node *top = NULL;
Node *push()
{
    int x ;
    Node *newNode = (Node*)malloc(sizeof(Node));
    printf("\n\tEnter new data = ");
    scanf("%d",&newNode->data);
    newNode->next = NULL;

    newNode->next = top;
    top = newNode;
}
Node *pop()
{
    Node *avail = top;

    if(top == NULL)
    {
        printf("\nUnderflow ");
    }
    else
    {
        printf("\n\tPopped data = %d",top->data);
        top = top->next;
        free(avail);
    }
}

void display(Node *a)
{
    a = top;
    while(a != NULL)
    {
        printf(" %d ",a->data);
        a = a->next;
    }
}
int main()
{
    Node *b = push();
    b = push();
    b = pop();
    b = push();
    display(b);

    return 0;
}
