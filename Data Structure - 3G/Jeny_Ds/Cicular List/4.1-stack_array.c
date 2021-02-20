#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int stack[MAX];
int top = -1;
//insert_stack();

void StackPush()
{
    int x;//data
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

void StackPop()
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

void  Traversal()
{
    int i ;
    printf("\nEnter Stack Elements = ");
    for(i = top ; i>= 0 ; i--)
    {
        printf(" %d ",stack[i]);
    }
}

int main()
{
    int c ;//value
    printf("\n 1 - Insert Stack ");
    printf("\n 2 - Delete Stack ");
    printf("\n 3 - Traversal ");
    printf("\n 4 - Exit ");
    while(1)
    {
        printf("\nEnter Choice = ");
        scanf("%d",&c);

        switch(c)
        {
        case 1:
           StackPush();
             Traversal();
            break;
        case 2:
          StackPop();
            break;
        case 3:
           Traversal();
            break;
        case 4:
            printf("The Program is Over.\n");
            exit(0);
            break;

        default:
            printf("Invalid choice, Enter Btween 1 to 4.\n");
        }
    }
    return 0;
}


