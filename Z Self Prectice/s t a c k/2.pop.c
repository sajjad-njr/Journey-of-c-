#include<stdio.h>

#define N 5

int stack[N];
int top = -1 ;
void push()
{
    int a;
    printf("\n\tEnter the value = ");
    scanf("%d",&a);

    if(top == N-1)
    {
        printf("\n\tOverflow");

    }
    else
    {
        top++;
        stack[top] = a;
    }

}
void pop()
{
    if(top == -1)
        printf("\n\tUnderflow");
    else
    {
        top--;
    }
}

void display()
{
    int i ;

    for(i = top ; i >= top ; i--)
    {
        printf(" %d ",stack[i]);
    }
}

int main()
{
    push();
    push();

    pop();
    display();
}

