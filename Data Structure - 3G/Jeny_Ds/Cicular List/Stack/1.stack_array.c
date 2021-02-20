#include<stdio.h>
#include<stdlib.h>
#define MAX 20

void Stack_Push();
void Stack_Pop();
void  Traversal();

int stack[MAX];
int TOP = -1;

int main()
{
    int num;
    printf("\n 1 - Insert Stack ");
    printf("\n 2 - Delete Stack ");
    printf("\n 3 - Traversal ");
    printf("\n 4 - Exit ");
    while(1)
    {
        printf("\nEnter Choice = ");
        scanf("%d",&num);

        switch(num)
        {
        case 1:
            Stack_Push();
            Traversal();
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
            printf("Invalid choice, Enter Between 1 to 4.\n");
        }
    }
    return 0;
}

void Stack_Push()
{
    int number;
    printf("\n\tEnter data = ");
    scanf("%d",&number);

    if(TOP == MAX-1)
    {
        printf("\n\tOverflow");
    }
    else
    {
        TOP++;
        stack[TOP] = number;
    }
}

void Stack_Pop()
{
    int item;
    if(TOP == -1)
    {
        printf("\n\tUnderflow");
    }
    else
    {
        item = stack[TOP];
        TOP--;
        printf("\n\tPopped item = %d",item);
    }
}

void  Traversal()
{
    int i ;
    printf("\nEnter Stack Elements = ");
    for(i = TOP ; i>= 0 ; i--)
    {
        printf(" %d ",stack[i]);
    }
}





