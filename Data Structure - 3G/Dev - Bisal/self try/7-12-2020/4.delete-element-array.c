#include<stdio.h>
int main()
{
    int n ,pos = 0,i=0;
    n = 10;
    int a[10] = {34,56,76,56,34,21,53,75,84,50};

    printf("\n\tEnter position to delete : ");
    scanf("%d",&pos);

    pos = pos - 1;

    for(i = pos ; i < n - 1; i++)
    {
        a[i] = a[i+1];
    }
    n = n -1 ;
    for(i = 0 ; i < n; i++)
    {
        printf(" %d ",a[i]);
    }

    return 0;
}
