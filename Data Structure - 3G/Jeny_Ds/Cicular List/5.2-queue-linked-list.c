#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *link;

} Node;

void Queue_Push();
void Queue_Pop();
void Traversal();
Node *front = 0, *rare = 0;

int main()
{
    int choice ;
    printf("\n 1 - Insert Queue");
    printf("\n 2 - Delete Queue");
    printf("\n 3 - Traversal ");
    printf("\n 4 - Exit\n");
    while(1)
    {
        printf("\nEnter Choice = ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            Queue_Push();
            break;
        case 2:
            Queue_Pop();
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


void Queue_Push()
{

    Node *new_node = (Node*)malloc(sizeof(Node));
    printf("\n\tEnter new value of Node  = ");
    scanf("%d",&new_node->data);
    new_node->link = NULL;

    if(front == 0 && rare == 0)
    {
        front = rare = new_node;
    }
    else
    {
        rare->link = new_node;
        rare = new_node;
    }
}

void Queue_Pop()
{
    Node *temp;
    if(front == 0 && rare == 0)
    {
        printf("\n\tUnderflow");
    }
    else
    {
        printf(" %d ",front->data);
        front = front->link;
        free(temp);
    }
}

void Traversal()
{
    Node *temp ;
    if(front == 0 && rare == 0)
    {
        printf("\n\tOverflow");
    }
    else
    {
        temp = front;
        while (temp != 0)
        {
            printf(" %d ",temp->data);
            temp = temp->link;
        }
    }
}




