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
    //scanf("%d",&n);

    do
    {
        printf("\n\tEnter choice 1.PUSH 2.DISPALY = ");
        scanf("%d",&n);

        switch(n)
        {
        case 1:
            push();
            break;
        case 2 :
            display();
            break;
        default:
            printf("\n\tWrong Input ");
        }
    }while(n!= 0);
}
