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

    for( i = 0  ; i < n ; i++ )
    {
        for(j = i ; j < n; j++)
        {
            if(A[i] > A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }


    for(  i = 0 ; i < n ; i++)
    {
        printf(" %d ", A[i]);
    }

    return 0;

}
