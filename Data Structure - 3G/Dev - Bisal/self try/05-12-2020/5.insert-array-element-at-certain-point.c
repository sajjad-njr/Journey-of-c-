#include<stdio.h>
int main()
{
    int a[10];
    int i = 0 ,size;

    scanf("%d",&size);
    printf("\n\tEnter element of array : ");

    for(;i < size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n\tafter insert : ");
    for(i = 0 ;i < size;i++)
    {
         printf(" %d ",a[i]);
    }
    return 0;
}
