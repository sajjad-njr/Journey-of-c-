#include<stdio.h>
#define N 10
int queue[N];
int front = -1 ;
int rare = -1;

void push()
{

    int x;
    scanf("%d",&x);
    if(rare = N -1 )
    {
        printf("\n\tOverflow ");
    }
    else if(front == -1 && rare == -1)
    {
        front = rare = 0;
        queue[rare] = x;
    }
    else
    {
        rare++;
        queue[rare] = x;
    }
}

void del()
{
    if(front == -1 && rare == -1)
    {
        printf("\n\tzunderflow ");
    }
    else if(front == rare)
    {
        front = rare = -1;
    }
    else
    {
        printf("Popped value queue = %d",queue[front]);
        front++;
    }
}

void dispay()
{
    if(front = rare = -1)
    {
        printf("\n\tQueue is empty ");
    }
    else
    {
        for( int i = front ; i < rare+1 ; i++)
        {
            printf(" %d ",queue[i]);
        }
    }
}

int main()
{
    push();
    push();

    //del();
    dispay();

    return 0;
}
