#include<stdio.h>

void main()
{
    int N , i , j , temp;
    printf("Enter a Array size : ");
    scanf("%d",&N);

    int A[N];
    printf("\n\tEnter Array value : ");
    for(i = 0 ; i < N ; i++)
    {
        scanf("%d",&A[i]);
    }


    printf("\n\n\t\tAfter Shorting Value : ");

    for(i = 0 ; i < N ; i++)
    {
         printf(" %d ",A[i]);
    }
}

