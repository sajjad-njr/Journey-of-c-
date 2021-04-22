#include<stdio.h>

int main()
{
    printf("\n\tEnter the size of array = ");
    int n , i , j ;
    scanf("%d",&n);

    int X[n];

    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&X[i]);
    }
    int temp;
    for (i = 0 ; i < n - 1 ; i++)
    {
        for(j = 0 ; j < n - i - 1 ; j++)
        {
            if(X[j] > X[j+1])
            {
                temp = X[j];
                X[j] = X[j+1];
                X[j+1] = temp;
            }
        }
    }

    for( i = 0 ; i < n ; i++)
    {
        printf(" %d ",X[i]);
    }

    printf("\n\tEnter  data that find = ");
    int  Z ;
    scanf("%d",&Z);

    int l = 1 ;
    int h = n ;
    int flag = 0;


    while( l <= h && flag == 0)
    {
        int mid = (l+h)/2;
        int Xm = X[mid];

        if(Xm < Z)
        {
            l = mid + l;
        }
        else if (Xm > Z)
        {
            h = mid + l;
        }
        else
        {
            flag = 1;
        }
    }

    if(flag == 1)
    {
        printf("\n\tFound ");
    }
    else
    {
        printf("\n\tNot Found ");
    }

    return 0;

}
