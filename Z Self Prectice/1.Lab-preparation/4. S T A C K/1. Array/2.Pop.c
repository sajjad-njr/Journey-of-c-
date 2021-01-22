#include<stdio.h>
#include<stdlib.h>

#define N 5
int stack[N], top = -1 ;

void push()
{
    int data;
    if(top == N -1 )
    {
        printf("\n\tOverflow");
    }
    else
    {
        printf("\n\tEnter data = ");
        scanf("%d",&data);

        top = top + 1;
        stack[top] = data;
    }
}

void pop()
{
    int data;
    if(top == -1)
        printf("\n\tUnderflow");
    else
    {
        data = stack[top];
        top--;
        printf(" %d ",data);
    }
}

void display()
{
    int i ;
    for(i = top ; i >= 0 ; i--)
    {
        printf(" %d ",stack[i]);
    }
}
int main()
{
    int n ;

    do
    {
        printf("\n\tEnter choice 1.PUSH  2. POP  3.DISPALY = ");
        scanf("%d",&n);

        switch(n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3 :
            display();
            break;
        default:
            printf("\n\tWrong Input ");
        }
    }
    while(n!= 0);
}
