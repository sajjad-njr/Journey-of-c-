#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int C_Queue_Arr[MAX];
int front=-1;
int rear=-1;

void display( );
void insert(int item);
int Delete();

int main()
{
    int choice,item;
    while(1)
    {
        printf("\n1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Exit\n");

        printf("\nEnter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1 :
            printf("\nInput the element for insertion : ");
            scanf("%d",&item);
            insert(item);
            break;
        case 2 :
            printf("\nElement deleted is : %d\n",Delete());
            break;

        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nWrong choice\n");
        }
    }

    return 0;

}

void insert (int item)
{
    if((front==0 && rear==MAX-1) || (front==rear+1) )
    {
        printf("\nQueue Overflow\n");
        return;
    }
    if(front == -1 )
        front=0;

    if(rear==MAX-1)
        rear=0;
    else
        rear=rear+1;
    C_Queue_Arr[rear]=item ;
}

int  Delete()
{
    int item;
    if(front==-1)
    {
        printf("\nQueue Underflow\n");
        exit(0);
    }
    item=C_Queue_Arr[front];
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else if(front==MAX-1)
        front=0;
    else
        front=front+1;
    return item;
}


void display()
{
    int i;
    if(front==-1)
    {
        printf("\nQueue is empty\n");
        return;
    }
    printf("\nQueue elements : ");
    i=front;
    if( front<=rear )
    {
        while(i<=rear)
            printf("%d ",C_Queue_Arr[i++]);
    }
    else
    {
        while(i<=MAX-1)
            printf("%d ",C_Queue_Arr[i++]);
        i=0;
        while(i<=rear)
            printf("%d ",C_Queue_Arr[i++]);
    }
    printf("\n");
}

