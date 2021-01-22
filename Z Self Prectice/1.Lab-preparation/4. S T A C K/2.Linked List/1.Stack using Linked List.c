#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next ;

}Node;
Node *top = 0;
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
    if(top== 0)
    {
        printf("\n\tUnderflow ");
    }
    else
    {
        //printf("\n\t%d ",temp->data);
        top = top->next;
        free(temp);
    }
}
void display()
{
      Node *temp = top;
    if(top == 0)
    {
        printf("\n\tNode empty ");
    }
    else
    {

        while(temp != 0)
        {
            printf(" %d ",temp->data);
            temp = temp->next ;
        }
    }
}

int main()
{
    push(100);

    push(230);
    //push(5);
    pop();

    display();

    return 0;
}
