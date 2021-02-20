#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int queue[MAX];
int front = -1;
int rare = -1;
void Queue_Push();
void Queue_Pop();
void Traversal();

int main()
{
    int choice ;
    printf("\n 1 - Insert Queue ");
    printf("\n 2 - Delete Queue ");
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
    int value;
    printf("\n\tEnter data = ");
    scanf("%d",&value);

    if(rare == MAX-1)
    {
        printf("\n\tOverflow");
    }
    else if(front == -1 && rare == -1)
    {
        front = rare = 0;
        queue[rare] = value;
    }
    else
    {
        rare++;
        queue[rare] = value;
    }
}

void Queue_Pop()
{
    int item;

    if(front == -1 && rare == -1)
    {
        printf("\n\tUnderflow");
    }
    else if(front == rare)
    {
        front = rare = -1;
    }
    else
    {
        printf("\n\tPopped value from Queue= %d",queue[front]);
        front++;
    }
}

void  Traversal()
{
    int i ;

    if(front == -1 && rare == -1)
    {
        printf("\n\tQueue is Empty ");
    }
    else
    {
        printf("\nEnter QUEUE Elements = ");
        for(i = front ; i < rare+1 ; i++)
        {
            printf(" %d ",queue[i]);
        }
    }
}




