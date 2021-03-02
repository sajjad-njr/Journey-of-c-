#include<stdio.h>

int main()
{
    int  i , n, j, temp;
    printf("\nEnter the size of Array = ");
    scanf("%d",&n);

    int A[n];

    for(  i = 0 ; i < n ; i++)
    {
        scanf("%d",&A[i]);
    }

    for( i = 0  ; i < n - 1 ; i++ )
    {
        for(j = 0 ; j < n -i - 1 ; j++)
        {
            if(A[j] >  A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }


    for(  i = 0 ; i < n ; i++)
    {
        printf(" %d ", A[i]);
    }

    return 0;

}

