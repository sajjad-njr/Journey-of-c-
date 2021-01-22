#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N], Top = -1;

void push()
{
    int data;
    printf("\n\tEnter data = ");
    scanf("%d",&data);

    if(Top == N - 1)
    {
        printf("\n\tOverflow");
    }
    else
    {
        Top++;
        stack[Top] = data;
    }
}
void display()
{



    int i ;
    for(i = Top ; i >=0 ; i--)
    {
        printf(" %d ",stack[i]);
    }

}

int main()
{
    int n ;
    scanf("%d",&n);

    while(n--)
    {
        push();
    }
    display();
}
