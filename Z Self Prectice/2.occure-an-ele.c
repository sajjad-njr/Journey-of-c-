#include<stdio.h>
int main()
{
    int ar[10], i item = 0;
    for(i = 0 ; i < 10 ; i++)
    {
        scanf("%d",&ar[i]);
    }

    printf("\nsearch item = ");
    scanf("%d",&item);

    for(i = 0 ; i < 10 ; i++)
    {
         printf(" %d ",ar[i]);
    }
    return 0;
}
