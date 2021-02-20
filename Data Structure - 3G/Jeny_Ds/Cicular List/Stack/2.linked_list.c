#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *link;

} Node;

void Stack_Push();
void Stack_Pop();
void  Traversal();

Node *top = 0;

int main()
{
    int num ;
    printf("\n 1 - Insert Stack");
    printf("\n 2 - Delete Stack");
    printf("\n 3 - Traversal  ");
    printf("\n 4 - Exit\n");
    while(1)
    {
        printf("\nEnter Choice = ");
        scanf("%d",&num);

        switch(num)
        {
        case 1:
            Stack_Push();
            break;
        case 2:
            Stack_Pop();
            break;
        case 3:
             Traversal();
            break;
        case 4:
            printf("The Program is Over.\n");
            exit(0);
            break;
        default:
            printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}

void Stack_Push()
{
    int value;
    printf("\n\tEnter value = ");
    scanf("%d",&value);

    Node *new_node = (Node*)malloc(sizeof(Node));
    new_node->data = value;
    new_node->link = top;
    top = new_node;
}

void Stack_Pop()
{
    Node *temp ;
    temp = top;
    if(top == 0)
    {
        printf("\n\tUnderflow");

    }
    else
    {
        printf("\n\tPopped data = %d",top->data);
        top=top->link;
        free(temp);
    }
}
void  Traversal()
{
    Node *a;
    a = top;

    if(top == 0)
    {
        printf("\n\tStack Empty ");
    }
    else
    {
        printf("\nEnter Stack Elements = ");
        while(a != 0)
        {
            printf(" %d ",a->data);
            a = a->link;
        }
    }
}




