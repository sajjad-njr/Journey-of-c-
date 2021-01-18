#include<stdio.h>

int main()
{
    int size, position, value ;
    printf("\nEnter the size of array = ");
    scanf("%d",&size);

    int a[size],i;
    printf("\nEnter the size of array = ");

    for(i = 0 ; i < size ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter the value that insert = ");
    scanf("%d",&value);

    printf("\nEnter the position = ");
    scanf("%d",&position);

    for(int i = size-1 ; i >= position-1 ; i--)
    {
        a[i+1]= a[i];

    }
    a[position-1] = value;
    size++;

    for(i = 0 ; i < size ; i++)
    {
        printf(" %d ",a[i]);  // if say add 5 all value (%d + 5);
    }
    return 0;
}

