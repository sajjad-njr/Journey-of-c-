#include<stdio.h>
int main()
{
    int ar[5], i, j, temp ;

    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&ar[i]);
    }

    printf("\n\t Before bubble sort  =  ");

    for(i = 0 ; i < 5 ; i++)
    {
        printf(" %d ",ar[i]);

    }

    for(i = 0 ; i < 5 ; i++)
    {
        for( j = 0 ; j < 5 - i - 1 ; j++)
        {
            if(ar[j] > ar[j+1])
            {
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
    printf("\n\t After  bubble sort  =  ");

    for(i = 0 ; i < 5 ; i++)
    {
        printf(" %d ",ar[i]);

    }

}
