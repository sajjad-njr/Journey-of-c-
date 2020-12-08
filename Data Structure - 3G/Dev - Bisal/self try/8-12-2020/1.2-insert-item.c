#include<stdio.h>

int main()
{
    int a[1000];
    int i = 0 , pos = 0 ,n,data;

    printf("\n\tEnter array size : ");
    scanf("%d",&n);

    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n\tEnter array  insert position : ");
    scanf("%d",&pos);
    printf("\n\tEnter array  insert  element : ");
    scanf("%d",&data);


    for(i = n - 1 ; i >= pos - 1 ; i--)
    {
       a[i+1] = a[i];
    }

    a[pos - 1] = data;
    n = n + 1;

     for(i = 0 ; i < n ; i++)
    {
         printf(" %d ",a[i]);
    }

    return 0;
}
