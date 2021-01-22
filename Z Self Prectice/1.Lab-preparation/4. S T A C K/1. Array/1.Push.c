#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N], Top = -1;

void push()
{
    int data;
    printf("\n\tEnter data = ");
    scnaf("%d",&data);

    if(Top == N)
    {
        printf("\n\tOverflow");
    }
}
int main()
{

}
