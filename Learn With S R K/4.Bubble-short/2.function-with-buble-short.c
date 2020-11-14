#include<stdio.h>
void BubbleShort(int A[],int N);

void main()
{
    int N, i, j, temp;
    printf("Enter a Array size : ");
    scanf("%d",&N);

    int A[N];
    printf("\n\tEnter Array value : ");
    for(i = 0 ; i < N ; i++)
    {
        scanf("%d",&A[i]);
    }

    BubbleShort(A,N);

    printf("\n\n\t\tAfter Shorting Value : ");

    for(i = 0 ; i < N ; i++)
    {
        printf(" %d ",A[i]);
    }
}

void BubbleShort(int A[],int N)
{
    /*Shorting Part*/
    int i, j, temp;

    for(i = 0 ; i < N-1 ; i++)
    {
        for(j = 0 ; j < N - 1- i ; j++)
        {
            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp ;
            }
        }
    }


}
