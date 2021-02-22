 #include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}Node;

Node *top = NULL;

void StackPush();
void StackPop();
void travese();

int main()
{
    StackPush();
    StackPush();
    StackPush();

    StackPop();
    travese();
    return 0;
}
void  StackPush()
{
    int x;
    printf("\nEnter a data = ");
    scanf("%d",&x);

    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = top;
    top = newNode;
}

void StackPop()
{
    Node *avail ;
    avail = top;

    if(top == NULL)
    {
        printf("\n\tUndeflow");
    }
    else
    {
        printf("\nPopped data = %d",top->data);
        top = top->next;
        free(avail);
    }
}
void travese()
{
    Node *avail = top;

    if(top == NULL)
    {
        printf("\n\tStack is Empty ");
    }
    else
    {
        printf("\n\tStack Elements = ");

        while(avail != NULL)
        {
            printf("%d ",avail->data);
            avail = avail->next;
        }
    }
}
