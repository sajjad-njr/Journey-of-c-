#include<stdio.h>

int main()
{
    int n;
    printf("\nEnter the size of Array = ");
    scanf("%d",&n);

    int Z[n];

    printf("\nEnter the element of Array = ");
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&Z[i]);
    }

    int item, i = 1;

    printf("\nEnter an item = ");
    scanf("%d",&item);

    while(i <= n && item != Z[i] )
    {
        i = i + 1;
    }
    if( i <= n)
    {
        printf("\nFound");
    }
    else
    {
        printf("\nNot Found");
    }
    return 0;
}
