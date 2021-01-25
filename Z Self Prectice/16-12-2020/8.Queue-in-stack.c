#include<stdio.h>
#include<stdlib.h>
#define N 5

int queue[N];
int front = -1;
int rare = -1;

void enque(int x)
{
    if(rare == N - 1)
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

void deque()
{
    if(front == -1 && rare == -1)
    {
        printf("\n\tUNDERFLOW");
    }
    else if(front == rare)
    {
        front = rare = -1;
    }
    else
    {
        printf("\n\tRemove data = %d\n",queue[front]);
        front++;
    }
}
void show()
{
    if(front == -1 && rare == -1)
    {
        printf("\n\tQUEUE is empty");
    }
    else
    {
        printf("\n Queue data = ");
        for(int i = front ; i < rare+1 ; i++)
        {
            printf(" %d ",queue[i]);
        }
    }
}
int main()
{
    enque(34);
    enque(334);
    enque(2334);
     show();

    deque();
    deque();
    show();

    return 0;

}
