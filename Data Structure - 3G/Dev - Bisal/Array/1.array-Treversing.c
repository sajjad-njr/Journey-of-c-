//this is array traversing

#include<stdio.h>

int main()
{
    int a[50],size,i;
    printf("\nenter the array size : ");
    scanf("%d",&size);

    printf("\nEnter array element : \n ");
    for(i= 0; i < size ; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i= 0; i < size ; i++)
    {
         printf(" %d ",a[i]);
    }

    return 0;
}
