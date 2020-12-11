#include<stdio.h>

int main()
{
    int n = 10 ,a[10] = {45,56,7,78,9,87,54,32,29,987};
    int i , j,pos,element ;

    for(i = 0 ; i <n ; i++)
    {
        printf(" %d ",a[i]);
    }

    printf("\nenter an element ");
    scanf("%d",&element);

    printf("\nenter an  pos ");
    scanf("%d",&pos);

    if(pos < 0 &&  pos > n )
        printf("\nData is not found");
    else
    {
        for(i = 0 ; i >= pos; i--)
        {
            a[i+1] = a[i];
        }
        a[pos - 1] = element;
        n = n + 1;
    }

    for(i = 0 ; i <n ; i++)
    {
        printf(" %d ",a[i]);
    }

    return 0;
}
