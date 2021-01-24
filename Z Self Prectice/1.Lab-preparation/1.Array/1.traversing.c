#include<stdio.h>

int main()
{
    int size;
    printf("\nEnter the size of array = ");
    scanf("%d",&size);

    int a[size],i;
    printf("\nEnter the size of array = ");

    for(i = 0 ; i < size ; i++)
    {
        scanf("%d",&a[i]);
    }

     printf("\nArray elements = ");

    for(i = 0 ; i < size ; i++)
    {
        printf(" %d ",a[i] * 5);  // if say add 5 all value (%d + 5);
    }
    return 0;
}
