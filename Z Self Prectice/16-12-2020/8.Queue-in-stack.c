#include<stdio.h>
#include<stdlib.h>
#define N 5

int queue[N];
int front = -1;
int rare = -1;

void enque(int x)
{
    if(rear = N - 1)
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
