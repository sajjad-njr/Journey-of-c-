#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;
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

void pop()
{
    Node *temp = top;

    if(top == 0)
    {
        printf("\n\tUnderflow");
    }
    else
    {
        top = top->next;
        free(temp);
    }
}

void displayS()
{
    Node *temp = top;
    if(top == 0)
    {
        printf("\n\tStack is empty ");
    }
    while(temp != 0)
    {
        printf(" %d ",temp->data);
        temp = temp->next;
    }
}

int main()
{
    push(2);
    push(23);
    push(232);
    pop();
    displayS();
    return 0;
}
