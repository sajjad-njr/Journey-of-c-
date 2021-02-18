#include<stdio.h>
#include<stdlib.h>
#define N 10

int stack[N];
int top = -1;

void push()
{
    int x;
    printf("\n\tEnter data = ");
    scanf("%d",&x);

    if(top == N-1)
    {
        printf("\n\tOverflow");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    int item;
    if(top == -1)
    {
        printf("\n\tUnderflow");
    }
    else
    {
        item = stack[top];
        top--;
        printf("\n\tPopped item = %d",item);
    }
}

void display()
{
    int i ;
    for(i = top ; i>=0 ; i--)
    {
        printf(" %d ",stack[i]);
    }
}

int main()
{
    int c ;
    printf("\n 1 - Insert Stack");
    printf("\n 2 - Delete  Stack");
    printf("\n 3 - Display ");
    printf("\n 4 - Exit\n");
    while(1)
    {
         printf("\nEnter Choice = ");
        scanf("%d",&c);

        switch(c)
        {
        case 1:
          push();
            break;
        case 2:
           pop();
            break;

        case 3:
            display();
            printf("\nEnter Stack Elements = ");
            break;

        case 4:
            printf("The Program is Over.\n");
            exit(0);
            break;

        default:
            printf("Invalid choice, please try again.\n");
        }
    }
    retun 0;
}

