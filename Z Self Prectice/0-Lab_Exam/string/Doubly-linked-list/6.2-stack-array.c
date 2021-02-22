#include<stdio.h>
#define N 10

int top = -1;
int stack[N];

void push()
{
    int x;
    printf("\n\tEnter a new value = ");
    scanf("%d",&x);

    if(top == N-1)
    {
        printf("\n\tOverflow ");
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
        printf("\n\tUnderflow ");
    }
    else
    {
        item =stack[top];
        top--;
        printf("\n\tThe popped item is = %d",item);
    }
}

void display()
{
    for(int i = top; i >= 0 ;i--)
    {
        printf(" %d ",stack[i]);
    }
}

int main()
{
    push();
    push();
    pop();
    push();
    push();
    display();
    return 0;
}
